"""
Task:
 The town of Fiftyville has called upon you to solve the mystery of the stolen duck. Authorities believe that the thief stole the duck and then, shortly afterwards, took a flight out of town with the help of an accomplice. Your goal is to identify:

Who the thief is,
What city the thief escaped to, and
Who the thief’s accomplice is who helped them escape
All you know is that the theft took place on July 28, 2023 and that it took place on Humphrey Street.

How will you go about solving this mystery? The Fiftyville authorities have taken some of the town’s records from around the time of the theft and prepared a SQLite database for you, fiftyville.db, which contains tables of data from around the town. You can query that table using SQL SELECT queries to access the data of interest to you. Using just the information in the database, your task is to solve the mystery.

Expected result is both thief and accomplce are male.
Their names are connected with batman.

"""
#step1: get the exact schema of all the tables in the database
import sqlite3
import pandas as pd

def retrieve_crime_scene_info(db_file, street, year, month, day):
    try:
       
        conn = sqlite3.connect(db_file)

      
        query = """
            SELECT id, year, month, day, street, description
            FROM crime_scene_reports
            WHERE street = ? AND year = ? AND month = ? AND day = ?
        """

      
        crime_data = pd.read_sql_query(query, conn, params=(street, year, month, day))

        if not crime_data.empty:
            print("Crime Scene Report Information:")
            print(crime_data.to_string(index=False))
        else:
            print("No crime scene report found matching the specified criteria.")

    except sqlite3.Error as e:
        print("Error querying the SQLite database:", e)

    finally:
      
        conn.close()

db_file_path = 'python/fiftyville.db'

# Specify the parameters to search for the crime scene report
street_name = 'Humphrey Street'
crime_year = 2021
crime_month = 7
crime_day = 28

retrieve_crime_scene_info(db_file_path, street_name, crime_year, crime_month, crime_day)
# step1: obtain useful information: crime happened at 10:15am at Humphrey Street on July 28 2021, 3 witnesses mentioned bakery.

#step2: get transcript info from interviews on July 28, 2021
def retrieve_interview_info(db_file, year, month, day, keyword):
    try:
     
        conn = sqlite3.connect(db_file)

     
        query = """
            SELECT id, name, transcript
            FROM interviews
            WHERE year = ? AND month = ? AND day = ? AND transcript LIKE ?
        """

     
        interview_data = pd.read_sql_query(query, conn, params=(year, month, day, f'%{keyword}%'))

        if not interview_data.empty:
            print("Interview Information:")
            print(interview_data.to_string(index=False))
        else:
            print("No interviews found matching the specified criteria.")

    except sqlite3.Error as e:
        print("Error querying the SQLite database:", e)

    finally:
       
        conn.close()


db_file_path = 'python/fiftyville.db'


interview_year = 2021
interview_month = 7
interview_day = 28
keyword_in_transcript = 'bakery'

retrieve_interview_info(db_file_path, interview_year, interview_month, interview_day, keyword_in_transcript)
#step2: obtain useful information: 1)within 10 minutes, thief drove away a car from bakery parking lot
#2) earlier in the morning, thief withdrew some money from ATM on Leggett Street
#3) thief called to someone on July 28 2021 in less than 1 minute, and in the call, he asked the other end to buy flight
#tickets on July 29 2021, the earliest flight out of fiftyville

# step3: get the earliest flights info on July 29, 2021
def retrieve_earliest_flight_info(db_file, year, month, day):
    try:
      
        conn = sqlite3.connect(db_file)

      
        query = """
            SELECT id, origin_airport_id, destination_airport_id, year, month, day, hour, minute
            FROM flights
            WHERE year = ? AND month = ? AND day = ?
            ORDER BY hour, minute
            LIMIT 1
        """

     
        flight_data = pd.read_sql_query(query, conn, params=(year, month, day))

        if not flight_data.empty:
            print("Earliest Flight Information on {}-{}-{}:".format(year, month, day))
            print(flight_data.to_string(index=False))
        else:
            print("No flights found on the specified date.")

    except sqlite3.Error as e:
        print("Error querying the SQLite database:", e)

    finally:
       
        conn.close()


db_file_path = 'python/fiftyville.db'

flight_year = 2021
flight_month = 7
flight_day = 29

retrieve_earliest_flight_info(db_file_path, flight_year, flight_month, flight_day)
#step3: we get to know the earliest flight(8:20) on July 29th, 2021 has the destination_airport_id of 4, id of 36

