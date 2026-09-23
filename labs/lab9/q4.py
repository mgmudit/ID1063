#Code by Mudit
#Date: 23/09/2026
import numpy as np

def firstStable(a, tolerance):
    differences = np.abs(np.diff(a))  # Finds absolute successive differences
    stable = np.where(differences <= tolerance)[0]  # Conditions

    if len(stable) > 0:
        return stable[0]  # Returns the first stable index

    return -1  # No stable index found


a = np.array(list(map(float, input().split())))  # Takes readings
tolerance = float(input())  # Takes tolerance

print(firstStable(a, tolerance))
