#include<stdio.h>
int main()
{
    int a=10;
    int b=20;
    if(a==b)
    {
        printf("a & b are equal");
    }
    
    else if(a>=b)
    {
        printf("a is greater than or equal to b");
    }
    else if(a>b)
    {
        printf("a is greater than b");
    
    }
    else if(a<b)
    {
        printf("a is less than b");
    }
    else if(a<=b)
    {
        printf("a is less than or equal to b");
    }

    else{
        printf("a is not equal to b");
    }
    return 0;

}