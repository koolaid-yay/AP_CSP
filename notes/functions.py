# AS 6th functions notes

import random 

#What a function is:

#a function is just a set of instructions that are executed when you call on a keyword. 
#they can be used with anything.
#ex (has to be lined up when indenting)
def welcome():
    name = input("what is your name\n")
    print(f"hello {name}!")

print(f"the function is over!")

welcome()


def add(number, num_2): #parameters given when we define the function.
    number = number + num_2
    print(number)

num_1 = 12
num_2 = 14
#arguments are given when we call the function.
add(4, 8) 
add(9, 700)
add(87, 45)


def clean(info):
    return info.strip().lower()

name = input("what is your name?")
quest = input("what is your quest?")
color = input("what is your favorite color?")

print(f"hello, {clean(name)}. I have heard you are trying to {clean(quest)}, that is super cool! are you sure {clean(color)} is your favorite color?")


def believe(sentence):
    length = len(sentence)
    spot_one = random.randint(0, length -1)
    spot_two = random.randint(0, length -1)
    spot_three = random.randint(0, length -1)
    full_sentence = sentence.split()
    full_sentence.insert(spot_one, "believe it!")
    full_sentence.insert(spot_two, "believe it!")
    full_sentence.insert(spot_three, "believe it!")
    sentence = "".join(full_sentence)
    return sentence

new_sentence = believe("hello i am silly mr guy!")
print(new_sentence) 