# 将本目录所有改动文件的内容提交到github
def push():
    import os
    os.system('git add .')
    os.system('git commit -m "update"')
    os.system('git push')