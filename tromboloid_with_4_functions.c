//WAP to find the volume of a tromboloid using 4 functions.

#include<stdio.h>
float inputh();
float inputb();
float inputd();
float cal(float h,float b,float d);

float inputh()
{
float h;
printf("Enter h for the tromboloid");
scanf("%f",&h);
return h ;
}
float inputb()
{
float b;
printf("Enter b for the tromboloid");
scanf("%f",&b);
return b;
}
float inputd()
{
float d;
printf("Enter d for the tromboloid");
scanf("%f",&d);
return d;
}

float cal(float h,float b,float d)
{
float v;
v=0.34*((h*b*d)+(d/b));

return v;
}
float display(float v)
{
    printf("vol of tromboloid is%f",v);

}
int main()
{
float h,b,d,v;

h=inputh();
b=inputb();
d=inputd();
v=cal(h,b,d);
display(v);
return 0;
}  


