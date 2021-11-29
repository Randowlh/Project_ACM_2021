import pandas as pd
import seaborn as sns
import matplotlib.pyplot as plt
%matplotlib inline 
liushi=pd.read_csv('liushi.csv')
liushi.info() #查看具体信息
liushi.head() #查看数据
liushi=pd.get_dummies(liushi) #哑变量处理
liushi.head() #查看数据
liushi.drop(['Churn_No','gender_Male'],axis=1,inplace=True) #变量删减

liushi.columns=liushi.columns.str.lower() #统一大小写
liushi=liushi.rename(columns={'churn_yes':'flag'}) #重命名变量值
liushi.flag.value_counts() #查看留存和流失的数量
liushi.flag.value_counts(1) #查看留存和流失的占比
summary=liushi.groupby('flag') #分别汇总留存和流失数据
print(summary) #输出结果
summary.mean() #分别求出各指标均值
sns.countplot(y='contract_month',hue='flag',data=liushi) #按contract_month分组查看数据对比liushi.corr() #相关系数分析
liushi.corr() #相关系数分析
liushi.corr()[['flag']].sort_values('flag',ascending=False) #因变量相关系数分析
y=liushi['flag']
x=liushi[['contract_month','internet_other','paymentelectronic','monthlycharges','totalcharges','contract_1yr','dependents_att','partner_att','paymentcreditcard']]
#选取自变量
from sklearn.model_selection import train_test_split
x_train,x_test,y_train,y_test=train_test_split(x,y,test_size=0.3,random_state=100)
#分割训练集和测试集
from sklearn import linear_model
lr=linear_model.LogisticRegression()
#选择逻辑回归
lr.fit(x_train,y_train) #模型拟合
y_pred_train=lr.predict(x_train)
y_pred_test=lr.predict(x_test)
#模型预测
print(y_pred_train) #训练集预测值
import sklearn.metrics as metrics #调用混淆矩阵
metrics.confusion_matrix(y_train,y_pred_train) #训练集混淆矩阵
metrics.accuracy_score(y_train,y_pred_train) #计算精确率
metrics.confusion_matrix(y_test,y_pred_test) #测试集混淆矩阵
metrics.accuracy_score(y_test,y_pred_test) #测试集精确率
from sklearn.metrics import roc_curve,auc
fpr,tpr,threshold=roc_curve(y_train,y_pred_train)
roc_auc=auc(fpr,tpr)
#调用ROC曲线
print(roc_auc) #AUC值
plt.title('Receiver Operating Characteristic')
plt.plot(fpr,tpr,'b',label='AUC = %0.2f'% roc_auc)
