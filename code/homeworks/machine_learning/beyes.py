import numpy as np
import pandas as pd
def mean(x):
    return sum(x)/len(x)
def standard_deviation(x):
    return np.sqrt(sum([(i - mean(x))**2 for i in x])/len(x))
def gaussian_probability(x, mean, stdev):
    exponent = np.exp(-(x-mean)**2 / (2 * stdev**2))
    return (1 / (np.sqrt(2 * np.pi) * stdev)) * exponent
train=pd.read_csv('train.csv')
test=pd.read_csv('test.csv')
train_data=train.iloc[:,1:]
train_labels=train.iloc[:,0]
test_data=test.iloc[:,1:]       
for i in range(train_data.shape[0]):#遍历数组，根据是否患病分类
    if(train_data['diabetes'][i] == 1):
        new = pd.DataFrame({'glucose':train_data['glucose'][i],'bloodpressure':train_data['bloodpressure'][i]},index = [i])
        d_yes = d_yes.append(new,ignore_index=True)
    else:
        new = pd.DataFrame({'glucose':train_data['glucose'][i],'bloodpressure':train_data['bloodpressure'][i]},index = [i])
        d_no = d_no.append(new,ignore_index=True)
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
for i in range(test_data.shape[0]):
    if(gaussian_probability(test_data['glucose'][i],d_yes_mean_glucose,d_yes_std_glucose) * gaussian_probability(test_data['bloodpressure'][i],d_yes_mean_bloodpressure,d_yes_std_bloodpressure) > gaussian_probability(test_data['glucose'][i],d_no_mean_glucose,d_no_std_glucose) * gaussian_probability(test_data['bloodpressure'][i],d_no_mean_bloodpressure,d_no_std_bloodpressure)):
        test_data['diabetes'][i] = 1
    else:
        test_data['diabetes'][i] = 0    
test_data.to_csv('result.csv')
print(test_data)