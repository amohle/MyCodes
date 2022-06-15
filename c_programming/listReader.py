tasks=open("list.txt")
for chores in tasks:
    print(chores,end='')
tasks.close()
print("All tasks completely done")
