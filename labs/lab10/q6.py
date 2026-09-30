#Code by Mudit
#Date: 30/09/2026
a, b = map(int, input("Enter the numbers: ").split())

values = [a, b]

# Find the smaller value
if values[0] < values[1]:
    p = 0
else:
    p = 1

# Modify the selected value
values[p] += 10

print("The output after adding 10 is ")
print(values[0], values[1])
