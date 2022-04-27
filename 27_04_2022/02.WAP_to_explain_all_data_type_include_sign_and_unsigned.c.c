#include <stdio.h>
#include <float.h>

void int_type(void)
{
    signed int a = 2147483650; // signed int range from -2,147,483,648 to 2,147,483,647
    unsigned int b = 4294967297; //unsigned int range from 0 to 4294967296
    
    printf("int type : %d\n",a+b); // (-2147483646) + 1 = -2147483645
    /** a = 2147483650;
     * 2147483648 = (-2147483648);  2147483649 = (-2147483647); 2147483650 = (-2147483646);
     * Now value of a = -2147483646
     *
     * b = 4294967296; 4294967296 = 0; 4294967297 = 1;
     * Now value of b = 1; */
     return ;
}

void short_int_type(void)
{
    signed short int ssa = 32770; //signed short int range from -32,768 to 32,767
    unsigned short int usa = 65540 ;//unsigned short int range from 0 to 65535
    printf("Short int type : %d\n",ssa+usa);
    return ;
}

void long_int_type()
{
    signed long int sli = 9223372036854775807; //signed long int range from -9223372036854775808 to 9223372036854775807
    unsigned long int uli = 18446744073709551615 ;//unsigned long int range from 0 to 18446744073709551615
    printf("long int type : %ld\n",sli+uli);//9223372036854775807 + 0 = 9223372036854775807
    /**
     * uli = 18446744073709551615; 18446744073709551615 = 0;*/
     return ;
}

void char_type(void)
{
	unsigned char x=257; // unsigned char from range 0 to 255
	char y=140;  // signed char range from -128 to 127
	
	printf("char type : %d\n",x+y); // -116+1 = -115
	/*  x = 128; 128 = (-128) ; 129 = (-127); .... 140 = (-116)
	 *  y = 256; 256 = 0 ; 257 = 1*/
	 return ;
}

void float_double_type()
{
    printf("FLT_MAX     :   %g\n",  FLT_MAX);
    printf("FLT_MIN     :   %g\n",  FLT_MIN);
    printf("-FLT_MAX    :   %g\n",  -FLT_MAX);
    printf("-FLT_MIN    :   %g\n",  -FLT_MIN);
    printf("DBL_MAX     :   %g\n",  DBL_MAX);
    printf("DBL_MIN     :   %g\n",  DBL_MIN);
    printf("-DBL_MAX     :  %g\n",  -DBL_MAX);
    return ;
}

int main (void)
{
    char_type();
    int_type();
    short_int_type();
    long_int_type();
    float_double_type();
    return 0;
}