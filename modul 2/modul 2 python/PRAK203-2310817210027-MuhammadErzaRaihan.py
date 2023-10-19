#Note:Input yang pertama a, kedua b, ketiga i, ke-empat j, kelima x, dan yang ke-enam y.
#(secara berurutan) (Ketelitian 3 angka di belakang koma)

angka = input("input\n").split()

if len(angka) == 2:
    a, b = map(float, angka)
    i, j = map(float, input().split())
    x, y = map(float, input().split())
elif len(angka) == 6:
    a, b, i, j, x, y = map(float, angka)

hasil = (a - b) * (i/j) - (x + y)

print("\nOutput")
print(f"{hasil: .3f}")
