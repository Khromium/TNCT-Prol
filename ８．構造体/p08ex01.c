/***  p08ex01.c  ***/

#include <stdio.h>
#include <math.h>

typedef struct {
	int x; /*x���W*/
	int y; /*y���W*/
} point_t;
/*(x,y)�𔽎��v���Ƀƃ��W�A����]�����( x cos�� - y sin�� , x sin�� + y cos�� )�ɂȂ�B*/
point_t rotatePoint(point_t point, double theta)
{
	point_t point1;
	int x,y;
	point1.x = (point.x*cos(theta)-point.y*sin(theta));
	point1.y = (point.x*sin(theta)+point.y*cos(theta));
	return point1;
}


int main()
{
	double deg=4;
	double pi,theta;
	point_t point={100,100};
	point_t point1;
	pi = 2.0*asin(1.0);//�΂̒l
	printf("%.10lf\n",pi);
	/*unit = pi/180.0;//�x���炶����
	deg_r = theta*unit;*/
	theta=pi/deg;
	point1=rotatePoint(point,theta);
	printf("x=%d,y=%d\n",point1.x,point1.y);
	theta= -1*theta;
	point1=rotatePoint (point,theta);
	printf("x=%d,y=%d\n",point1.x,point1.y);
	
	return 0;
}


/**************** ���s���� *****************
3.1415926536
x=0,y=141
x=141,y=0


*******************************************/
