#Testing a web API with Python
import requests
import json
import turtle
screen=turtle.Screen()
screen.setup(1000,500)
screen.bgpic('earth.gif')
screen.setworldcoordinates(-180,-90,180,90)
iss=turtle.Turtle()
iss.shape('circle')
iss.color('green')
def move_iss(lat,long):
    global iss  
    iss.hideturtle()
    iss.penup()
    iss.goto(lat,long)
    iss.pendown()
    iss.showturtle()
def trackIss():    
    url = 'http://api.open-notify.org/iss-now.json'
    response=requests.get(url)
    if(response.status_code==200):
        my_data=json.loads(response.text)
        location=my_data['iss_position']
        lat1=float(location['latitude'])
        long1=float(location['longitude'])
        move_iss(lat1,long1)
    else :

        print("Base station we have a problem",response.status_code)
    widget=turtle.getcanvas()
    widget.after(1000,trackIss)
trackIss()
turtle.mainloop()