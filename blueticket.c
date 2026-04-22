#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter the element a:");
    scanf("%d",&a);
    printf("enter the element b:");
    scanf("%d",&b);
    printf("enter the element c:");
    scanf("%d",&c);
    if((a+b==10)||(b+c==10)||(a+c==10))
    {
        printf("the result is 10");
    }
    else if((a>10)||(b>10)||(c>10))
    {
        printf("the result is 5");
    }
    else
    {
        printf("the result is 0");
    }
     return 0;
}