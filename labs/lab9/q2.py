#Code by Mudit
#Date: 23/09/2026
def daysElapsed(day, month):
    days = [31, 28, 31, 30, 31, 30,
            31, 31, 30, 31, 30, 31]

    return sum(days[:month - 1]) + day


day = int(input("Enter day: "))
month = int(input("Enter month: "))

answer = daysElapsed(day, month)

print("Days elapsed =", answer)
