#include <stdio.h>
#include <string.h>

// typedef keyword
typedef long long int Int64;

// struct keyword
struct structure1 {
    int num1;
    char ch1;
    long long int num2;
    char str[7];

    double *ptr[];
};

struct structure2 {
    int num1;
    char ch1;
};
struct complexS {
    struct structure2 ss1;
    int num2;
};

// typedef with struct
typedef struct Structure3 {
    int num1;
    double num2;
    long double num3;
} structure3;

// union keyword
union bigNum {
    long long int A;
    long int B;
    short int C;
    char D;
};

// enum keyword
enum days {
    sat,
    sun,
    mon,
    tue,
    wed,
    thu,
    fri,
};

int main() {
    struct structure1 s1;
    struct structure1 s2;
    double arr[2] = {3.161436, 145.0195723};
    s1.num1 = 4;
    s1.ch1 = 'a';
    s1.num2 = 168635198;
    s1.ptr[0] = &arr[0];
    s1.ptr[1] = &arr[1];
    // you can't do that: s1.str = "george" instead:
    strcpy(s1.str, "george");

    // copying structures:
    s2 = s1;

    // assigning values to structure at declaration
    struct structure1 s3 = {13, 'B', 1431658, {&arr[0], &arr[1]}, "george"};

    printf("%s", s3.str);
    printf("%p", s3.ptr[1]);

    // multiple declaration;
    struct structure1 s4, s5, s6;

    // struct pointer operator
    struct structure1 *sptr;
    sptr = &s4;

    // using typedef with struct
    structure3 sss1, sss2;

    // enum structure:
    enum days day=thu; // -> day = 5

    return 0;
}