string1 = "Hello"
string2 = "World"
# Concatenating strings using the + operator
result = string1 + string2
print(result)  # Output: HelloWorld
result = string1 + " " + string2
print(result)  # Output: Hello World    

name = "Stutniga"
age = 20
# Concatenating strings and variables using f-strings
nameage = name + " age : " + str(age)
print(nameage)  # Output: Stutniga age : 20

nameage2 = f"{name} age : {age}"
print(nameage2)  # Output: Stutniga age : 20

