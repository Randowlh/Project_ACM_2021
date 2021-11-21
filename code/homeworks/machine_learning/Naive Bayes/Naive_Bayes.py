import numpy as np
import pandas as pd
def mean(x):
    return sum(x)/len(x)
def standard_deviation(x):
    return np.sqrt(sum([(i - mean(x))**2 for i in x])/len(x))
def gaussian_probability(x, mean, stdev):
    exponent = np.exp(-(x-mean)**2 / (2 * stdev**2))
    return (1 / (np.sqrt(2 * np.pi) * stdev)) * exponent
train=pd.read_csv('../input/mlbayes/train.csv')
test=pd.read_csv('../input/mlbayes/test.csv')
# train_data=train.iloc[:,1:]
# train_labels=train.iloc[:,0]
# test_data=test.iloc[:,1:]   
d_yes = pd.DataFrame(columns = ('glucose','bloodpressure')) 
d_no  = pd.DataFrame(columns = ('glucose','bloodpressure')) 
d_yes_mean = d_yes.mean()
d_yes_std = d_yes.std() 
d_no_mean = d_no.mean()
d_no_std = d_no.std()
d_yes_mean_glucose = d_yes_mean['glucose']
d_yes_mean_bloodpressure = d_yes_mean['bloodpressure']  
d_yes_std_glucose = d_yes_std['glucose']
d_yes_std_bloodpressure = d_yes_std['bloodpressure']
d_no_mean_glucose = d_no_mean['glucose']
d_no_mean_bloodpressure = d_no_mean['bloodpressure']
d_no_std_glucose = d_no_std['glucose']
d_no_std_bloodpressure = d_no_std['bloodpressure']
for i in range(train.shape[0]):
    if(train['diabetes'][i] == 1):
        new = pd.DataFrame({'glucose':train['glucose'][i],'bloodpressure':train['bloodpressure'][i]},index = [i])
        d_yes = d_yes.append(new,ignore_index=True)
    else:
        new = pd.DataFrame({'glucose':train['glucose'][i],'bloodpressure':train['bloodpressure'][i]},index = [i])
        d_no = d_no.append(new,ignore_index=True)
ans=[];
for i in range(test.shape[0]):
    if(gaussian_probability(test['glucose'][i],d_yes_mean_glucose,d_yes_std_glucose) * gaussian_probability(test['bloodpressure'][i],d_yes_mean_bloodpressure,d_yes_std_bloodpressure) > gaussian_probability(test['glucose'][i],d_no_mean_glucose,d_no_std_glucose) * gaussian_probability(test['bloodpressure'][i],d_no_mean_bloodpressure,d_no_std_bloodpressure)):
        ans.append(1);
    else:
        ans.append(0);   
ans = pd.DataFrame({'Id':range(test.shape[0]),'diabetes':ans})
# test.to_csv('result.csv')
print(ans)
ans.to_csv('sample.csv')