//WAP to find the distance between two point using 4 functions.

#include<stdio.h>
#include<math.h>

float pointx()
{
float a1;
printf("Enter  coordinate of a");
scanf("%f",&a1);
return a1;
}

float pointy()
{
float b1;
printf("Enter coordinate of b");
scanf("%f",&b1);
return b1;
}

float pointz()
{
float a2;
printf("Enter coordinate of a2");
scanf("%f",&a2);
return a2;
}

float pointw()
{
float b2;
printf("Enter coordinate of b2");
scanf("%f",&b2);
return b2;
}
float distance(float a1,float b1,float a2,float b2)
{
float d;
d = sqrt((a2-a1)*(a2-a1)+(b2-b1)*(b2-b1));
printf(" dist b/w %f,%f ,%f& %f is %f",a1,b1,a2,b2,d);
}
void main()
{
float a1,b1,a2,b2,d;
a1=pointx();
b1=pointy();
a2=pointz();
b2=pointw();
distance(a1,b1,a2,b2);

}
