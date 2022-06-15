#this code takes myclippings.txt file of the kindle (here renamed as kindle.txt) and removes
#the book name as well as highlight information from the clippings.

import re
f=open("kindle.txt","r")
f2=open("clippings.txt","w")
status="out"
for line in f:
    if("==="in line):
        status="out"
    if "Computer Networking" in line or status=="in":
        status="in"
        res=re.sub(r'Computer Networking [\w|\W]*',"",line) #Name of the book in kindle
        res2=re.sub(r'Your Highlight on Location [\w|\W]*AM|Your Highlight on Location [\w|\W]*PM',"",res)
        f2.write(res2)
f.close()
f2.close()