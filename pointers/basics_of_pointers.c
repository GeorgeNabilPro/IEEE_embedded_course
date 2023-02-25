#include <string.h>
#include <math.h>
#include <stdio.h>

int main() {
    double variable = 49.235;
    int * p = &variable ;   // get the address of the variable and soter it in a pointer p
                            // pointers have values of addresses in hexadecimal
    int pp = &variable ;

    int * null_p = NULL;    // null pointer will always point to address 0
    void * void_p = NULL;   // void pointer, (a C generic pointer) stores an address of any variable. 
    int * wild_p;           // wild pointer, stores a random address (is not preffered to be used)
                            // dangling pointer, 
                            // complex pointer, 
                            // near pointer, 
                            // far pointer, 
                            // huge pointer, 
    *p = 45.12;            // accessing the value of the address of this pointer
}