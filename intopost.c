#include<stdio.h>
char infix[30];
char postfix[30];
int preced(int x)
{
if(x=='(')
return 0;
if(x=='+' ||x=='-')
return 1;
if(x=='*' ||x=='/')
return 2;
if(x=='^')
return 3;
}
int main()

{
printf("enter infix expression:");
scanf("%s",infix);
printf("the postfix expression:%s", postfix);
}
