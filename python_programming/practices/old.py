# AS 6th old enough

age = int(input("how old are you?\n"))

if age >= 15:
    print(f"you are old enough to get a learners permit!")
elif age >= 4:
    print(f" your {age} is too small! you can go to school though")
elif age >= 16:
    print(f"you can drive!!")
elif age >= 18:
    print("you are old enough to vote!")
else:
    print("you can't do any of this!")