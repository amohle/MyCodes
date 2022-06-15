import re
f=open("kindle.txt","r")
f2=open("clippings.txt","w")
status="out"
for line in f:
    if("==="in line):
        status="out"
    if "Computer Networking" in line or status=="in":
        status="in"
        res=re.sub(r'Computer Networking [\w|\W]*',"",line)
        res2=re.sub(r'Your Highlight on Location [\w|\W]*AM|Your Highlight on Location [\w|\W]*PM',"",res)
        f2.write(res2)
f.close()
f2.close()