
from flask import g


counter=3
def clock():
    for i in range(0,10):
        counter=0
        counter=counter+i+5
        print(counter) 
def anti_clock():
    counter=0
    counter=counter-50
    print(counter)
clock()
print(counter)
anti_clock()
print(counter)
