#Code by Mudit
#Date: 30/09/2026
# Taking the input
n = int(input())

safe = True

# Read and check all temperature readings
temperatures = map(int, input().split())

for temperature in temperatures:
    if temperature < 20 or temperature > 80:
        safe = False

# Printing the results
if safe:
    print("Safe")
else:
    print("Unsafe")