#step4: get the destination city of the earliest flight
def retrieve_destination_city(db_file, destination_airport_id):
    try:
    
        conn = sqlite3.connect(db_file)

        # Query to retrieve the destination city of the earliest flight with destination_airport_id = 4
        query = """
            SELECT a.city
            FROM airports a
            INNER JOIN flights f ON a.id = f.destination_airport_id
            WHERE f.destination_airport_id = ?
            ORDER BY f.year, f.month, f.day, f.hour, f.minute
            LIMIT 1
        """

        city_data = pd.read_sql_query(query, conn, params=(destination_airport_id,))

        if not city_data.empty:
            print("Destination City of the Earliest Flight:")
            print(city_data.to_string(index=False))
        else:
            print("No destination city found for the specified airport ID.")

    except sqlite3.Error as e:
        print("Error querying the SQLite database:", e)

    finally:
        # Close the database connection
        conn.close()

db_file_path = 'python/fiftyville.db'


destination_airport_id = 4

retrieve_destination_city(db_file_path, destination_airport_id)
#step4: we get to know the thief escaped to New York City

#step5: use flights.id = passengers.flight_id = 36(obtained from step3) to get the passenger info(passport_number)

def retrieve_passenger_info(db_file, flight_id):
    try:
    
        conn = sqlite3.connect(db_file)

        query = """
            SELECT passport_number
            FROM passengers
            WHERE flight_id = ?
        """

      
        passenger_data = pd.read_sql_query(query, conn, params=(flight_id,))

        if not passenger_data.empty:
            print("Passenger Information for Flight ID {}:".format(flight_id))
            print(passenger_data.to_string(index=False))
        else:
            print("No passengers found for the specified flight ID.")

    except sqlite3.Error as e:
        print("Error querying the SQLite database:", e)

    finally:
      
        conn.close()

db_file_path = 'python/fiftyville.db'

flight_id = 36  # Replace with the flight ID obtained from Step 3

retrieve_passenger_info(db_file_path, flight_id)
#step5: get to know thief's possible passport numbers 
'''
    7214083635
      1695452385
      5773159633
      1540955065
      8294398571
      1988161715
      9878712108
      8496433585
'''
#step6: use passenger.passport_number = people.passport_number to get the possible name and phone number of the thief
def retrieve_thief_info(db_file, passport_numbers):
    try:
     
        conn = sqlite3.connect(db_file)

    
        passport_numbers_tuple = tuple(passport_numbers)

        query = """
            SELECT name, phone_number
            FROM people
            WHERE passport_number IN {}
        """.format(passport_numbers_tuple)

        thief_data = pd.read_sql_query(query, conn)

        if not thief_data.empty:
            print("Possible Thief Information:")
            print(thief_data.to_string(index=False))
        else:
            print("No matching records found for the specified passport numbers.")

    except sqlite3.Error as e:
        print("Error querying the SQLite database:", e)

    finally:
        conn.close()

db_file_path = 'python/fiftyville.db'

# Specify the list of passport numbers associated with the passengers
passport_numbers = [
    '7214083635',
    '1695452385',
    '5773159633',
    '1540955065',
    '8294398571',
    '1988161715',
    '9878712108',
    '8496433585'
]

retrieve_thief_info(db_file_path, passport_numbers)
#step6: obtain possible thief's name and phone number
'''
 name   phone_number
 Kenny (826) 555-1652
 Sofia (130) 555-0289
Taylor (286) 555-6063
  Luca (389) 555-5198
Kelsey (499) 555-9472
Edward (328) 555-1152
 Bruce (367) 555-5533
 Doris (066) 555-9701
'''

#step7: get the caller(use the step6 result), receiver, and duration(less than 1 minute-step 1 acquired info) info from phone_calls table on July 28, 2021

import sqlite3
import pandas as pd

def retrieve_phone_call_info(db_file):
    try:
        conn = sqlite3.connect(db_file)

        people_phone_numbers = [
            '(826) 555-1652', '(130) 555-0289', '(286) 555-6063', 
            '(389) 555-5198', '(499) 555-9472', '(328) 555-1152', 
            '(367) 555-5533', '(066) 555-9701'
        ]

        phone_numbers_tuple = tuple(people_phone_numbers)

        query = """
            SELECT caller, receiver, duration
            FROM phone_calls
            WHERE year = 2021 AND month = 7 AND day = 28 AND
                  caller IN {} AND
                  duration < 60
        """.format(phone_numbers_tuple)

        phone_call_data = pd.read_sql_query(query, conn)

        if not phone_call_data.empty:
            print("Phone Call Information for July 28, 2021 (duration < 1 minute):")
            print(phone_call_data.to_string(index=False))
        else:
            print("No phone call records found for the specified criteria.")

    except sqlite3.Error as e:
        print("Error querying the SQLite database:", e)

    finally:
        # Close the database connection
        conn.close()

