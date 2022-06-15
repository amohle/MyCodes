phone_directory={}
phone_directory['Padmaja']=512634109
phone_directory['Abhishek']=9335749343
phone_directory['Saurabh']=9336225416
phone_directory['papa']=9335659202
search_string=input("Please input the number to be searched")
if search_string in phone_directory:
	print("found:", phone_directory[search_string])
else:
	print("Record Not found")
delete_word=input("Please enter the word to be deleted")
print("Deleting the entry ", delete_word,":",phone_directory[delete_word])
del phone_directory['Abhishek']		
print("Record for ",delete_word, " removeed")
