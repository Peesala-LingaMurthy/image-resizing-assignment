# Image Resizing Using C++ and OpenCV

## Project Overview
This project demonstrates image resizing using C++ and OpenCV. It reads an input image, displays its original dimensions, resizes it to 50% of its original width and height, and saves the resized image.

## Technologies Used
- Programming Language: C++
- Library: OpenCV 5.0.0
- Compiler: GCC (MinGW-w64)
- Environment: MSYS2 UCRT64

## Features
- Loads an image using OpenCV.
- Checks whether the image is loaded successfully.
- Displays the original image dimensions.
- Resizes the image to 50% of its original size.
- Saves the resized image as `resized.jpg`.
- Displays the resized image dimensions.

## Project Structure

```text
image-resizing-assignment/
├── main.cpp
├── input.jpg
├── resized.jpg
└── README.md
```

## Installation Requirements
1. Install MSYS2.
2. Install GCC compiler.
3. Install OpenCV.

Install OpenCV in the MSYS2 UCRT64 terminal:

```bash
pacman -S mingw-w64-ucrt-x86_64-opencv
```

## Compilation

Navigate to the project directory and compile:

```bash
g++ main.cpp -o resize $(pkg-config --cflags --libs opencv5)
```

## Execution

Run the compiled program:

```bash
./resize
```

## Sample Output

```text
Original Image Size: 736 x 414
Image resized successfully!
Resized Image Size: 368 x 207
```

## OpenCV Functions Used

- `imread()` – Loads the input image.
- `Mat` – Stores image data.
- `resize()` – Changes the image dimensions.
- `imwrite()` – Saves the resized image.
- `image.empty()` – Checks whether the image was loaded successfully.

## Learning Outcomes
- Understanding basic image processing using OpenCV.
- Working with image dimensions and resizing.
- Compiling and executing C++ programs with external libraries.
- Using Git and GitHub for project management.

## Author
**Peesala Linga Murthy**

GitHub: https://github.com/Peesala-LingaMurthy
