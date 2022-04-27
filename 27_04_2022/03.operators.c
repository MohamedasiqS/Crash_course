/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void arithmetic()
{
    int a=200,b=10;
    printf("***Arithmetic operator***\n");
	printf("ADD:%d\n",a+b);
	printf("SUB:%d\n",a-b);
	printf("MULTIPLY :%d\n",a*b);
	printf("Divide :%d\n",a/b);
	printf("MODULOS :%d\n",a%b);
	return ;
}

void relational()
{
    int a= 100,b=90;
    printf("***Relational operator***\n");
    printf("For %d == %d : The output is: %d \n", a, b, a == b); 
    printf("For %d != %d : The output is: %d \n", a, b, a != b);
    printf("For %d > %d : The output is: %d \n", a, b, a > b);   
    printf("For %d < %d : The output is: %d \n", a, b, a < b);  
    printf("For %d >= %d : The output is: %d \n", a, b, a >= b);
    printf("For %d <= %d : The output is: %d \n", a, b, a <= b);
    return ;
}

void logical()
{
    int a = 5, b = 20, c ;
   printf("***Logical operator***\n");
   if ( a && b ) 
         printf("Logical AND operartion executed\n" );
   
   if ( a || b ) 
      printf("Logical OR operartion executed\n" );
      
   if ( !(a && b) ) 
      printf("Logical not operartion executed\n" );
    return ;
}

void assignment()
{
    int a = 20,c = 100;
    c =  a;
    printf("***Assignment operator***\n");
    printf(" Assignment Operator Value = %d\n", c );

    c +=  a;
    printf("Using += Operator %d\n", c );
    c -=  a;
    printf("Using -= Operator %d\n", c );
    c *=  a;
    printf("Using *= Operator %d\n", c );
    c /=  a;
    printf("Using /= Operator %d\n", c );
    c %=  a;
    printf("Using %%= Operator %d\n", c );
    return ;
}

void bitwise()
{
    int c = 128,d = 5 ;
    printf("***Bitwise operator***\n");
    c &=  3;
    printf("Using bitwise AND Operator %d\n", c );

    c ^=  4;
    printf("Using bitwise XOR Operator = %d\n", c );

    c |=  5;
    printf("Using bitwise OR Operator %d\n", c );
    
    c <<=  1;
    printf("Using left Operator %d\n", c );

    c >>=  2;
    printf("Using right shift Operator %d\n", c );
    
    c = ~d;
    printf("Using 1's complement operator %d\n",c);
    return ;
}

void conditional()
{
	int i=10;
	printf("***Conditional operator***\n");
	i=(10<10)?(10>=10)?(10<=10)?1:2:3:4;
	printf("Conditional Operator : %d\n",i);
	return ;
}

void inc_dec()
{
    int i=5;
	i=i++ - --i + ++i - i--;
	printf("%d\n",i);
	return ;
}
int main()
{
    int comma_var = (10,20,30);
    arithmetic();
    relational();
    logical();
    assignment();
    conditional();
    inc_dec();
    printf("Comma operator :%d\n",comma_var);
    printf("sizeof operator : %ld\n",sizeof(5.66));
    return 0;
}
