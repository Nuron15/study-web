nilai = []

# input 5 nilai
for i in range(5):
    n = float(input(f"Masukkan nilai ke-{i+1}: "))
    nilai.append(n)

# hitung rata-rata
rata = sum(nilai) / len(nilai)

# output
print("\nData nilai:", nilai)
print("Rata-rata:", round(rata, 2))