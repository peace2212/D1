a
#include<stdio.h>
#include<math.h>
#include<string.h>

float compute(char symbol, float op1, float op2)
{
 switch (symbol)
 {
  case '+': return op1 + op2;
  case '-': return op1 - op2;
  case '*': return op1 * op2;
  case '/': return op1 / op2;
  case '$':
  case '^': return pow(op1,op2);
  default : return 0;
 }
}

void main()
{
float s[20], res, op1, op2;
int top, i;
char postfix[20], symbol;
printf("\nEnter the postfix expression:\n");
scanf ("%s", postfix);
top=-1;
for (i=0; i<strlen(postfix) ;i++)
{
symbol = postfix[i];
if(isdigit(symbol))
 s[++top]=symbol - '0';
else
 {
 op2 = s[top--];
 op1 = s[top--];
 res = compute(symbol, op1, op2);
 s[++top] = res;
 }
}
res = s[top--];
printf("\nThe result is : %f\n", res);

}



b
#include<stdio.h>
#include<stdlib.h>
void TOH( int n, char A, char B, char C);
void main()
{
	int n;
	printf("Enter number of rings:\n");
	scanf("%d", &n);
	TOH(n, 'A', 'C', 'B');
}
void TOH( int n, char A, char B, char C)
{
	if(n==1)
		printf("Move from %c to %c\n",A, B);
	else
	{
		TOH(n-1, A, C, B);
		TOH(1, A, B, C);
		TOH(n-1, C, B, A);
	}
}

