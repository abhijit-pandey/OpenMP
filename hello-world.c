#include<stdio.h>
#include <omp.h>

int main(int argc, char const *argv[])
{
	#pragma omp parallel  //Compiler Directive to make this block parallel
	{
		// USE "export OMP_NUM_THREADS = 4" to make threads 4
		printf("Hello World!!\n");
	}
	return 0;
}