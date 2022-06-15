import sqlite3
conn=sqlite3.connect("test.db")
print("database connection successful")
#conn.execute('create table names2(name varchar(30), phone int(67));')
choice='t'
while(choice!='.exit'):
    name=input("Enter name")
    phone=input("Enter Phone number")
    conn.execute("insert into names2(name,phone) values ('"+name+"',"+phone+");")
    choice=input('executed successfully...if you want to exit type .exit')
conn.commit()
conn.close()
