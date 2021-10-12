# I don’t know why I can’t compile locally with Chinese comments, so I use English comments instead
import pandas as pd
import numpy as np
# import numpy for array class & pandas for csv input
data = pd.read_csv('train.csv') 
# input csv file in current folder
test = pd.read_csv('test .csv') # input the test set
test['species'] =  '' # init speceies
for index,row in test.iterrows(): 
    tdata=data.copy()
    tdata['op']=''# init op
    for i,j in data.iterrows(): #knn 
        j['op']=np.linalg.norm(row[1:5].values-j[0:4].values)#Calculate the Euclidean distance between two points
        tdata.iloc[i]=j
    tdata = tdata.sort_values(by = 'op', ascending = True)#sort by OP
    tdata = tdata.iloc[:1]# get Top k
    tans = tdata['species'].mode().iloc[0]#get mode 
    row['species']=tans;
    test.iloc[index] = row
out = test[['Id','species']] #get the ans
out.to_csv('answer.csv',index=False)# output to the file