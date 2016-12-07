# build the following:

https://ftp.gnu.org/gnu/autoconf/autoconf-2.65.tar.gz<br>
https://ftp.gnu.org/gnu/automake/automake-1.14.tar.gz<br>
https://www.open-mpi.org/software/ompi/v2.0/downloads/openmpi-2.0.1.tar.bz2<br>
https://www.mpich.org/static/downloads/3.1/mpich-3.1.tar.gz

# build openmpi-2.0.1
./confgure --with-cuda=/path-to/cuda-version

# How to run

$ nvcc -c kernel.cu<br>
$ mpicc -o mpicuda mpi.c kernel.o -L /path-to/cuda-7.5/lib64 -I /path-to/cuda-7.5/include -lcudart<br>
$ mpirun -l -np 10 ./mpicuda<br>
[1] 3 3 3 3 3 3<br>
[3] 3 3 3 3 3 3<br>
[6] 3 3 3 3 3 3<br>
[7] 3 3 3 3 3 3<br>
[8] 3 3 3 3 3 3<br>
[9] 3 3 3 3 3 3<br>
[4] 3 3 3 3 3 3<br>
[5] 3 3 3 3 3 3<br>
[0] 3 3 3 3 3 3<br>
[2] 3 [2] 3 [2] 3 [2] 3 [2] 3 [2] 3 [2]
