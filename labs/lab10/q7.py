#Code by Mudit
#Date: 30/09/2026
import numpy as np

n = int(input("Enter the number of elements: "))
print("Enter the elements ")
a = np.array(list(map(int, input().split())))

# Find the position of the minimum value
min_index = np.argmin(a)

# Set the cursed chest's coins to 0
a[min_index] = 0

print("The modified array is ")
print(*a)
