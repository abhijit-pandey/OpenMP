#include<stdio.h>
#include <omp.h>

int main(int argc, char const *argv[])
{
	#pragma omp parallel  //Compiler Directive to make this block parallel
	{
		// USE "export OMP_NUM_THREADS = 4" to make threads 4
		int id = omp_get_thread_num();
		printf("Hello World!! Called from %d \n", id);
	}
	return 0;
}