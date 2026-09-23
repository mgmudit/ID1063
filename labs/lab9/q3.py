#Code by Mudit
#Date: 23/09/2026
from itertools import groupby  # Groups consecutive equal elements

k = int(input("Enter k: "))
a = list(map(int, input("Enter the entries: ").split()))

answer = 0
position = 0

for value, group in groupby(a):
    length = len(list(group))  # Finds length of the consecutive group

    if value == 1 and length > k:
        answer = position + k + 1  # Finds first session exceeding k
        break

    position += length  # Moves to the next group

print("Output =", answer)
