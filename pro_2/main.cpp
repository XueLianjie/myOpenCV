#include<cv.h>
#include<highgui.h>
void example2_4(IplImage* image)
cvNameWindow("example2-in");
cvNamewindow("example2-out");
cvShowImage("example2-in",image);
IplImage* out = cvCreateImage(
	cvGetSize(image),
	IPL_DEPTH_8U,
	3
);

