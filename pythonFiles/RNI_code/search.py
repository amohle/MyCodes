
from turtle import title
import colorama 
from utilities import clear
from colorama import Fore
from database import *
while True:
    
    title_name=input(Fore.WHITE+"Please input title to be searched:"+Fore.GREEN)
    if title_name=='help':
        print("\nuse ~ for owner name if same sound search and owner search are not required\n")
        continue
    state_code=input(Fore.WHITE+"Please input state to be searched:"+Fore.GREEN)
    l_code=input(Fore.WHITE+"Please input language to be searched:"+Fore.GREEN)
    #or_and=input(Fore.WHITE+"or / and for state_code/ Lang_code:"+Fore.GREEN)
    #if not or_and:
        #print(Fore.RED+"or-and not provided,using default OR for or_and"+Fore.WHITE)
    or_and="or"
    owner_name=input(Fore.WHITE+"Please input Owner Name:"+Fore.GREEN)
    print(Fore.YELLOW+"")
    clear()
    if title_name and state_code:
        print(55*"#"+"\nResults using same search\n"+55*"#"+Fore.WHITE)
        sameSearch(title_name,state_code,l_code,or_and)
        print(Fore.GREEN+"")
        print(55*"#"+"\nResults using same search _with_removed_suffix_prefix\n"+55*"#"+Fore.WHITE)
        sameSearch_with_removed_suffix_prefix(title_name,state_code,l_code)
        print(Fore.CYAN+"")
        if not owner_name =='~':
            print(55*"#"+"\nResults using same Sound Search\n"+55*"#"+Fore.WHITE)
            sameSoundSearch(title_name,state_code,l_code)
        print(Fore.LIGHTMAGENTA_EX+"")
    else:
        print(Fore.GREEN+"Running only owner name search")
    if owner_name and not owner_name=='~':
        print(55*"#"+"\nOther Publications by "+owner_name+"\n"+55*"#"+Fore.WHITE)
        if state_code:
            searchOtherPublicationsByOwner(owner_name,state_code)
        else:
            searchOtherPublicationsByOwner_allIndia(owner_name)
    
    else:
        print(Fore.RED+"Owner Name Not provided"+Fore.WHITE)
    
   
   
    
