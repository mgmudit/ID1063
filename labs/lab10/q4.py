#Code by Mudit
#Date: 30/09/2026
# Read hours, minutes and seconds
hours, minutes, seconds = map(int, input("Enter hours, minutes and seconds: ").split())

# Convert everything to seconds
total = hours * 3600 + minutes * 60 + seconds

print("Total seconds elapsed are ")
print(total)
