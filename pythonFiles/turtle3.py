import turtle
tt1=turtle.Turtle()
tt2=turtle.Turtle()
tt1.color('violet')
tt2.color('pink')
def makeShape(ttl,sides):
    angle=360/sides
    for i in range (0,sides):
        ttl.forward(100)
        ttl.right(angle)

makeShape(tt1,8)
makeShape(tt2,7)
makeShape(tt1,6)
makeShape(tt2,5)


