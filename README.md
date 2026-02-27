# cmpe310-lab4

## Sum Integers In File
To see the results of this program:

First compile all the files:
```
gcc -c sum_array.s -o sum_array.o
gcc -c main.c -o main.o
gcc main.o sum_array.o -o driver
```

Next, run the program with the sampled data file:
```
./driver data.txt
```