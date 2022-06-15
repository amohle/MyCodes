import pyodbc

connection = pyodbc.connect("Driver={ODBC Driver 18 for SQL Server};SERVER=10.197.4.65;DATABASE=rni;Trusted_Connection=yes;")
                                                             
cursor=connection.cursor()
db_Info = connection.get_server_info()
print("Connected to MSSQL Server version ", db_Info)
cursor = connection.cursor()
