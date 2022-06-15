def is_palindrom(word):
    if(len(word)<=1):
        return True
    else :
         first=word[0]
         last=word[-1]
         rest=word[1:-1]
         if(first==last): 
            return(is_palindrom(word[1:-1]))
         else:
            return False 
for i in range(0,10):        
    word=input("Enter your string to check")
    result=is_palindrom(word)
    print(result)

