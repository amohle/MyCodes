tuple1=(34,'m77',8899);tuple2=(78,89,'uiui')
tuple3=(tuple1,tuple2)
it=zip(tuple1,tuple2)
l=list(it)
print(l)
n,a=zip(*l)
print(n,a)
