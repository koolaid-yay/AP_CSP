# AS 6th time of day

import datetime 

current = datetime.datetime.now()
hour = current.hour

print(f"the time is: {current}")
print(f"hour is: {hour}")

if hour < 12:
    print("good morning!!!!!!!")
elif hour < 18:
    print("good afternoon!!!!!!!!!!!!!!!!!!!!!!")
else:
    print("good evening !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!")