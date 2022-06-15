import turtle
slowpoke=turtle.Turtle()
slowpoke.shape('turtle')
slowpoke.color('green')
pokey=turtle.Turtle()
pokey.shape('turtle')
pokey.color('red')

def makeSquare(ttl):
    for i in range(0,4):
        ttl.forward(100)
        ttl.right(90)
def makeSpiral(ttl):
    for i in range(0,36):
        makeSquare(ttl)
        ttl.right(10)
makeSpiral(slowpoke)
pokey.right(5)
makeSpiral(pokey)