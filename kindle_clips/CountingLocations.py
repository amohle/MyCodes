#this code takes myclippings.txt file of the kindle (here renamed as kindle.txt) and removes
#the book name as well as highlight information from the clippings.

import re
f=open("kindle.txt","r")
#f2=open("clippings.txt","w")
status="out"
for line in f:
    if("==="in line):
        status="out"
    if "Computer Networking" in line or status=="in":
        status="in"
        res=re.sub(r'Computer Networking [\w|\W]*',"",line) #Name of the book in kindle 
        res2=re.search(r'Your Highlight on Location [\w|\W]*AM|Your Highlight on Location [\w|\W]*PM',res)
        if res2:
            #print(res2.group())
            res3=re.search(r'\d{3,4}',res2.group())
            print(res3.group())
        #f2.write(res2)
f.close()
#f2.close()