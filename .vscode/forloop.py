n = int(input("Masukkan n: "))
total = 0

for i in range(n+1):
    print(i)
    if i % 2 == 1:
        total += i

print(total)