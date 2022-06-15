def sum(*n):
    sum=0
    for i in n:
        sum=sum+i
    return sum

def double_element(lst):
    l=len(lst)
    for i in range(0,l):
        lst[i]=lst[i]*2
        
def dict_update(dict,key,update_value):
    for i,k in dict.items():
        if i==key:
            dict[i]=update_value

dict1={"name":"ashu","roll_no":"123"}
dict_update(dict1,"roll_no","2342")
print(dict1)
ls=[12,23,23]
double_element(ls)
print(ls)

