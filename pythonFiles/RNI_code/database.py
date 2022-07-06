
import string
from utilities import stringTrimmer
from utilities import connect_db
#connect_db() is defined in utilities class and it returns a database connection
cnxn=connect_db() 
cursor = cnxn.cursor()


def sameSearch(title_name,state_code,lang_code,or_and="or"):
    "This function is used for searching same title without removing any part of the string and also not using syllable search"
    print("searching for "+title_name+" using same search")
    #here we are splitting the string to get individual strings in the main string
    part_strings=title_name.split()
    sql="select t_code,t_name,owner_name,state_code,l_code from dbo.rni where 1=1 "  
    for i in part_strings:
        #print(i)
        sql=sql+ " and t_name like'%"+i+"%'"
    sql=sql+ " and (state_code='"+state_code+"' "+or_and+" l_code='"+lang_code+"') ORDER BY t_name"
    #print(sql)
    cursor.execute(sql) 
    res = cursor.fetchall() 
    if(len(res)==0):
        print("no results found")
    else:
        print("Results from the same search")
        i=1
        for row in res:
            print(i,end=':') 
            print(row)
            i+=1

def sameSearch_with_removed_suffix_prefix(title_name,state_code,lang_code,or_and="or"):
    "This functions removes the common prefixes like times,the etc and then prepares the search string."
    print("searching with Common Prefixes and Suffixes Removed")
    #here we are splitting the string to get individual strings in the main string
    part_strings=title_name.split()
    sql="select t_code,t_name,owner_name,state_code,l_code from dbo.rni where 1=1 "  
    boolean_sql_unchanged=True
    for i in part_strings:
        if i in {"the","times","news","sandesh","daily","post","magazine","mirror","express","samachar"}:
            print("Removing "+i)
            continue
        else:
            sql=sql+ " and t_name like'%"+i+"%'"
            boolean_sql_unchanged=False
    if boolean_sql_unchanged==True:
        print("Only common prefixes / suffixes found in title nothing to search for")
        return
    sql=sql+ " and (state_code='"+state_code+"' "+or_and+" l_code='"+lang_code+"') ORDER BY t_name"
    #print(sql)
    cursor.execute(sql) 
    res = cursor.fetchall() 
    if(len(res)==0):
        print("no results found")
    else:
        i=1
        for row in res:
            print(i,end=':') 
            print(row)
            i+=1


def sameSoundSearch(title_name,state_code,lang_code,or_and="or"):
    "This function is used for searching same title without removing any part of the string and also not using syllable search"
    print("searching for "+title_name+" using same Sound search")
    #here we are splitting the string to get individual strings in the main string
    vowels="aeiouAEIOU"
    part_strings=title_name.split()
    searchStrings=[];
    for i in part_strings:
        for ele in vowels:
            i=i.replace(ele,'%')
        i=i.replace('%%','%')
        searchStrings.append(i)
    sql="select t_code,t_name,owner_name,state_code,l_code from dbo.rni where 1=1 "  
    for i in searchStrings:
        sql=sql+ " and t_name like'%"+i+"%'"
    sql=sql+ " and (state_code='"+state_code+"' "+or_and+" l_code='"+lang_code+"') ORDER BY t_name"
    print(sql)
    cursor.execute(sql) 
    res = cursor.fetchall() 
    if(len(res)==0):
        print("no results found")
    else:
        print("Results from the same search")
        i=1
        for row in res:
            print(i,end=':') 
            print(row)
            i+=1
            

def searchOtherPublicationsByOwner(OwnerName,state_code):
    part_strings=OwnerName.split()
    sql="select t_code,t_name,owner_name,state_code,l_code from dbo.rni where state_code='"+state_code+"'"  
    for i in part_strings:
        #print(i)
        sql=sql+ " and owner_name like'%"+i+"%'"
    #print(sql)
    cursor.execute(sql) 
    res = cursor.fetchall() 
    if(len(res)==0):
        print("no results found")
    else:
        i=1
        for row in res:
            print(i,end=':') 
            print(row)
            i+=1
         
        
        
def searchOtherPublicationsByOwner_allIndia(OwnerName):
    part_strings=OwnerName.split()
    sql="select t_code,t_name,owner_name,state_code,l_code from dbo.rni where 1=1"  
    for i in part_strings:
        #print(i)
        sql=sql+ " and owner_name like'%"+i+"%'"
    #print(sql)
    cursor.execute(sql) 
    res = cursor.fetchall() 
    if(len(res)==0):
        print("no results found")
    else:
        i=1
        for row in res:
            print(i,end=':') 
            print(row)
            i+=1



