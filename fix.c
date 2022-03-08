#include<stdio.h>
#include<ctype.h>
char infix[30],postfix[30];
int top=-1;
char stack[30];

void push(char symbol)
{
stack[++top]=symbol;
}

char pop()
{
char symbol;
symbol=stack[top--];
return symbol;
}

int preced(int symbol)
{
switch(symbol)
{
case '$':return -1;
case '(':return 0;
case '+':
case '-':return 1;
case '*':
case '/':
case '^':return 2;
}
}

void InfixToPostfix()
{
int i=0, k=0;
char symbol;
while((symbol=infix[i++])!='\0')
{
if(symbol=='(')
push(symbol);
else if(isalnum(symbol))
postfix[k++]=symbol;
else if(symbol==')')
{
while(stack[top]!='(')
postfix[k++]=pop();
symbol=pop();
}
else
{
while(preced(stack[top])>=preced(symbol))
postfix[k++]=pop();
push(symbol);
}
}
while(stack[top]!='$')
postfix[k++]=pop();
postfix[k]='\0';
}
void main()
{
printf("enter infix expression:");
scanf("%s",infix);
push('$');
InfixToPostfix();
printf("the postfix expression:%s",postfix);
}
