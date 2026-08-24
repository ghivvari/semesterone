NormalString = 'this is a ' \
'string'
MultilineString = '''this is a 
multiline string''' 

print(NormalString)
print(MultilineString) #pas di run dia bisa kebawah kalo dikasih space

apostrope = 'It\'s a sunny day'
print(apostrope)
print('It' in apostrope) #cek apakah ada kata it di dalam apostrope
print('e' in apostrope) #cek apakah ada kata e di dalam apostrope
print(len(apostrope)) #cek panjang dari apostrope
print(apostrope[3]) #cek index ke 3 dari apostrope
print(apostrope[0:5]) #cek index ke 0 sampai 5 dari apostrope
print(apostrope[-2]) #cek index ke -2 dari apostrope

hysterical = 'hysterical'
print(hysterical.upper()) #ubah ke huruf besar
print(hysterical.lower()) #ubah ke huruf kecil
print(hysterical.capitalize()) #ubah huruf pertama jadi kapital

hysterical = 'hysteric'
print(hysterical) #karena python itu immutable, jadi kalau kita ubah variabelnya, dia akan membuat variabel baru

kapital = ' the capital of assyria is nineveh'
print(kapital.title()) #ubah setiap kata jadi kapital
print(kapital.upper()) #ubah ke huruf besar
print(kapital.lower()) #ubah ke huruf kecil
print(kapital.strip()) #hapus spasi di awal dan akhir
print(kapital.replace('assyria', 'mesopotamia')) #ganti assyria jadi mesopotamia
print(kapital.split()) #pisah string jadi list
print(kapital.split('a')) #pisah string jadi list berdasarkan huruf a
print(kapital.startswith('the')) #cek apakah string diawali dengan the
print(kapital.endswith('nineveh')) #cek apakah string diakhiri dengan nineveh
