class operations:
    def __init__(self, a, b):
        self.a = a
        self.b = b
    @property
    def nambah(self):
        return self.a + self.b
    @property
    def kurang(self):
        return self.a - self.b
    @property
    def kali(self):
        return self.a * self.b
    @property
    def bagi(self):
        return self.a / self.b



hitung = operations(4, 2)
print(f"{hitung.nambah}")