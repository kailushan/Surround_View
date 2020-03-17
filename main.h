#pragma once

#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

#include <iterator>
#include <vector>

#include <iostream>
#include <math.h>

using namespace std;
using namespace cv; 


void init(Mat& K_le, Mat& d_le, Mat& K_rh, Mat& d_rh, Mat& K_re, Mat& d_re);

Mat combine(Mat img_re, Mat img_le, Mat img_ri);

Mat image_remap_auto(Mat im_src, int q);