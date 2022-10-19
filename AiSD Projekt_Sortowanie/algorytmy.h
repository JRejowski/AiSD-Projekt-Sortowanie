#ifndef ALGORYTMY_H
#define ALGORYTMY_H
#pragma warning (disable: 4996)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void fill_tab(int* tab,int n);

void swap(int* a, int* b);


void insert_sort(int* tab, int n);
void selection_sort(int* tab, int n);
void bubble_sort(int* tab, int n);

void quickSort(int* tab, int low, int high);
int shellSort(int* tab, int n);
void heapsort(int* tab, int n);

void build_max_heap(int* tab, int n);

void max_heapify(int* tab, int i, int n);

#endif // !ALGORYTMY_H
