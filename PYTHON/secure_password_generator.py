"""
Author: Bhav Beri (@bhavberi)
Last Modified: 2 October, 2022

Program Name: Secure Password Generator
Program Description: Generates secure password, which can't be directly tracked back. They don't directly on the clock of the pc and time (as for most of them), and provides secure password.

Usage: python3 secure_password_generator.py <num>
where <num> = -1 (For random length password between 15 to 60
            = i (For passwords of length i; i>=5 recommended atleast)
            = NULL or nothing passed as num (then default len of password = 60)
"""

__author__ = "bhavberi"

import secrets
import sys
import string
import random


def private(num):
    if num == -1:
        num = random.randint(15, 60)

    s = ''
    letters = string.ascii_letters + string.digits + string.punctuation
    for i in range(num):
        s += secrets.choice(letters)
    s = secrets.choice(string.ascii_lowercase) + secrets.choice(string.punctuation) + \
        secrets.choice(string.ascii_uppercase) + \
        secrets.choice(string.digits) + s

    random.shuffle(list(s))

    return "".join(s)


if __name__ == '__main__':
    num = 60
    if len(sys.argv) == 2:
        num = int(sys.argv[1])

    print(private(num))
