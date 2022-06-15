def rf (n):
    if n==1:
        return n
    else:
        return n*rf(n-1)
num=int(input('enter a no'))
if num<0:
    print('sorry no factorial')
elif num == 0:
    print('1')
else:
    print(rf(num))
