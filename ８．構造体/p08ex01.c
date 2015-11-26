/***  p08ex01.c  ***/

#include <stdio.h>
#include <math.h>

typedef struct {
	int x; /*x座標*/
	int y; /*y座標*/
} point_t;
/*(x,y)を反時計回りにθラジアン回転すると( x cosθ - y sinθ , x sinθ + y cosθ )になる。*/
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
	pi = 2.0*asin(1.0);//πの値
	printf("%.10lf\n",pi);
	/*unit = pi/180.0;//度→らじあん
	deg_r = theta*unit;*/
	theta=pi/deg;
	point1=rotatePoint(point,theta);
	printf("x=%d,y=%d\n",point1.x,point1.y);
	theta= -1*theta;
	point1=rotatePoint (point,theta);
	printf("x=%d,y=%d\n",point1.x,point1.y);
	
	return 0;
}


/**************** 実行結果 *****************
3.1415926536
x=0,y=141
x=141,y=0


*******************************************/
