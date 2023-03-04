#include <stdio.h>
#include <string.h>

struct structure1 {
    int num1;
    char ch1;
    long long int num2;
    char str[6];

    double *ptr[];
};



int main() {
    struct structure1 s1;
    double arr[2] = {3.161436, 145.0195723};
    s1.num1 = 4;
    s1.ch1 = 'a';
    s1.num2 = 168635198;
    s1.ptr[0] = &arr[0];
    s1.ptr[1] = &arr[1];
    // you can't do that: s1.str = "george" instead:
    strcpy(s1.str, "george");
    printf("%s", s1.str);

    return 0;
}