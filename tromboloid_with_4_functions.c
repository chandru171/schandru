//WAP to find the volume of a tromboloid using 4 functions.

#include<stdio.h>
float input()
{
   int x;
   printf("Enter h , d , b \n");
   scanf("%d",&x);
   return x;
}
 
float find_volume(int h, int d,int b)
{
   float volume;
   volume=0.33*((h*d*b)+(d/b));
   return volume;
}
 
int output(float v)
{
   printf("Vol of tromboloid is %f\n",v);
return 0;
}

void main()
{
   int h,d,b;
    float volume ;
    h=input();
    d=input();
    b=input();
   volume=find_volume(h,d,b);
    output(volume);
 
   
}


