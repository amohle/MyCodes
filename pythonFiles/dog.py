class dog:
    def __init__(self, name, age, weight):
        self.name = name
        self.age = age
        self.weight = weight
    def bark(self):
        if self.weight > 29:
           print(self.name, 'says "WOOF WOOF"')    
        else:
            print(self.name, 'says "woof woof"')

codie=dog('codie',34,56)
ron=dog('ron',12,12)
print(codie.name)
print(codie.age)
print(ron.name)
print(ron.age)
ron.bark()
codie.bark()
