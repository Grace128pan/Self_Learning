# presentation about engineering 5-10 minutes
# social/technical engineering(first lecture)
# task will be on ortus
# 5-7 slides
# on site activities also
# laboratory work or presentation
# finish quiz and then decide on final grade criteria
'''
1.list
2.dictionary
3.tuple
'''
what_i_see = ["pen", "book", "laptop", "mouse", "keyboard"]
print(what_i_see[0:2])
what_i_see.append("phone")
print(what_i_see)

room_list = [1, 2, 3, 4, 5]
print(room_list)
room_list.append(1)
print(room_list)
room_list.insert(2, "good") #need 2 arguments
print(room_list)
print(len(room_list))
room_list.remove("good") #take value as argument
print(room_list)
room_list.sort()
print(room_list)

squares = [x**2 for x in range(10)]
print(squares)

#2D list- matrix
matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
print(matrix[0:3])
print(matrix[0][0])  #access data in matrix

#create email client software program
#helpinbox.lv
#28884341
#smpt protocal

import smtplib
from email.mime.text import MIMEText
from email.mime.multipart import MIMEMultipart

smtp_server = "mail.inbox.lv"
smtp_port = 587
sender = "room_212.inbox.lv"
receiver = ["sudniks3@inbox.lv", "sudniks3@gmail.com"]
password = "kabinets"
message = MIMEMultipart()
message["From"] = sender
message["To"] = ", ".join(receiver)
message["Subject"] = "Test email"

body = "This is a test email"
message.attach(MIMEText(body, "plain"))

try:
    server = smtplib.SMTP(smtp_server, smtp_port)
    server.ehlo()  # Initiating the SMTP conversation
    server.starttls()
    server.login(sender, password)
    server.sendmail(sender, receiver, message.as_string())
    print("Email sent successfully")
except Exception as e:
    print("An error occurred:", str(e))
finally:
    server.quit()  # Close the SMTP connection

#next week we will use pandas, bootcamp app, jupternotebook