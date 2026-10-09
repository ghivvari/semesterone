import numpy as np


A = np.array([[50, 75, 10],
              [5, 10, 3],
              [90, 100, 50]], dtype=float)
b = np.array([500, 75, 1150], dtype=float)
matrix = np.hstack([A.astype(float), b.reshape(-1, 1).astype(float)])


def eliminasi_gauss(matrix):
    baris = len(matrix)
    kolom = len(matrix[0])

    pivot = 0

    for col in range(kolom):
        baris_pivot = None

        for row in range(pivot, baris):
            if (matrix[row][col] != 0):
                baris_pivot = row
                break
        if baris_pivot is None:
            continue

        matrix[baris_pivot][col], matrix[pivot][col] = matrix[baris_pivot][col], matrix[pivot][col]

        for k in range(pivot + 1, baris):
            faktor = matrix[k][col] / matrix[pivot][col]
            matrix[k][col] -= faktor * matrix[pivot][col]

        pivot += 1
        if pivot == baris:
            break

    return matrix




#invers
det_A = np.linalg.det(A)
if abs(det_A) < 1e-10:
    print("Matriks A singular, tidak memiliki invers.")
else:
    A_inv = np.linalg.inv(A)
    x = A_inv @ b
    print("det(A) =", det_A)
    print("Solusi x =", x)


def cramer(A, b):
    n = len(b)
    det_A = np.linalg.det(A)
    if abs(det_A) < 1e-10:
        raise ValueError("det(A) = 0, sistem tidak memiliki solusi tunggal")
 
    x = np.zeros(n)
    for i in range(n):
        Ai = A.copy().astype(float)
        Ai[:, i] = b
        x[i] = np.linalg.det(Ai) / det_A
    return x

print(eliminasi_gauss(matrix)) 
print(cramer(A, b))
