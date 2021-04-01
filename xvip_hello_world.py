"""I update it to be shorter"""
from PIL import Image, ImageDraw
from random import randint
def getRandomColor():
    color=[0,0,0]
    for a in range(3):
        color[a]=randint(0,255)
    return tuple(color)
height=600
width=2300
weight=10
dims=[
(50, 50, 50, height-50),(50, height/2, 200, height/2),(200, 50, 200, height-50),#H
(250, 50, 250, height-50),(250, 50, 400, 50),(250, height/2, 400, height/2),(250, height-50, 400, height-50),#E
(450, 50, 450, height-50),(450, height-50, 600, height-50),#L
(650, 50, 650, height-50),(650, height-50, 800, height-50),#L
(850, 50, 850, height-50),(1000, 50, 1000, height-50),(850, height-50, 1000, height-50),(850, 50, 1000, 50),#O
(1150, 50, 1225, height-50),(1225, height-50, 1300, height/2),(1300, height/2, 1375, height-50),(1375, height-50, 1450, 50),#W
(1500, 50, 1500, height-50),(1650, 50, 1650, height-50),(1500, height-50, 1650, height-50),(1500, 50, 1650, 50),#O
(1700, 50, 1700, height-50),(1700, 50, 1850, 50),(1850, 50, 1850, height/2),(1850, height/2, 1700, height/2),(1700, height/2, 1850, height-50),#R
(1900, 50, 1900, height-50),(1900, height-50, 2050, height-50),#L
(2100, 50, 2100, height-50),(2250, 100, 2250, height-100),(2100, height-50, 2200, height-50),(2100, 50, 2200, 50),(2200, height-50,2250,height-100),(2200, 50, 2250, 100)#D
]
img = Image.new('RGB',(width, height),(0,0,0))
draw=ImageDraw.Draw(img)
def drawer(dim):
    draw.line(dim, fill=getRandomColor(),width=weight)
for dim in dims:
    drawer(dim)
img.save('Scan.png')
img.show()
