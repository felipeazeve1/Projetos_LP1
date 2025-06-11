#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
	// char, short, int, long e long long
	printf("signed char: %zu bytes, min = %d, max = %d\n", sizeof(signed char), SCHAR_MIN, SCHAR_MAX);
	printf("unsigned char: %zu bytes, min = 0, max = %u\n\n", sizeof(unsigned char), UCHAR_MAX);
	printf("signed short: %zu bytes, min = %d, max = %d\n", sizeof(signed short), SHRT_MIN, SHRT_MAX);
	printf("unsigned short: %zu bytes, min = 0, max = %u\n\n", sizeof(unsigned short), USHRT_MAX);
	printf("signed int: %zu bytes, min = %d, max = %d\n", sizeof(signed int), INT_MIN, INT_MAX);
	printf("unsigned int: %zu bytes, min = 0, max = %u\n\n", sizeof(unsigned int), UINT_MAX);
	printf("signed long: %zu bytes, min = %ld, max = %ld\n", sizeof(signed long), LONG_MIN, LONG_MAX);
	printf("unsigned long: %zu bytes, min = 0, max = %lu\n\n", sizeof(unsigned long), ULONG_MAX);
	printf("signed long long: %zu bytes, min = %lld, max = %lld\n", sizeof(signed long long), LLONG_MIN, LLONG_MAX);
	printf("unsigned long long: %zu bytes, min = 0, max = %llu\n\n", sizeof(unsigned long long), ULLONG_MAX);

	// float, double e long double
	printf("float: %zu bytes, min = %e, max = %e\n\n", sizeof(float), FLT_MIN, FLT_MAX);
	printf("double: %zu bytes, min = %e, max = %e\n\n", sizeof(double), DBL_MIN, DBL_MAX);
	printf("long double: %zu bytes, min = %Le, max = %Le\n", sizeof(long double), LDBL_MIN, LDBL_MAX);
	
	/*Não tinha entendido a atividade direito e nem tava achando como fazia, fiz uma pesquisa na internet e encontrei essa forma
	de aparecer o tamanho, min e max de cada tipos basicos e os modificadores! 
	*/

	return 0;
}