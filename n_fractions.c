//WAP to find the sum of n fractions.

#include<stdio.h>
#include<stdio.h>
typedef struct fractions
{
    int num;
    int den;
}frac;

void input_n(int *n,frac answer[10]);
frac input_one(int n);
frac add_n(int n,frac f1[10]);
int great(int a,int b);
void print_n(int n,frac f2[10],frac final_answer);

int main()
{
    int i,n;
    frac input_values[10],add_fraction_result;

    input_n(&n,input_values);
    add_fraction_result=add_n(n,input_values);
    print_n(n,input_values,add_fraction_result);
    
    return 0;
}

void input_n(int *n,frac answer[10])
{
    int i;
    printf("Enter the  fractions:\n");
    scanf("%d",n);
    for(i=0;i<*n;i++)
    {
        answer[i]=input_one(i+1);
    }
}

frac input_one(int k)
{
    struct fractions f1;
    printf("\nEnter nume %d: ",k);
    scanf("%d",&f1.num);
    printf("\nEnter deno %d: ",k);
    scanf("%d",&f1.den);
    return f1;
}

frac add_n(int n,frac f1[10])
{
    int i,gcd;
    frac ans;
    ans.num=f1[0].num;
    ans.den=f1[0].den;
    for(i=1;i<n;i++)
    {
        ans.num=ans.num*f1[i].den+ans.den*f1[i].num;
        ans.den=ans.den*f1[i].den;
    }
    gcd=great(ans.num,ans.den);
    ans.num=ans.num/gcd;
    ans.den=ans.den/gcd;
    return ans;
}

int great(int a,int b)
{
    int i,gcd;
    gcd=1;
    for(i=2;i<=a && i<=b;i++)
    {
        if((a%i==0)&&(b%i==0))
        {
            gcd=i;
        }
    }
    return gcd;
}

void print_n(int n,frac f2[10],frac final_answer)
{
    int i;
    printf("%d/%d",f2[0].num,f2[0].den);
    for(i=1;i<n;i++)
    {
        printf("+%d/%d",f2[i].num,f2[i].den);
    }
    printf("= %d/%d",final_answer.num,final_answer.den);
}
