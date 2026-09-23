#Code by Mudit
#Date: 23/09/2026
from PIL import Image
import numpy as np
import matplotlib.pyplot as plt
import subprocess

T = 128  # Same threshold used in Q5

image = Image.open("IMG_20260923_172509.jpg").convert("RGB")  # Opens the colourful image
a = np.array(image)  # Converts image to a NumPy array

# Converts RGB image into grayscale
gray = 0.299 * a[:, :, 0] + 0.587 * a[:, :, 1] + 0.114 * a[:, :, 2]

# Applies the threshold to create black-and-white image
black_white = np.where(gray >= T, 255, 0)

# Creates two images side by side
plt.figure(figsize=(12, 6))

plt.subplot(1, 2, 1)
plt.imshow(gray, cmap="gray", vmin=0, vmax=255)
plt.title("Grayscale Image")
plt.axis("off")

plt.subplot(1, 2, 2)
plt.imshow(black_white, cmap="gray", vmin=0, vmax=255)
plt.title("Black & White Image (T = 128)")
plt.axis("off")

plt.tight_layout()

output = "comparison.png"
plt.savefig(output, bbox_inches="tight")
plt.close()

# Opens the output image directly
subprocess.run(["termux-open", output])
