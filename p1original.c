#include <stdio.h>
#include <math.h>
void input(float *x1, float *y1, float *x2, float *y2)
{
  printf("Enter coordinates of a point\n");
  scanf("%f%f",x1,y1);
  printf("Enter coordinates of another point\n");
  scanf("%f%f",x2,y2);
  }
void find_distance(float x1, float y1, float x2, float y2, float *distance) 
{
  *distance = sqrt(pow((x2-x1),2) + pow((y2-y1),2));// sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
 }
void output(float x1, float y1,float x2, float y2, float distance)
{
  printf("the distance between (%f,%f) and (%f,%f) is %f\n",x1,y1,x2,y2,distance);
}
int main()
{
  float x1,y1, x2,y2, distance;
  input(&x1,&y1,&x2,&y2);
  find_distance(x1,y1,x2,y2,&distance);
  output(x1,y1,x2,y2,distance);
  return 0;
}
