import Test
def Reader(text):
    print(text)

print("line1")
Reader(Test.text3)
print("line2")
Reader(Test.text2)
print("line3")
Reader(Test.text)
words=Test.text2.split()
print(words)
print(len(words))
terminals="?,;.!"
number_of_sentences=0
for char in Test.text:
    if char in terminals:
        #if(char=='.'or char=='?'or char=='!' or char==';' or char==','):
            number_of_sentences=number_of_sentences+1
print(number_of_sentences)

