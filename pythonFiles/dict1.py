dict1={'name1':'ashu','name2':'sheetal','name3':'Anushka','name4':'Mitthu','name5':'jukham'}
for x,v in dict1.items():
    print(x,':',v)
print(len(dict1))
del(dict1['name5'])
print("################################\n###################################")
for x,v in dict1.items():
    print(x,':',v)

print(len(dict1))



