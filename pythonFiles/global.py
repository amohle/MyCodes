#using global variable in python
greetings='Good morning'
def Greeter(name=' XYZ'):
    global greetings
    print(greetings+' '+name)
    greetings='bye'
    #return "I did it"

status=Greeter()
print(greetings)
print(status)


