x=60
def f1():
    global x
    print('x is:',x)
    x=10
    print('changed global x is :',x)
    x+=5
f1()
print('value of x is',x)