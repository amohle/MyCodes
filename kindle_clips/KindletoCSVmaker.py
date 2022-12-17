#this code takes myclippings.txt file of the kindle (here renamed as kindle.txt) and removes
#the book name as well as highlight information from the clippings.
import csv
import re
f=open("kindle.txt","r")
li=["item","data"]
f_csv=open('kindle_csv.csv','w',newline='')
writer=csv.writer(f_csv)
#f2=open("clippings.txt","w")
status="out"
for line in f:
    if("==="in line):
        status="out"
    if "Computer Networking" in line or status=="in":
        status="in"
        res=re.sub(r'Computer Networking [\w|\W]*',"",line) #Name of the book in kindle 
        res3=re.search(r'[\w|\W]*Your Highlight on Location [\w|\W]*AM|[\w|\W]*Your Highlight on Location [\w|\W]*PM',res)
        res2=re.sub(r'[\w|\W]*Your Highlight on Location [\w|\W]*AM|[\w|\W]*Your Highlight on Location [\w|\W]*PM',"",res)
        res2_string=str(res2)
        res_2_stripped=res2_string.strip()
        if res3:
            #print(res2.group())
            res4=re.search(r'\d{3,4}',res3.group())
            print(res4.group(),end=' ')
            
            li[0]=res4.group()
        print(res2) 
        if res_2_stripped:
            li[1]=res_2_stripped
            writer.writerow(li)
        #f2.write(res2)
f.close()
f_csv.close()
#f2.close()