#Code by Mudit
#Date: 10/09/2026
import numpy as np
import matplotlib.pyplot as plt

# Original equation:
# f(x) = e^x - 2

x = np.linspace(-1, 2, 500)
y = np.exp(x) - 2

# Newton-Raphson difference equation:
# x[n+1] = x[n] - 1 + 2e^(-x[n])

N = 6

xn = np.zeros(N + 1)

# Initial guess
xn[0] = 1.0

for n in range(N):
    xn[n + 1] = xn[n] - 1 + 2 * np.exp(-xn[n])

n = np.arange(N + 1)


print("n\t x[n]")

for i in range(N + 1):
    print(i, "\t", xn[i])

# Plot both

plt.plot(x, y, label=r"$f(x)=e^x-2$")

plt.stem(n, xn, label="")

plt.axhline(0)

plt.xlabel("x / iteration number n")
plt.ylabel("f(x) / x[n]")

plt.title("Original Equation and Difference Equation")

plt.grid()
plt.legend()

plt.savefig("/sdcard/github/ID1063/codes/graph.pdf")

plt.close()

#opening the pdf
import subprocess
subprocess.run(["termux-open", "/sdcard/github/ID1063/codes/graph.pdf"])
