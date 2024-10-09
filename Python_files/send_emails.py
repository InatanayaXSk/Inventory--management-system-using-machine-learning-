import smtplib, ssl
def send_email(message):

    host = "smtp.gmail.com"
    port = 465
    username = "sendmail.pycharan@gmail.com"
    password = "YOUR PASSWORD GOES HERE"
    receiver = "sendmail.pycharan@gmail.com"
    context = ssl.create_default_context()

    with smtplib.SMTP_SSL(host, port, context=context) as server:
        server.login(username, password)
        server.sendmail(username, receiver, message)


