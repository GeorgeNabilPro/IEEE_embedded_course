#include <string.h>
#include <math.h>
#include <stdio.h>

char func(int, double);
int * some_func();
int main() {
    double variable = 49.235;
    char arr[3] = {'a', 'b', 'c'};
    int * p = &variable ;   // get the address of the variable and soter it in a pointer p
                            // pointers have values of addresses in hexadecimal
    int pp = &variable ;

    int *null_p = NULL;     // null pointer will always point to address 0.
    void *void_p = NULL;    // void pointer, (a C generic pointer) stores an address of any variable. 
    int *wild_p;            // wild pointer, stores a random address (is not preffered to be used).
    int *const const_p = &variable;        // const pointer, can't be changed, but data can, must be initialized when it's defined.
    const int *p_const = &variable;        // pointer to const data, data can't be change via *p_const.
    const int *const_p_const = &variable;  // const pointer to const data, like the two above pointers comined.
    int *arr_p[3];          // array of pointers, you fill it with pointers to elements of an array to pass it to some function by refernce.   
    int **p2p = &p;         // pointer to pointer.            
    char (*func_p) (int, double) = func;   // pointer to function.    
    int *dangling_p = some_func();         // dangling pointer 
    // int near *p = &variable;            // near pointer, works with data in a 64kb segement of memeory,
    // int far *p = &variable;             // far pointer, 
                            // huge pointer, 
    
    *p = 45.12;             // accessing the value of the address of this pointer

    int arr[5]={1,2,3,4,5}; // 
    p = arr;                // equivalent to ptr == &a[0]
    char str[]="Hello";     //
    p = str; p++;
    printf("%c\n",*p);      // -> e

    // row major order: elements are stored row by row  (this is how c stores 3D arrays)
    // column major order: elements are stored column by column
    int arr2D[2][3] = { {1, 4, 2}, {3, 6, 8} };
    for (p = &arr2D[0][0]; p < &arr2D[2][3]; p++) {
        printf("%d\n", *p);   // this loop will print all elements of the arr2D row by row
    }
    printf("************\n");
    for (int i=0; i<3; i++) {
        printf("at address %d, we find value %d \n", arr2D+i, *(arr2D+i));
    }

    int arr1[3] = {1513, 1513, 1345};
    double arr2[3] = {123.1235,84567.0296,123.09881};
    char arr3[3] = {'a', 'y', 'z'};

    printf("************\n");
    // for (int i=0; i<3; i++) {
    //     // printf("%d\n", *(arr1 + i));
    //     // printf("%f\n", *(arr2 + i));
    //     // printf("%c\n", *(arr3 + i));
    //     printf("%d\n", (arr1 + i));
    //     printf("%d\n", (arr2 + i));
    //     printf("%d\n", (arr3 + i));
    //     printf("###");
    // }

}


char func(int a, double b) {
    return 'c';
}

int *some_func () {
    int x = 5;
    return &x;
}