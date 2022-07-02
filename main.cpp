/*
 * Adding Libraries
 *
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
*/

/*
 * Using The Namespaces
 *
using namespace std;
using namespace cv;
*/

/*
 * WebCam - Video Stream
 *
int main() {
	VideoCapture cam(0);
    Mat img;
    while (true) {
        cam.read(img);
        imshow("Pika!",img);
        if (waitKey(1) && 0xFF == ('q')) {
            break;
        }

    }

}
*/

/*
 * Picture - Show Picture
 *
int main() {
    string path = "C:/Users/davdk/Desktop/OpenCV C++/Chapter 1/Resources/original.jpg";
    Mat img = imread(path);
    imshow("Pika!",img);
    waitKey(0);

}
*/

/*
 * Video File (.mp4) - Video Stream
 *
int main() {
    string path = "C:\\Users\\davdk\\Desktop\\OpenCV C++\\Chapter 1\\Resources\\test_video.mp4";
    VideoCapture cam(path);
    Mat img;
    while (true) {
        cam.read(img);
        imshow("Pika!",img);
        waitKey(2);
    }

}
*/
