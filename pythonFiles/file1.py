myfile=open('dummie_text.txt','r')
#my_txt=myfile.read()
#print(my_txt)
i=0
spaces=0
sentences=''
symbols=' \n'
print("Reading lines one by one")
for line in myfile:
	for char in line:	
		if char in symbols:	
			spaces=spaces+1
		else:
			i=i+1
			sentences=sentences+char
	print(sentences)	
print("Total Characters=",str(i))	
print("Total Spaces=",str(spaces))	
myfile.close()
