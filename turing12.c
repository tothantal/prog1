// compile: gcc turing12.c -fopenmp

#include <stdio.h>

int main()
{
	#pragma omp parallel
	while(1){};
}
