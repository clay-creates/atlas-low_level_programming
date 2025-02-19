#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stddef.h>
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
void print_array(int *array, size_t start, size_t end);
int binary_search(int *array, size_t size, int value);

#endif /* SEARCH_ALGOS_H */
