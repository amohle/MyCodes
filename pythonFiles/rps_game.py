import random
choice_usr=input("Rock(s) Paper (p) or Scissors(s)?")
choices=['r','p','s']
choice_com=random.choice(choices)
if choice_usr==choice_com:
	print("Their is a tie")
else:
	if choice_usr=='s'and choice_com=='p':
		print('User wins')
	elif choice_usr=='p'and choice_com=='r':
		print("user Wins")
	elif choice_usr=='r'and choice_com=='s':
		print("user Wins")
	else:
		print("Com wins")		
print("User Choice: "+choice_usr+"")
print("Com Choice:  " +choice_com+"") 

