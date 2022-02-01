#include<stdio.h>
struct _complex{
  float real,imaginary;
};
typedef struct _complex Complex;
Complex input_chellox()
{
  Complex num;
  printf("enter real and imaginary numbers of first complex number=\n");
  scanf("%f %f",&num.real,&num.imaginary);
  return num;
}
Complex add(Complex a,Complex b)
{
  Complex c;
  c.real=a.real+b.real;
  c.imaginary=a.imaginary+b.imaginary;
  return c;
}
void output(Complex a,Complex b,Complex c)
{
  struct comp
{
  int r,im;
};
typedef struct comp Comp;
  Comp i,j,k;
  i.r=a.real;
  i.im=a.imaginary;
  j.r=b.real;
  j.im=b.imaginary;
  k.r=c.real;
  k.im=c.imaginary;
 printf("%d+%di+%d+%di=%d+%di\n",i.r,i.im,j.r,j.im,k.r,k.im);
}
int main()
{
  Complex a,b,c;
  a=input_chellox();
  b=input_chellox();
  c=add(a,b);
  output(a,b,c);
  return 0;
}