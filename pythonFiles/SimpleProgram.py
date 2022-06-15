"""This is a simple utility to evaluate an expression"""
def add(var1,var2):
    """This function gives the summation of two numbers input"""
    var3=var1+var2
    return var3
def FullEval(Expression):
    """This Function evaluates the string input"""
    var4=eval(Expression)
    return var4
var1=input("Please input your first number")
var2=input("Please input your second number")
sum=add(var1,var2)
print(sum)
var6=input("Enter your expression")
print(str(FullEval(var6)))