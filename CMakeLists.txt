cmake_minimum_required(VERSION 3.22)
project (Chapter_1)

set(CMAKE_CXX_STANDARD 14)

set(OpenCV_DIR "C:\\opencv\\build")

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(Chapter_1 main.cpp)

set(OpenCV_LIBS opencv_core opencv_imgproc opencv_highgui opencv_imgcodecs)

target_link_libraries(Chapter_1 ${OpenCV_LIBS})