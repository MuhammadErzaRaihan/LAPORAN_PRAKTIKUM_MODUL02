a = float(input("Masukkan Nilai Pertama :"))
b = float(input("Masukkan Nilai Kedua :"))

hasil = a + b

a = (f"{int(a)}" if a.is_integer() else f"{a:.2f}")
print(f"Hasil dari penjumlahan nilai pertama \"{a}\" dan nilai kedua \"{b}\" adalah {hasil:.2f}".format(a, b, hasil))
