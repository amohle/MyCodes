#This is the color game where user will try to answer the color chosen by Computer
import random
choices=['blue','red','green']
choice=random.choice(choices)
choice_usr="starter"
guesses=0
while(choice_usr!=choice):
	choice_usr=input("Please enter your guess")
	 guesses=guesses+1
print('Whoaa you have done it in just', guesses, 'guesses')

