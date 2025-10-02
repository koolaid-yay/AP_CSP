# AS 6th expressions notes. 

# what is an algorithm?
    # a set of instructions 
# list steps in an algorithm
    # a collection of numbers and symbols.
#ex
name = input("what is your name?")
print("hello" , name)

#algorithm for area
length = 5
width = 20
area = length * width 
print(length, "*" , width, "=", area)
#steps
#1 pieces of info I need
#2 process info
#3 provide output

person1 = 14
person2 = 14
person3 = 14
person4 = 14

average = (person1 + person2 + person3 + person4)/4

print("the average age is" , average)

#math equations
num_1 = float(input("give me a number:\n"))
num_2 = int(input ("give me another one:\n"))
num_1 = 12
num_2 = 4

print("addition:" , num_1 + num_2 , round(num_1, 0)) #1 what needs rounded 2 how many decimals
num_1 += num_2
print("subtraction:" , num_1 - num_2)
num_1 -= num_2
print("multiplication:" , num_1 * num_2)
num_1 *= num_2
print("dvision:" , num_1 / num_2 , round(11/3 , 2))
num_1 /= num_2
print("exponents:" , num_1 ** num_2)
num_1 **= num_2
print("integer division:" , num_1 // num_2)
num_1 //= num_2 #integer is a data type that can hold whole numbers. integer division = ex // ex
print("mudulo (remainder):" , num_1 % num_2)
num_1 %= num_2 # float is any number that holds decimals 

#List ALL of the different assignment operators
num_1 = num_1 + num_2
num_1 += num_2
print("addition (+):", num_1)
num_1 -= num_2

print("(3*5**2/15)-(5-2**2)=", (3*5**2/15)-(5-2**2))

#why are expressions so important in programming?
    #EVERYTHING is math
    #its easier then doing it over and over, basically laziness in advance
    