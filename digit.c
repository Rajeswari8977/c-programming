#include <stdio.h>

int main() {
     char ch;
     printf("enter the element:");
     scanf("%c",&ch);
     char res=(ch >= '0' && ch <= '9' );
     printf("%c is a digit i.e is:%d,ch,res");
    return 0;
}