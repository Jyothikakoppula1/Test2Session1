#include<stdio.h>
int input()
{
  int n;
  printf("Enter a number\n");
  scanf("%d",&n);
  return n;
}
int find_fibo(int n)
{
  int p1=0;
  int p2=1;
  int temp;
  for(int i=0;i<n;i++)
    {
      temp=p2;
      p2=p1+p2;
      p1=temp;
    }
  return p1;
}
void output(int n,int fibo)
{
  printf("%d is %dth fibonacci number",fibo,n);
}
int main()
{
  int n,fibo;
  n=input();
  fibo=find_fibo(n);
  output(n,fibo);
  return 0;
}


