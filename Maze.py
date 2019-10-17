from turtle import *
import random
t = Pen()
Screen()

t.speed(10)
t.penup()
t.setpos(-300, 300)
t.pendown()

def square(color):
    t.fillcolor(color)
    t.begin_fill()
    for _ in range(4):
        t.fd(50)
        t.left(90)
    t.end_fill()

for i in range(12):
    for j in range(12):
        color = "black"
        if(random.randint(0, 2) <= 1):
            color = "white"
        square(color)
        t.fd(50)
    t.penup()
    t.setpos(-300, 250-(i*50))
    t.pendown()
    
t.penup()
t.setpos(-275, 325)
t.pendown()
t.color("red")
t.width(5)

def up():
    t.setheading(90)
    t.fd(50)
def left():
    t.setheading(180)
    t.fd(50)
def right():
    t.setheading(0)
    t.fd(50)
def down():
    t.setheading(-90)
    t.fd(50)
onkey(up, "Up")
onkey(left, "Left")
onkey(right, "Right")
onkey(down, "Down")

listen()
mainloop()
