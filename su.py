import turtle
turtle.bgcolor("black")
t=turtle.turtles()
colors =['red','dark red']
for number in range(400):
    t.__format__(number+1)
t.right(89)
t.pencolor(colors[number%2])
turtle.done()




