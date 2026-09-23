#Code by Mudit
#Date: 23/09/2026
import numpy as np

def rms(a, n):
    A = np.array(a).reshape(n, 1)   # n × 1 column matrix

    AT = A.T                        # 1 × n row matrix

    result = AT @ A                 # matrix multiplication

    return np.sqrt(result[0, 0] / n)

n1 = 4
a1 = [4, 3, 0, 5]

n2 = 4
a2 = [5, -1, 1, -1]

n3 = 1
a3 = [7.5]

answer1 = rms(a1, n1)
answer2 = rms(a2, n2)
answer3 = rms(a3, n3)

print("n1 =", n1)
print("Readings =", a1)
print("RMS = {:.2f}".format(answer1))

print("n2 =", n2)
print("Readings =", a2)
print("RMS = {:.2f}".format(answer2))

print("n3 =", n3)
print("Readings =", a3)
print("RMS = {:.2f}".format(answer3))
