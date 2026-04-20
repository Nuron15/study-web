import random

try:
    with open("best_score.txt", "r") as f:
        best = int(f.read())
except:
    best = 9999

print("1. Easy (1-10)\n2. Medium (1-100)\n3. Hard (1-1000)")
level = int(input("Pilih level: "))

max_val = 10 if level == 1 else 100 if level == 2 else 1000
angka = random.randint(1, max_val)

percobaan = 0

while True:
    tebakan = int(input("Tebak angka: "))
    percobaan += 1

    if tebakan > angka:
        print("Terlalu besar!")
    elif tebakan < angka:
        print("Terlalu kecil!")
    else:
        print(f"Benar! Percobaan: {percobaan}")
        break

if percobaan < best:
    print("Best score baru!")
    with open("best_score.txt", "w") as f:
        f.write(str(percobaan))