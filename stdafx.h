
#pragma once

#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <string>
#include <opencv2/opencv.hpp>
#include "targetver.h"

using namespace std;
using namespace cv;

// Check color
bool isRed(int a, int b);
bool isGreen(int a, int b);
bool isYellow(int a, int b);

// Segment image in L*a*b* color space
int findColorID(Mat LabImage);
Mat segmentByColorID(Mat srcImage, int colorID);

// Detect ROI of Tomato
RotatedRect detectROI(Mat segImage);

// Main program
int runOnCamera();
Mat runOnAnImage(Mat srcImage);

