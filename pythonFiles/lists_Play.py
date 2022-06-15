#This program plays with python lists
super_list=[[34,56,34],[34.99,78.99,67.99]]
choice_list=super_list[1]
choice=choice_list[1]
len_super=len(super_list)
len_sub=len(choice_list)

print(len_super)
print(len_sub)
print(choice)
print("Using for loop")
for i in range(len_sub):
	print('List element-'+str(i)+' : '+ str(choice_list[i]))

