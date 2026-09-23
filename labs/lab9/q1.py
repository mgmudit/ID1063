#Code by Mudit
#Date: 23/09/2026
import numpy as np

def rms(a, n):
    A = np.array(a).reshape(n, 1)
    norm_A = np.linalg.norm(A)

    return norm_A / np.sqrt(n)


# Example 1
n1 = 4
a1 = [4, 3, 0, 5]

# Example 2
n2 = 4
a2 = [1, -1, 1, -1]

# Example 3
n3 = 1
a3 = [7.5]


answer1 = rms(a1, n1)
answer2 = rms(a2, n2)
answer3 = rms(a3, n3)


print("Example 1:")
print("n =", n1)
print("Readings =", a1)
print("Norm =", np.linalg.norm(a1))
print("RMS = {:.2f}".format(answer1))

print("\nExample 2:")
print("n =", n2)
print("Readings =", a2)
print("Norm =", np.linalg.norm(a2))
print("RMS = {:.2f}".format(answer2))

print("\nExample 3:")
print("n =", n3)
print("Readings =", a3)
print("Norm =", np.linalg.norm(a3))
print("RMS = {:.2f}".format(answer3))
