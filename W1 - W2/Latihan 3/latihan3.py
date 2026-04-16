with open("ops.txt", "r") as f, open("results.txt", "w") as out:
    for line in f:
        a, op, b = line.split()
        a, b = float(a), float(b)

        if op == '+':
            hasil = a + b
        elif op == '-':
            hasil = a - b
        elif op == '*':
            hasil = a * b
        elif op == '/':
            hasil = a / b

        out.write(f"{a} {op} {b} = {hasil}\n")

print("Hasil sudah disimpan di results.txt")