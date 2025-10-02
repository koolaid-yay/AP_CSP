# AS 6th time and for loops notes

#What is a loop? 
import datetime 

current = datetime.datetime.now()
hour = current.hour

print(f"the time is: {current}")
print(f"hour is: {hour}")


#what are the two types of loops?
#What is iteration
#What are lists? 
    #lists are first complex data type to learn about !!
    #allows to store multiple peices of info within the same variable

family = ["benny", "robert", "heidi", "rambo dog", "aimree", "nammu cat", ["noel", "noah", "tracee"]]

print(family[0])
print(family)
family[1] = "robert"
family[5] = "nammu cat"
family.remove("aimree")
print(family)
#How do you make lists in python? 
#How do you make for loops in python? 

for family in family: 
    print(f"hello {family}")

for x in range(20,0, -1):
    print(x)

#How do you make while loops in python? 
    #continue until specific condition is met 

 #infinite loop:

#while True:
#    print("OH NO!")
#1. iterator (keep track of loop)
#2. end condition (tells loop to stop)
#3. increase the iterator

#good while loop

i = 1

while i < 21:
    if i % 2 == 0:
        print(f"{i} is even")
    else:
        print(f"{i} is odd")
    i += 1

import random 

number = random.randint(1,20)
x = 1
"""while x != number:
    print("duck")
    x += 1

print("goose!!")"""

while True:
    if number == x:
        print("goose!")
        break #breaks us out of loop :) THANK YOU!!
    else:
        print("duck..")
        x += 1 


