import random as rand
import string

def get_random_string(length):
    letters = string.ascii_lowercase
    numbers = string.digits
    result_str = ''.join(rand.choice(numbers+letters) for i in range(length))
    return (result_str)

first=input("Enter the First Name:")
last=input("Enter the last Name:")
dept=input("Enter the department:")
domain="@abc.com"
email=first+"."+last+"."+dept+domain
length=7
pas=get_random_string(length)
print(email)
print(pas)