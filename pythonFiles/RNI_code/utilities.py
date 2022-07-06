import pyodbc
from os import system
def stringTrimmer(t_string):
       y_string=t_string.replace(" ","")
       return y_string
def connect_db():
    server = '127.0.0.1,1433' 
    database = 'rni' 
    username = 'sa' 
    password = 'jigyasa#456' 
    cnxn = pyodbc.connect('DRIVER={ODBC Driver 17 for SQL Server};SERVER='+server+';DATABASE='+database+';UID='+username+';PWD='+ password)
    return cnxn
def clear():
       system('clear')