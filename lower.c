#include <stdio.h>

int main() {
     char ch;
     printf("enter the element:");
     scanf("%c",&ch);
     char res = (ch >= 'a')&&(ch <= 'z');
     printf("%c is a lowercase alphabet i.e is:%d",ch,res);


    return 0;
}