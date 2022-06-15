#This code implements bubble sort in Python
list=[3,4,5,2]
print(list)
swapped=True

while(swapped==True):
	swapped=False
	for i in range(0,len(list)-1):
		if list[i+1]<list[i]:
			temp=list[i]
			list[i]=list[i+1]
			list[i+1]=temp
			swapped=True

print(list)
