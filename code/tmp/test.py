# rename file in folder
# in this format:
#  /aaa/bbb/ccc.xls to /aaa/bbb/123.xls
def rename_file(file_path):
    # get file name
    file_name = file_path.split('/')[-1]
    # get file name without extension
    file_name_no_ext = file_name.split('.')[0]
    # get extension
    file_ext = file_name.split('.')[-1]
    # get number
    file_num = int(file_name_no_ext)
    # rename file
    os.rename(file_path, file_path.replace(file_name_no_ext, str(file_num)))
    # rename file
    os.rename(file_path.replace(file_name_no_ext, str(file_num)), file_path.replace(file_name_no_ext, str(file_num + 1)))
    # rename file
    os.rename(file_path.replace(file_name_no_ext, str(file_num + 1)), file_path.replace(file_name_no_ext, str(file_num + 2)))
    # rename file
    os.rename(file_path.replace(file_name_no_ext, str(file_num + 2)), file_path.replace(file_name_no_ext, str(file_num + 3)))
    # rename file
    os.rename(file_path.replace(file_name_no_ext, str(file_num + 3)), file_path.replace(file_name_no_ext, str(file_num + 4)))
    # rename file
    os.rename(file_path.replace(file_name_no_ext, str(file_num + 4)), file_path.replace(file_name_no_ext, str(file_num + 5)))
    # rename file
    os.rename(file_path.replace(file_name_no_ext, str(file_num + 5)), file_path.replace(file_name_no_ext, str(file_num + 6)))
    # rename file
    os.rename(file_path.replace(file_name_no_ext, str