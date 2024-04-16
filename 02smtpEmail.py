import smtplib
from email.mime.text import MIMEText
from email.mime.multipart import MIMEMultipart

# Email account credentials
sender_email = "gracepan128@inbox.lv"
sender_password = "GracePan123!!"  # Replace with your actual password

# Recipient email addresses
recipient_emails = ["1286720422@qq.com", "906428753@qq.com"]

# SMTP server settings
smtp_server = "mail.inbox.lv"
smtp_port = 587
smtp_tls = True  # Use TLS encryption
smtp_ssl = False  # Do not use SSL

def send_email(subject, body, sender, recipients):
    message = MIMEMultipart()
    message["From"] = sender
    message["To"] = ", ".join(recipients)
    message["Subject"] = subject
    message.attach(MIMEText(body, "plain"))

    try:
        server = smtplib.SMTP(smtp_server, smtp_port)
        server.starttls() if smtp_tls else None  # Start TLS encryption if smtp_tls is True
        server.login(sender_email, sender_password)
        server.sendmail(sender, recipients, message.as_string())
        print("Email sent successfully")
    except Exception as e:
        print("An error occurred:", str(e))
    finally:
        server.quit() if server else None  # Close the SMTP connection if server exists

# Email content
email_subject = "Test email"
email_body = "This is a test email sent from Python."

# Send email
send_email(email_subject, email_body, sender_email, recipient_emails)

