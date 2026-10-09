import numpy as np
import matplotlib.pyplot as plt
import matplotlib.patches as mpatches
from matplotlib.patches import FancyArrowPatch
import statistics
from scipy import stats

##Persiapan: Import Library
#Definisi vektor 
a = np.array([3, 2])   # Vektor a
b = np.array([1, 4])   # Vektor b

# Magnitude & arah 
mag_a = np.linalg.norm(a)
mag_b = np.linalg.norm(b)
sudut_a = np.degrees(np.arctan2(a[1], a[0]))
sudut_b = np.degrees(np.arctan2(b[1], b[0]))

print("=" * 40)
print("INFORMASI VEKTOR")
print("=" * 40)
print(f"  Vektor a = {a}")
print(f"    Magnitude |a| = {mag_a:.4f}")
print(f"    Sudut θ = {sudut_a:.2f}°")
print()
print(f"  Vektor b = {b}")
print(f"    Magnitude |b| = {mag_b:.4f}")
print(f"    Sudut θ = {sudut_b:.2f}°")

# Visualisasi 
fig, ax = plt.subplots(figsize=(7, 6))
origin = [0, 0]
vektors = {'$\\vec{a}$ = (3,2)': (a, '#2a78d6'),
           '$\\vec{b}$ = (1,4)': (b, '#d95926')}
for label, (vec, color) in vektors.items():
    ax.quiver(*origin, *vec, angles='xy', scale_units='xy', scale=1,
              color=color, width=0.012, headwidth=4, headlength=4)
    ax.annotate(label, xy=vec, xytext=(vec[0]+0.15, vec[1]+0.1),
                fontsize=12, color=color, fontweight='bold')

# Titik komponen (panah putus-putus)
ax.plot([a[0], a[0]], [0, a[1]], '--', color='#2a78d6', alpha=0.4, linewidth=1)
ax.plot([0, a[0]], [a[1], a[1]], '--', color='#2a78d6', alpha=0.4, linewidth=1)

ax.set_xlim(-0.5, 5)
ax.set_ylim(-0.5, 5.5)
ax.axhline(0, color='gray', linewidth=0.8)
ax.axvline(0, color='gray', linewidth=0.8)
ax.grid(True, linestyle='--', alpha=0.4)
ax.set_xlabel('x', fontsize=12)
ax.set_ylabel('y', fontsize=12)
ax.set_title('Visualisasi Vektor 2D', fontweight='bold')
ax.set_aspect('equal')

# Legenda
patches = [mpatches.Patch(color='#2a78d6', label=f'$\\vec{{a}}$ = (3,2) | |a|={mag_a:.2f}'),
           mpatches.Patch(color='#d95926', label=f'$\\vec{{b}}$ = (1,4) | |b|={mag_b:.2f}')]
ax.legend(handles=patches, fontsize=10, loc='lower right')
plt.tight_layout()
plt.show()

#Operasi Vektor (Penjumlahan, Pengurangan, Dot Product)
# Operasi Vektor
a = np.array([3, 2])
b = np.array([1, 4])
jumlah  = a + b
selisih = a - b
skalar  = 2 * a
dot     = np.dot(a, b)

# Sudut antara dua vektor
cos_theta = dot / (np.linalg.norm(a) * np.linalg.norm(b))
sudut_ab  = np.degrees(np.arccos(np.clip(cos_theta, -1, 1)))

print("=" * 45)
print("HASIL OPERASI VEKTOR")
print("=" * 45)
print(f"  a             = {a}")
print(f"  b             = {b}")
print(f"  a + b         = {jumlah}")
print(f"  a - b         = {selisih}")
print(f"  2 × a         = {skalar}")
print(f"  a · b         = {dot}  (dot product)")
print(f"  Sudut (a,b)   = {sudut_ab:.2f}°")

##Vektor 3D dan Cross Product
#Vektor 3D 
u = np.array([1, 2, 0])
v = np.array([3, 0, 1])

cross   = np.cross(u, v)
dot_3d  = np.dot(u, v)
mag_u   = np.linalg.norm(u)
mag_v   = np.linalg.norm(v)

print("=" * 45)
print("OPERASI VEKTOR 3D")
print("=" * 45)
print(f"  u              = {u}")
print(f"  v              = {v}")
print(f"  u · v          = {dot_3d}  (dot product)")
print(f"  u × v          = {cross}  (cross product)")
print(f"  |u × v|        = {np.linalg.norm(cross):.4f}  (luas jajar genjang)")
print(f"  |u| = {mag_u:.4f} | |v| = {mag_v:.4f}")

#Visualisasi 3D 
fig = plt.figure(figsize=(8, 7))
ax  = fig.add_subplot(111, projection='3d')

vectors = {
    '$\\vec{u}$ = (1,2,0)': (u, '#2a78d6'),
    '$\\vec{v}$ = (3,0,1)': (v, '#d95926'),
    '$\\vec{u×v}$'        : (cross, '#1baf7a'),
}

for label, (vec, color) in vectors.items():
    ax.quiver(0, 0, 0, vec[0], vec[1], vec[2],
              color=color, arrow_length_ratio=0.15, linewidth=2.5)
    ax.text(vec[0]*1.05, vec[1]*1.05, vec[2]*1.05,
            label, color=color, fontsize=10, fontweight='bold')

ax.set_xlim([0, 3]); ax.set_ylim([0, 3]); ax.set_zlim([0, 3])
ax.set_xlabel('X'); ax.set_ylabel('Y'); ax.set_zlabel('Z')
ax.set_title('Vektor 3D dan Cross Product\n$\\vec{u} \\times \\vec{v}$ tegak lurus terhadap u dan v',
             fontweight='bold')
ax.view_init(elev=20, azim=40)
ax.grid(True, alpha=0.3)
plt.tight_layout()
plt.show()

## Operasi Dasar Matriks
#Definisi Matriks 
A = np.array([[2, 1],
              [3, 4]])

B = np.array([[1, 0],
              [2, 3]])

#Operasi 
A_plus_B  = A + B
A_kali_B  = A @ B   # perkalian matriks
A_T       = A.T            # transpose
det_A     = np.linalg.det(A)
inv_A     = np.linalg.inv(A)
A_inv_A   = A @ inv_A      # harus = I

def print_matrix(name, M, fmt='.4f'):
    print(f"\n  {name}:")
    for row in M:
        print("    " + "  ".join(f"{x:{fmt}}" for x in row))

print("=" * 45)
print("OPERASI MATRIKS")
print("=" * 45)
print_matrix("A", A, '.0f')
print_matrix("B", B, '.0f')
print_matrix("A + B", A_plus_B, '.0f')
print_matrix("A × B (perkalian matriks)", A_kali_B, '.0f')
print_matrix("A^T (transpose)", A_T, '.0f')
print(f"\n  det(A) = {det_A:.4f}")
print_matrix("A⁻¹ (invers)", inv_A)
print_matrix("A × A⁻¹ ≈ I", A_inv_A)
