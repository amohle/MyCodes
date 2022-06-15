import pyodbc 
# Some other example server values are
# server = 'localhost\sqlexpress' # for a named instance
# server = 'myserver,port' # to specify an alternate port

server = '127.0.0.1,1433' 
database = 'test' 
username = 'sa' 
password = 'jigyasa#456' 
cnxn = pyodbc.connect('DRIVER={ODBC Driver 17 for SQL Server};SERVER='+server+';DATABASE='+database+';UID='+username+';PWD='+ password)
cursor = cnxn.cursor()
cursor.execute("select * from name_log") 
res= cursor.fetchall() 
for row in res:
    print(row)
