#include <stdio.h>
#include <stdint.h>

int main(int argc, char** argv){  
	printf("sizeof char: %llu\n", sizeof(char)); // char
	printf("sizeof short: %llu\n", sizeof(short)); //short
	printf("sizeof int: %llu\n", sizeof(int)); // int
	printf("sizeof long: %llu\n", sizeof(long)); // long
	printf("sizeof long long: %llu\n", sizeof(long long)); // long long
	printf("sizeof float: %llu\n", sizeof(float)); // float
	printf("sizeof double: %llu\n", sizeof(double)); // double
	printf("sizeof long double: %llu\n", sizeof(long double)); // long double
	return 0;
}
