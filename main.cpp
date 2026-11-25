#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
    // Load the original image
    Mat image = imread("input.jpg");

    if (image.empty())
    {
        cout << "Error: Could not open image!" << endl;
        return -1;
    }

    // Display original image dimensions
    cout << "Original Image Size: "
         << image.cols << " x " << image.rows << endl;

    // Resize image to 50% of original size
    Mat resizedImage;

    resize(image, resizedImage, Size(), 0.5, 0.5);

    // Save resized image
    imwrite("resized.jpg", resizedImage);

    cout << "Image resized successfully!" << endl;
    cout << "Resized Image Size: "
         << resizedImage.cols << " x "
         << resizedImage.rows << endl;

    return 0;
}