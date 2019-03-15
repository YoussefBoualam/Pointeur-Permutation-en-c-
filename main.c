#include <stdio.h>
#include <stdlib.h>
void permeter(float *a,float *b)
{float c;
c=*a;   *a=*b;     *b=c;
}
     
int main(int argc, char *argv[])
{
  float x=10,y=20;
  permeter(&x,&y);
  printf("X= %f , y=%f \n",x,y);
  
  system("PAUSE");	
  return 0;
}
