#program to print fibonnaci sequence in Python  
a=1
b=1
number=input("Please enter the number of terms to be printed")
for i in range(int(number)):
    c=a+b
    print(c)
    a=b
    b=c
