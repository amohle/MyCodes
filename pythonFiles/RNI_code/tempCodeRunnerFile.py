server = '991-ASHUTOSH,5068' 
database = 'rni' 
username = 'sa' 
password = 'ashu' 
cnxn = pyodbc.connect('DRIVER={ODBC Driver 17 for SQL Server};SERVER='+server+';DATABASE='+database+';UID='+username+';PWD='+ password)