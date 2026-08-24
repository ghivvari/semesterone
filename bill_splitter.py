class counting:
    def __init__(self, j_teman, harga):
        self.j_teman = j_teman
        self.harga = harga
    def counts(self):
        return self.harga / self.j_teman * 1.10


bayar = counting(float(input("Masukkan jumlah teman: ")), float(input("Masukkan total harga: "))).counts()
print(round(bayar, 2))