db_file_path = 'python/fiftyville.db'

retrieve_phone_call_info(db_file_path)
#step7: we received the phone call info:
'''
Phone Call Information for July 28, 2021 (duration < 1 minute):
        caller       receiver  duration
(130) 555-0289 (996) 555-8899        51  #caller:sofia
(499) 555-9472 (892) 555-8872        36  #caller:kelsey
(367) 555-5533 (375) 555-8161        45  #caller:bruce
(499) 555-9472 (717) 555-1342        50  #caller:kelsey
(286) 555-6063 (676) 555-6554        43  #caller:taylor
(826) 555-1652 (066) 555-9701        55  #caller:kenny
'''
'''
 name   phone_number
 Kenny (826) 555-1652
 Sofia (130) 555-0289
Taylor (286) 555-6063
  Luca (389) 555-5198
Kelsey (499) 555-9472
Edward (328) 555-1152
 Bruce (367) 555-5533
 Doris (066) 555-9701   #info obtained from step6
'''
#step8: get info from bakery_security_logs on July 28, 2021(mainly license_plate)
#use info acquired from step1 & step2: thief stole at 10:15am and drove away from bakery within 10 minutes(before 10:25am)

def retrieve_bakery_security_logs_info(db_file):
    try:
        conn = sqlite3.connect(db_file)

        query = """
            SELECT license_plate
            FROM bakery_security_logs
            WHERE year = 2021 AND month = 7 AND day = 28 AND
                  hour = 10 AND minute >= 15 AND minute <= 25
        """

        logs_data = pd.read_sql_query(query, conn)

        if not logs_data.empty:
            print("License Plates from Bakery Security Logs on July 28, 2021 (10:15 AM - 10:25 AM):")
            print(logs_data.to_string(index=False))
        else:
            print("No bakery security logs found for the specified date and time range.")

    except sqlite3.Error as e:
        print("Error querying the SQLite database:", e)

    finally:
        conn.close()

db_file_path = 'python/fiftyville.db'

retrieve_bakery_security_logs_info(db_file_path)
#step8: we get the license plate info:
'''
License Plates from Bakery Security Logs on July 28, 2021 (10:15 AM - 10:25 AM):
license_plate
      5P2BI95
      94KL13X
      6P58WS2
      4328GD8
      G412CB7
      L93JTIZ
      322W7JE
      0NTHK55
'''
#step9: use info obtained from step2 to get the thief's account_number from atm_transactions on July 28, 2021 on Leggett Street
#and the transaction_type = withdraw
def retrieve_thief_account_number(db_file):
    try:
        conn = sqlite3.connect(db_file)


        atm_location = "Leggett Street"
        transaction_type = "withdraw"
        year = 2021
        month = 7
        day = 28

      
        query = f"""
            SELECT account_number
            FROM atm_transactions
            WHERE year = {year} AND month = {month} AND day = {day}
            AND atm_location = '{atm_location}' AND transaction_type = '{transaction_type}'
        """

      
        df = pd.read_sql_query(query, conn)

        if not df.empty:
     
            print("Thief's Account Number(s) from ATM Transactions:")
            print(df.to_string(index=False))
        else:
            print("No matching account numbers found for the thief on the specified date.")

    except sqlite3.Error as e:
        print("Error querying the SQLite database:", e)

    finally:
       
        conn.close()


db_file_path = 'python/fiftyville.db'


retrieve_thief_account_number(db_file_path)
'''
account_number
       28500762
       28296815
       76054385
       49610011
       16153065
       25506511
       81061156
       26013199
'''
#step 10: use the account_number obtained from step9 to get the thief's name and phone number from people table
import sqlite3
import pandas as pd

def retrieve_person_ids(db_file, account_numbers):
    try:
     
        conn = sqlite3.connect(db_file)

        account_numbers_tuple = tuple(account_numbers)

        query = f"""
            SELECT account_number, person_id
            FROM bank_accounts
            WHERE account_number IN {account_numbers_tuple}
        """

        df = pd.read_sql_query(query, conn)

        if not df.empty:
            print("Person IDs associated with the provided account numbers:")
            print(df.to_string(index=False))
        else:
            print("No matching records found in bank_accounts for the provided account numbers.")

    except sqlite3.Error as e:
        print("Error querying the SQLite database:", e)

    finally:
        conn.close()

db_file_path = 'python/fiftyville.db'

