import numpy as np

r1, c1 = map(int, input().split())

# Read matrix A
A = np.array([
    list(map(int, input().split()))
    for _ in range(r1)
])

r2, c2 = map(int, input().split())

# Read matrix B
B = np.array([
    list(map(int, input().split()))
    for _ in range(r2)
])

# Calculate A × B
C = A @ B

# Print the product matrix
for row in C:
    print(*row)
