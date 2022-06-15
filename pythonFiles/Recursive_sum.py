def rec_sum(list):
    if(len(list)==0):
        
        sum=0
    else: 
        first=list[0]
        rest=list[1:]
        sum=first+rec_sum(rest)
    return sum
list=[3,4,5,6]
sum=rec_sum(list)
print(sum)

