# Needle in the Haystack with C

## What is it?
An exercise in using sort and search algorithms. 

One program, `generate.c`, generates `n` number of pseudorandom numbers (with an optional seed for a `srand48()` function). *Usage:* `generate n [s]`


The other program, `find.c`, first sorts the random numbers with bubble sort. Then I use binary search to search for the given "needle" provided in the argument for `./find`. *Usage:* `./find needle`

If the "needle" is found, then the program prints `Found needle in haystack!`

If the "needle isn't found, then the program prints `Didn't find needle in haystack.`

## How was it built?
The whole program is written in C. It also has a makefile.

The program was built for Harvard's CS50 course. The course provided a codebase with missing functionality (see below). 

## What were the parameters of the problem?
*Paraphrased from the problem set's prompt*:

"Implement a program that finds a number among numbers, per the below."
`$ ./generate 1000 | ./find 42
Didn't find needle in haystack.`

"Complete the implementation of `find` by completing the implementation of `search` and `sort` in `helpers.c`"

### `search`
* Your implementation must return `false` immediately if `n` is non-positive.
* Your implementation must return `true` if `value` is in `values` and `false` if `value` is not in `values`.
* The running time of your implementation must be in O(log n).
* You may not alter the function’s declaration. Its prototype must remain:
`bool search(int value, int values[], int n);`

### `sort`
* Your implemenation must sort, from smallest to largest, the array of numbers that it’s passed.
* The running time of your implementation must be in O(n^2), where n is the array’s size.
* You may not alter the function’s declaration. Its prototype must remain:
`void sort(int values[], int n);`

See more in the [official docs](https://docs.cs50.net/problems/find/less/find.html).
