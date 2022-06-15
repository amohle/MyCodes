#checking whether \b can delete things or not
import re
str="This is a cool string";
rs=re.sub("cool","\b",str)
print(rs)