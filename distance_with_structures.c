//WAP to find the distance between two points using structures and 4 functions.

#include<stdio.h>
#include<math.h>

typedef struct Point 
{
float a;
float b;
} PO;
PO input()
{
PO p;
printf("enter  a for point");
scanf("%f",&p.a);
printf("enter  b for point");
scanf("%f",&p.b);
return p;
}
float calculate(PO p1,PO p2)
{
float d;
d = sqrt((p2.a-p1.a)*(p2.a-p1.a)+(p2.b-p1.b)*(p2.b-p1.b));
return d;
}
void Print(PO p1,PO p2,float d)
{
printf("Dis b/w %f ,%f, %f&%f is %f",p1.a,p1.b,p2.a,p2.b,d);

}
float main()
{
float d;
PO p1;PO p2;
p1=input();
p2=input();
d=calculate(p1,p2);
Print(p1,p2,d);
return 0;
}
