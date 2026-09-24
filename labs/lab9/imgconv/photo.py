#Code by Mudit
#Date: 24/09/2026
from PIL import Image
import numpy as np
import matplotlib.pyplot as plt
import subprocess

T = 128  # Same threshold used in Q5

image = Image.open("IMG_20260923_172509.jpg").convert("RGB")  # Opens colourful image
a = np.array(image)  # Converts image to NumPy array

# Converts RGB image into grayscale
gray = 0.299 * a[:, :, 0] + 0.587 * a[:, :, 1] + 0.114 * a[:, :, 2]

# Converts grayscale values to integers
gray = gray.astype(int)

# Converts the image pixels into one-dimensional data
pixels = gray.flatten()

# Sends threshold and pixels to the C program
input_data = str(T) + "\n" + "\n".join(map(str, pixels))

process = subprocess.run(
    ["./photo"],
    input=input_data,
    text=True,
    capture_output=True
)

# Gets black-and-white pixel values from C
black_white = np.array(
    list(map(int, process.stdout.split()))
).reshape(gray.shape)

# Displays grayscale and black-white images side by side
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

output = "image_result.png"
plt.savefig(output, bbox_inches="tight")
plt.close()

# Opens the output image directly
subprocess.run(["termux-open", output])
