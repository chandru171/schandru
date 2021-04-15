//WAP to find the sum of two fractions.
#include<stdio.h>
#include<stdlib.h>
typedef struct fraction
{
    int num;
    int den;
}fract;

fract input()
{
    fract f1;
    printf("Enter the numerator:\n");
    scanf("%d",&f1.num);
    printf("Enter the  denominator:\n");
    scanf("%d",&f1.den);
    return f1;
}

int greatest(int x, int y)
{
    int i,var;
    var=1;
    for (i=2;i<=x && i<=y;i++)
    {
        if ((x%i==0) && (y%i==0))
        {
            var=i;
        }
    }
    return var;
}

fract add(fract f1,fract f2)
{
    int gcd;
    fract answer;
    answer.num=(f1.num*f2.den)+(f2.num*f1.den);
    answer.den=f1.den*f2.den;

    gcd=greatest(answer.num,answer.den);

    answer.num=answer.num/gcd;
    answer.den=answer.den/gcd;

    return answer;
}

void print(fract f1,fract f2,fract answer)
{
    printf("Sum of the %d/%d & %d/%d is %d/%d",f1.num,f1.den,f2.num,f2.den,answer.num,answer.den);
}

int main()
{

    fract a, b, c;

    a=input();
    b=input();
    c=add(a,b);
    print(a,b,c);
    
    return 0;
}
