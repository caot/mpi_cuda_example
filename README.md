# build the following:

https://ftp.gnu.org/gnu/autoconf/autoconf-2.65.tar.gz
https://ftp.gnu.org/gnu/automake/automake-1.14.tar.gz
https://www.open-mpi.org/software/ompi/v2.0/downloads/openmpi-2.0.1.tar.bz2
https://www.mpich.org/static/downloads/3.1/mpich-3.1.tar.gz

# openmpi-2.0.1 build
./confgure --with-cuda=/path-to/cuda-version

# How to run

$ nvcc -c kernel.cu
$ mpicc -o mpicuda mpi.c kernel.o -L /path-to/cuda-7.5/lib64 -I /path-to/cuda-7.5/include -lcudart
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
