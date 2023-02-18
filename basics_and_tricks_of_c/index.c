#include <stdio.h>
// .h    means that this is an header file that is declartive not executable
// .o    for executable modules
// .lib  a collection of .o files
// .a    a .lib but for mac

const int condition = 0;
const int condition1 = 1;
const int condition2 = 1;
int expression = 3;
const int value1 = 2;
const int value2 = 3;


int main (int argc,char* argv[]) {
    // << 1 >>
    // syntax:   type_qualifre data_type variable_name = value;
    // syntax:   storage_spacifire data_type variable_name = value;

    // type_qualifres are: volatile and const
    // storage_spacifire are: extern, auto, static and register

    // 1 - any variable name can not start with a number
    // 2 - any variable name can only include, letters numbers and underscores

    // unsigned makes the all the bits of the number represent only a positive number. int, short and long are signed by default
    // char                     –127 to 127
    // int      	            –32,767 to 32,767
    // float  	                1E–37 to 1E+37 with six digits of precision
    // double                  	1E–37 to 1E+37 with ten digits of precision
    // long double              1E–37 to 1E+37 with ten digits of precision
    // long int                 –2,147,483,647 to 2,147,483,647
    // short int 	            –32,767 to 32,767
    // unsigned short int      	0 to 65,535
    // signed short int        	–32,767 to 32,767
    // long long int           	–(2power(63) –1) to 2(power)63 –1
    // signed long int         	–2,147,483,647 to 2,147,483,647
    // unsigned long int       	0 to 4,294,967,295
    // unsigned long long int   2(power)64 –1

    const int ANY = 123;  // constants
    int var = 45;
    var += 5;  			  // augmented assignment
    int b = -439;  		  // 16 bits or 32 bits
    float c = -43.23;
    double e = 3264782.2347832;
    char f = 'g';    	  // we use single quotes with chars
    unsigned char A = 5 , B = 20 ;  // we use signed and unsigned keywords to determine more the range of the variable

    // << 2 >>
    printf("hello, world %i %c",var, c);  // format printing
    // format spacifires
    // %i or %d for int
    // %s for       string
    // %c for       char
    // %f for       float
    // %lf for      double
    // %u for 		unsigned int
    // %ld for 		lnog int
    // %lu for 		unsigned long int or long unsigned int
    // %lld for 	long long int
    // %llu for 	unsigned long long int
    // %x for 		hexadicemal. important for printing pointers
    float scanned ;
    scanf("%f",&scanned);  // the ampersand operator refers ot a "pointer"

    // << 3 >>
    // the arithmetic operators in c are ( + , - , / , % , * , ++ , -- )
    int x = 23;
    ++x;
    x++;
    // logical operators are (&& , || , !)
    int res = !(c <= e);  // booleans are integers 0 or 1 in c (there is no bool type in c)
    printf("%d",res);
    // bit-wise operators are (a & b ,a | b, a ^ b) and (~a , a << 1 , a >> 1)

    // << 4 >>
    if (condition1) {
        // block of code to be executed if condition1 is true
    } else if (condition2) {
        // block of code to be executed if the condition1 is false and condition2 is true
    } else {
        // block of code to be executed if the condition1 is false and condition2 is false
    }

    switch (expression)
    {
    case 2 :   // values of any case must be constants
        break;
    case 3:
        printf("case statement");
    default:
        break;
    }

    // goto statements :
    int i;
    for(i=0;i<10;i++)  // you can write the variable of the loop like this
    {
        if(i==5)
        {
            printf("\nWe are using goto statement when i = 5");
            goto HAI;
        }
        printf("%d ",i);
    }

    HAI : printf("\nNow, we are inside label name \"hai\" \n");

    // << 6 >>
    int numbers[] = {-234,343,3,97,0};   // arrays in c
    char str[] = "this is a string";   // strings in c

    enum Monthes {jan = 0, feb, march, apr};
    enum Monthes current = march; // current = 2

    // << 8 >>
    // while, for and do while loops
    while (condition) {
        // code block to be executed
    }

    do {
        // code block to be executed
    }
    while (condition);

    for (int i = 0 ; i < 10 ; i++)
    {
        // code block to be executed
    }
}

















