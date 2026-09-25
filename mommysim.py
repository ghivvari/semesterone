import time

print("Gay counter")
name = input("Name: ")
age = int(input("age: "))
tall = int(input("tall: "))
gayness = input("are you gay (y/n): ")
skin = input("black/white/moccachino: ")

if gayness == "y":
    gayness = 100
else:
    gayness = 50

if skin == "moccachino":
    result = "So gay there isnt any number can write it"
else:
    result =  ((2 * gayness / age) + (3 * tall)) / 100



print("Calculating")
time.sleep(0.5)
print(f"result {result}")