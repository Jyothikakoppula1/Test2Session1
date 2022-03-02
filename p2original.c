#include<stdio.h>
#include<math.h>
void input_triangle(float *x1,float *y1,float *x2,float *y2,float *x3,float *y3)
{
  printf("Enter a point\n");
  scanf("%f%f",x1,y1);
  printf("Enter a point\n");
  scanf("%f%f",x2,y2);
  printf("Enter a point\n");
  scanf("%f%f",x2,y2);
}
int is_triangle(float x1,float y1,float x2,float y2,float x3,float y3,int *i)
{
  float a=((x1 * (y2 - y3)+ x2 * (y3 - y1)+ x3   *(y1 -  y2)))/2;
  return fabs(a)>0.00001;
}
void output(float x1,float y1,float x2,float y2,float x3,float y3,int i)
{
  if(i==1)
    printf("The points do not form a triangle");
  else 
    printf("The points form a triangle");
}
int main()
{
  float x1,y1,x2,y2,x3,y3;
  int i;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  is_triangle(x1,y1,x2,y2,x3,y3,&i);
  output(x1,y1,x2,y2,x3,y3,i);
  return 0
    }