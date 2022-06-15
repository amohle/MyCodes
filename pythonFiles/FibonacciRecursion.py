import time
cache={}
def fibonacci(n):
    global cache
    if n in cache:
        return cache[n]
    
    if n==0:
        result= 0
    elif n==1:
        result=1
    else: 
        result= fibonacci(n-1)+fibonacci(n-2)
    cache[n]=result
    return result
for i in range(20,1000,5):
    start_time=time.time() 
    result=fibonacci(i)
    end_time=time.time()
    duration=end_time-start_time
    print(i, result, duration,"seconds")