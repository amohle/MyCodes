#Fibonacci Series Normal Iteration Version
import time
a=0
b=1
c=0
start_time=time.time()
for i in range (0,10000):
    c=a+b
    print(c)
    a=b
    b=c
end_time=time.time()
duration=end_time-start_time
print("duration=",duration)