# List of account numbers for which you want to retrieve person_ids
account_numbers_list = [
    28500762,
    28296815,
    76054385,
    49610011,
    16153065,
    25506511,
    81061156,
    26013199
]

# Call the function to retrieve person_ids associated with the provided account numbers
retrieve_person_ids(db_file_path, account_numbers_list)
#step 10, we obtained the person_id associated with the account_number
'''
Person IDs associated with the provided account numbers:
 account_number  person_id
       49610011     686048
       26013199     514354
       16153065     458378
       28296815     395717
       25506511     396669
       28500762     467400
       76054385     449774
       81061156     438727
'''
#step 11: use the person_id obtained from step10 to get the thief's name and phone number from people table

def retrieve_thief_info(db_file, person_ids):
    try:
        conn = sqlite3.connect(db_file)

        person_ids_tuple = tuple(person_ids)

        query = f"""
            SELECT id, name, phone_number, passport_number, license_plate
            FROM people
            WHERE id IN {person_ids_tuple}
        """

        df = pd.read_sql_query(query, conn)

        if not df.empty:
            print("Thief's Information from People Table:")
            print(df.to_string(index=False))
        else:
            print("No matching records found in the people table for the provided person IDs.")

    except sqlite3.Error as e:
        print("Error querying the SQLite database:", e)

    finally:
        conn.close()


db_file_path = 'python/fiftyville.db'

# List of person IDs for which you want to retrieve information
person_ids_list = [
    686048,
    514354,
    458378,
    395717,
    396669,
    467400,
    449774,
    438727
]

# Call the function to retrieve thief's information based on the provided person IDs
retrieve_thief_info(db_file_path, person_ids_list)
#step11:obtained info
'''
Thief's Information from People Table:
    id    name   phone_number  passport_number license_plate
395717   Kenny (826) 555-1652       9878712108       30G67EN(suspect)
396669    Iman (829) 555-5269       7049073643       L93JTIZ
438727 Benista (338) 555-6650       9586786673       8X428L0
449774  Taylor (286) 555-6063       1988161715       1106N58(suspect)
458378  Brooke (122) 555-4581       4408372428       QX4YZN3
467400    Luca (389) 555-5198       8496433585       4328GD8
514354   Diana (770) 555-1861       3592750733       322W7JE
686048   Bruce (367) 555-5533       5773159633       94KL13X(suspect)
'''
'''
Phone Call Information for July 28, 2021 (duration < 1 minute):
        caller       receiver  duration
(130) 555-0289 (996) 555-8899        51  #caller:sofia
(499) 555-9472 (892) 555-8872        36  #caller:kelsey
(367) 555-5533 (375) 555-8161        45  #caller:bruce(suspect)=>thief
(499) 555-9472 (717) 555-1342        50  #caller:kelsey
(286) 555-6063 (676) 555-6554        43  #caller:taylor(suspect)
(826) 555-1652 (066) 555-9701        55  #caller:kenny (suspect)    #info obtained from step7
'''
'''
License Plates from Bakery Security Logs on July 28, 2021 (10:15 AM - 10:25 AM):
license_plate
      5P2BI95
      94KL13X(suspect) => thief
      6P58WS2
      4328GD8
      G412CB7
      L93JTIZ
      322W7JE
      0NTHK55
'''                                    #obtained in step8
#comparison the three results, we can get the thief's name is Bruce(who drove away the bakery from 10:15am to 10:25am)
#(who also flew to New York City on July 29, 2021 for the earliest flight, and withdrew money from ATM on Leggett Street)

#step12: get the accomplice's name and phone number(using the step11 result-receiver:(375) 555-8161 and caller:bruce)
def find_name_by_phone_number(db_file, phone_number):
    try:
 
        conn = sqlite3.connect(db_file)

        query = f"""
            SELECT name
            FROM people
            WHERE phone_number = '{phone_number}'
        """
        
        df = pd.read_sql_query(query, conn)

        if not df.empty:
            print(f"Related Name for Phone Number {phone_number}:")
            print(df.to_string(index=False))
        else:
            print(f"No matching record found in the people table for phone number: {phone_number}")

    except sqlite3.Error as e:
        print("Error querying the SQLite database:", e)

    finally:
        conn.close()

db_file_path = 'python/fiftyville.db'

# Phone number for which you want to retrieve the related name
target_phone_number = '(375) 555-8161'

# Call the function to find the related name based on the phone number
find_name_by_phone_number(db_file_path, target_phone_number)
#step12: we get the accomplice's name is Robin(who received a phone call from Bruce on July 28, 2021 within 1 minute)
