//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
#include<stdlib.h>
typedef struct variables
{
    int a[10];
    int n;
}variable;

variable input_n_numbers()
{
    variable var;
    int i;
    printf("Enter the n numbers:");
    scanf("%d",&var.n);
    for(i=0;i<var.n;i++)
    {
        printf("\nEnter each numbers:");
        scanf("%d",&var.a[i]);
    }
    return var;
}

int add(variable var)
{
    int i;
    int sum=0;
    for(i=0;i<var.n;i++)
    {
        sum+=var.a[i];
    }
    return sum;
}

variable output_n_numbers(variable var,int sum)
{
    printf("\nSum of the  %d numbers is %d\n",var.n,sum);
}

int main()
{
    variable values;
    int sum;
    values=input_n_numbers();
    sum=add(values);
    output_n_numbers(values,sum);
    
    return 0;
}
