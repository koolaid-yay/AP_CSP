# AS 6th conditionals note

num = int(input("tell me a whole number: "))

if num < 10: #conditionals begin with an if
    print(f"{num} is a single digit number")
elif num < 100: #an elif will only happen if the if is false
    print(f"{num} is not single digit number")
elif num == 4:
    print("that is the winning number!")
else:
    print(f"{num} is a big number")

name = input("please tell me your name")

if name == "silly man":
    print("HII you are so awesome!")
    if num == 4:
        ("dumb number you chose. you are no longer awesome!!")
elif name == "extra silly man":
    print("you are the best awesome man!!")
else:
    if name == "santa":
        print("you are a jolly fellow!")
    print(f"hello {name} you are not so awesome!")

# if is a true or false statement
# if not correct it is boolean statement or condition

# What puts something inside of the “if” statement?
    # variable

# What do if statements do?
    #tell the computer if its correct it will run

# What are boolean statements? 
    # the same as conditonal

# What do else statements do?
    #clarify that the if statement is wrong

# What kind of statement do you use if you have more than 2 needed outcomes?
    # elif

# What do each of the different symbols mean in conditionals?

# < less than
# > greater than
# <= less than or equal to
# >= greater or equal to
# == equal
# != not equal

# What are the 3 logical operators?
    # and, or, not. its lets us put multiple conditions together.

if num >= 0 and num < 10: #and means both must be true
    print(f"{num} is a single digit number")
elif num < 25 or num == 50: #or means only 1 must be true
    print(f"{num} is a really awsome number!")
elif not num < 100: #not checks if the opposite is true
    print(f"{num} is a large number!")
else:
    print(f"you typed in a {num}")

# What are logical operators for?
    #to add true false and to check if statement was true or falso

# What does a nested conditional statement do?
    #add more to the conditional 
