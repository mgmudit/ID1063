#Code by Mudit
#Date: 10/09/2026
import numpy as np

A = np.array([
    [2, 3],
    [4, 6]
], dtype=float)

print("Rank of coefficient matrix =", np.linalg.matrix_rank(A))

for k in range(-10, 11):

    b = np.array([
        [6],
        [3 * k]
    ], dtype=float)

    augmented = np.hstack((A, b))

    rank_A = np.linalg.matrix_rank(A)
    rank_aug = np.linalg.matrix_rank(augmented)

    if rank_A == rank_aug:
        print("k =", k, "gives at least one solution")
