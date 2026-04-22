#include <stdio.h>

int main() {
 char ch;
 printf("enter the element:");
 scanf("%c",&ch);
 char res=((ch >= 'A' && ch <= 'Z')||(ch >= 'a' && ch <= 'z'));
 printf("%c is an alphabet i.e is:%d",ch,res);
    return 0;
}