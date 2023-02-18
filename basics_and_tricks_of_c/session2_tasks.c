#include <stdio.h>
#include <stdlib.h> // operates on integers
#include <math.h> // operates on doubles

int reverseNum(int);
int countDigits(double);

int main(void) {
	int a=423;//, b=3, c=2;
	printf("reversed number of %d is %d \n", a, reverseNum(a));
	printf("number of digits in 2345.24 are %d \n", countDigits(2345.24));
}


int reverseNum(int num) {
	int temp = 0;
	int digits = countDigits(num);
	for (int i = 1; i <= digits; i++) {
		temp += (int)pow(10, digits - i + 1) * num % (int)pow(10, i);
	}
	return temp;
}

int countDigits(double decimal) {
	int digits = 0;
	int left = abs((int) decimal);
	while (left > 0) {
		left /= 10;
		digits++;
	}
	return digits;
}
