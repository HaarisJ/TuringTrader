import json
import mysql.connector
from mysql.connector import Error
import string
from tqdm import tqdm

def create_connection(host_name, user_name, user_password, db_name):
    connection = None
    try:
        connection = mysql.connector.connect(
            host=host_name,
            user=user_name,
            passwd=user_password,
            database=db_name
        )
        print("Connection to MySQL DB successful")
    except Error as e:
        print(f"The error '{e}' occurred")

    return connection

def main():
    f = open('companies.json',) 
    companies_list = json.load(f) 
    connection = create_connection("35.227.90.11", "root", "password", "TuringTrader")
    cursor = connection.cursor()
    for entry in tqdm(companies_list):
        ticker = entry['symbol']
        company_name = entry['description']
        company_name = company_name.translate(str.maketrans('', '', string.punctuation)) # Remove punctuation from company_name
        insertion_query = "INSERT INTO company VALUES('" + ticker + "', '" + company_name + "')"
        try:
            cursor.execute(insertion_query)
            connection.commit()
        except Error as e:
            print(f"The error '{e}' occurred")
            continue
     
    f.close() 
    connection.close()


main()