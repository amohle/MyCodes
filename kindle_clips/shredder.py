import re
f=open("kindle.txt","r")
f2=open("Shredded_clippings.txt","w")
for line in f:
    res=re.findall(r'Computer Networking [\w|\W]*==========',"",line)
    f2.write(res)
f.close()
f2.close()