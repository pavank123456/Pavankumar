#include<stdio.h>
#include<math.h>
int main()
{
 float a,b,c,r1,r2,d;
 printf("enter the coeficients of equation");
 scanf("%f%f%f",&a,&b,&c);
 d=b*b-4*a*c;
 if(d==0)
 {
  printf("the roots are real and equal\n");
  r1=-b/2*a;
  r1=r2;
  printf("r1=r2=%f\n",r1);
 }
 else if(d>0)
 {
  printf("the roots are real and unequal\n");
  r1=(-b+sqrt(d))/2*a;
  r2=(-b-sqrt(d))/2*a;
  printf("r1=%f r2=%f\n",r1,r2);
 }
 else
 {
  float real,img;
  real=-b/2*a;
  img=sqrt(d)/2*a;
  printf("the roots are imaginary\n");
  r1=real+img;
  r2=real-img;
  printf("r1=%f r2=%f\n",r1,r2);
 }
 return 0;
}

 

