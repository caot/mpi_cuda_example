/*
 https://devtalk.nvidia.com/default/topic/367748/mpi-and-cuda-mixed-programming-general-cuda-programming/

 $ module list
 Currently Loaded Modulefiles:
   1) cuda/7.5    2) gcc/4.9.4
 $ nvcc -c kernel.cu
 $ mpicc -o mpicuda mpi.c kernel.o -L /share/apps/cuda-7.5/lib64 -I /share/apps/cuda-7.5/include -lcudart
 $ mpirun -l -np 10 ./mpicuda
 [1] 3 3 3 3 3 3
 [3] 3 3 3 3 3 3
 [6] 3 3 3 3 3 3
 [7] 3 3 3 3 3 3
 [8] 3 3 3 3 3 3
 [9] 3 3 3 3 3 3
 [4] 3 3 3 3 3 3
 [5] 3 3 3 3 3 3
 [0] 3 3 3 3 3 3
 [2] 3 [2] 3 [2] 3 [2] 3 [2] 3 [2] 3 [2]

 */

#include <mpi.h>

void run_kernel();

int main(int argc, char *argv[]) {
	int rank, size;

	MPI_Init(&argc, &argv); /* starts MPI */
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);   /* get current process id */
	MPI_Comm_size(MPI_COMM_WORLD, &size);    /* get number of processes */

	run_kernel();

	MPI_Finalize();

	return 0;
}
