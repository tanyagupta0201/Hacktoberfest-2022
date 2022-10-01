# Password generator script :
# author: Orlando-Lora
# Date Modified: 1 October, 2022
import random

def generate_pass():
	#generate the password randomly
	population = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!@#$%_-&1234567890"
	list_pass = random.choices(population , k = int(12))
	pass_string = ''
	
	for i in list_pass:
		pass_string += i
		if pass_string.count(i) != 1:
			random_i = random.choices(population , k = 1)
			pass_string = pass_string.replace(i , random_i[0], pass_string.count(i) - 1)

	return pass_string


if __name__ == '__main__':
	print(generate_pass())