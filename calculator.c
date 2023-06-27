#include<cs50.h>
#include<stdio.h>

int Division(int x, char c, int y);
int Addition(int x, char c, int y);
int Subtraction(int x, char c, int y);
int Mulptication(int x, char c, int y);
int main(void) 
{
        printf("***Misha's Calculator***\n");
        int a, b;

        char c;

        a = get_int("Enter Number:\n");

        c = get_char("Enter Operator:\n");

        b = get_int("Enter Number:\n");
         int answer = 0;
        if(c == '+') {
         answer = Addition(a,c,b);
	printf("Answer:%i\n", answer);
        }
        else if(c == '-') {
        answer = Subtraction(a,c,b);
	printf("Answer:%i\n", answer);
        }
        else if(c == '/') {
        answer = Division(a,c,b);
	printf("Answer:%i\n", answer);
        }
        else if(c == '*') {
        answer = Mulptication(a,c,b);
	printf("Answer:%i\n", answer);
        }

}
int Mulptication(int x, char c, int y)
{
        if(c == '*')
        {
        return x * y;
        }
}

int Subtraction(int x, char c, int y)
{

        if(c == '-')
        {
        return x - y;
        }
}

int Addition(int x, char c, int y)
{
        if(c == '+')
        {
        return x + y;
        }
 

}

int Division(int x, char c, int y)
{
if(c == '/')
{
return x / y;
}
}
