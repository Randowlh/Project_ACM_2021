# I don’t know why I can’t compile locally with Chinese comments, so I use English comments instead
import pandas as pd
import numpy as np
# import numpy for array class & pandas for csv input
data = pd.read_csv('train.csv') 
# input csv file in current folder
def knn(vec,k,t_data):# main KNN function
    t_data['op'] = '' # init op
    for index,row in data.iterrows():
        row['op'] = np.linalg.norm(vec-row[0:4].values)#Calculate the Euclidean distance between two points
        t_data.iloc[index] = row
    t_data = t_data.sort_values(by = 'op', ascending = True)#sort by OP
    t_data = t_data.iloc[:k]# get Top k
    ans = t_data['species'].mode().iloc[0]#get mode 
    return ans # return ans
test = pd.read_csv('test .csv') # input the test set
test['species'] =  '' # init speceies
for index,row in test.iterrows(): 
    v = row[1:5].values
    row['species'] = knn(v,1,data)# Calculate each row 
    test.iloc[index] = row
out = test[['Id','species']] #get the ans
out.to_csv('answer.csv',index=False)# output to the file