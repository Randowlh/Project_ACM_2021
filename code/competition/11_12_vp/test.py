# send email by smtp using python smtplib
def send_email(str_to, str_subject, str_content):
    import smtplib
    from email.mime.text import MIMEText
    from email.header import Header
    from email.utils import formataddr

    # 第三方 SMTP 服务
    mail_host = "smtp.qq.com"  # 设置服务器
    mail_user = "1303775690@qq.com"  # 用户名
    
    mail_pass = "xqjqjqjqjqjqjqjq"  # 口令
    
    sender = 'asd'
    