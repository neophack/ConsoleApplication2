// ConsoleApplication2.cpp : �������̨Ӧ�ó������ڵ㡣
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

