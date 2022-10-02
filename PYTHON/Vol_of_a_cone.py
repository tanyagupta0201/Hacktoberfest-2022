#python program to calculate the volume of a cone

import math  
pi = math.pi  

def Volume_of_cone(rad,hei):  
    return (pi *  rad * rad * hei ) / 3 
    
radius = float(input('Enter the Radius : '))

height = float(input('Enter the Height : '))

print(Volume_of_cone(radius, height))