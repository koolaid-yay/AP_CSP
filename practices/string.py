# AS 6th strings notes

print("I did it!") 
#What makes something a string?
    #a string is just a collection of symbols held together by quotation marks.
    # ex: "hi brotato your cool" or 'hi brotato your cool'

#examples of strings
name = input("what is your name:").strip().lower()

sentence = "the quick brown fox jumps over the lazy dog."

first_name = input("what is your first name:\n").strip().title()

last_name = input

print ("welcome to my program", name)
#Why do we have strings?

#How do stupid proofing and sanitization relate to each other?
#users = stupid. 

#What is debugging?

#How do you debug the different types of errors?

#Describe what each of the methods below does:
#find() 
#concatenate (add)
#upper() makes all upper
#lower() makes all lower
#strip() strip makes the user less dumb 

#debugging is fixing problems in my code
    # syntax error
    # when you forget or add something that should/shouldn't be there
string = "example" #but if there was a different qoutation on one side
    # logic error
    # where our code does something that we didn't expect it to do
num1 = "1"
num2 = "2"
print(num1 + num2)
    # run-time error 
    # when there is a problem in a code that will break the code when it tries to run

# a bug is anything in your code that doesn't allow your code to run properly 

# find
print(sentence.find("brown"))
# slicing
print(sentence [10:15])

#index - location of that particular item within my string or list
#in programming counting starts at 0
#concatonating = putting strings together 