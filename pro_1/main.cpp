#include<opencv2/highgui/highgui.hpp>
#include<cv.hpp>
#include <boost/concept_check.hpp>

int g_slider_position = 0;
CvCapture* g_capture  = NULL;
void onTrackbarSlide(int pos)
{
  cvSetCaptureProperty(
    g_capture,
    CV_CAP_PROP_POS_FRAMES,
    pos
  );
}

int main(int argc, char** argv)
{
  IplImage* img = cvLoadImage(argv[1]);
  cvNamedWindow("Example", CV_WINDOW_AUTOSIZE);
  cvWaitKey(1000);
  cvShowImage("Example",img);
  cvWaitKey(0);
  cvNamedWindow("Example2", CV_WINDOW_AUTOSIZE);
  CvCapture* capture = cvCreateFileCapture(argv[2]);
  IplImage* frame;
  while(1)
  {
    frame = cvQueryFrame(capture);
    if(!frame) break;
    cvShowImage("Example2", frame);
    char c = cvWaitKey(13);
    if(c == 27) break;
        
  }
  
  cvReleaseImage(&img);
  cvReleaseCapture(&capture);
  cvDestroyWindow("Example2");
  
  return 0;
}

