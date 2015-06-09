// ConsoleApplication2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "cv.h"
#include "cxcore.h"
#include "highgui/highgui.hpp"
int _tmain(int argc, _TCHAR* argv[])
{
	IplImage*src = cvLoadImage("psbe.jpg",CV_LOAD_IMAGE_COLOR);
	cvNamedWindow("we",1);
	cvShowImage("we", src);
	cvWaitKey(0);
	cvReleaseImage(&src);
	cvDestroyWindow("we");
	return 0;
}

