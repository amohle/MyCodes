todos=open("list.txt","a")
i=1
print("task#",i," Bell the cat",file=todos)
i+=1
print("task#",i," Plant the waters",file=todos)
i+=1
print("task#",i," Eat some Pizza",file=todos)
todos.close()
print("Data has been saved in file list.txt")


