#include "algorytmy.h"

void fill_tab(int* tab,int n)
{
	for (int i = 0; i < n; i++)
	{
		tab[i] = -100 + rand() %201;
	}
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void quickSort(int* tab, int low, int high)
{
	int i = low;
	int j = high;
	int s, pom;
	s = tab[(i + j) / 2];
	do
	{
		while (tab[i] < s) i++;
		while (tab[j] > s) j--;
		if (i <= j)
		{
			pom = tab[i];
			tab[i] = tab[j];
			tab[j] = pom;
			i++;
			j--;
		}
	}
	while (i <= j);
	if (j > low) quickSort (tab, low, j);
	if (i < high) quickSort (tab, i, high);

}
	



void max_heapify(int* tab, int i, int n)
{
	int largest=i;
	int l = 2 * i+1 ;
	int r = 2 * i + 2;
	if (l < n && tab[l] > tab[i])
	{
		largest = l;
	}

	if (r < n && tab[r] > tab[largest])
		largest = r;
	

	if (largest != i)
	{
		swap(&tab[i], &tab[largest]);
		max_heapify(tab, largest, n);
	}
}

void build_max_heap(int* tab, int n)
{
	
	for (int i = (n / 2-1); i >= 0; i--)
		max_heapify(tab, i, n);
}

void heapsort(int* tab, int n)
{
	build_max_heap(tab, n);
	for (int i = n-1; i >= 0; i--)
	{
		swap(&tab[0], &tab[i]);

		max_heapify(tab, 0, i);
	}
}


void insert_sort(int* tab, int n)
{
	int i=0, x=0, j=0;
	for (i = 1; i < n; i++)
	{
		x = tab[i];
		j = i - 1;
		while (tab[j] > x && j >= 0)
		{
			tab[j + 1] = tab[j]; 
			j--;
		}
		tab[j + 1] = x;
	}
}

void selection_sort(int* tab, int n)
{
	int i = 0, j = 0, x = 0, buffer = 0;
	for (i = 0; i < (n - 1); i++)
	{
		x = i;

		for (j = i + 1; j < n; j++)
		{
			if (tab[x] > tab[j])
				x = j;
		}
		if (x!= i)
		{
			buffer = tab[i];
			tab[i] = tab[x];
			tab[x] = buffer;
		}
	}
}

void bubble_sort(int* tab, int n)
{
	int i = 0, j = 0, buffer = 0, x = n - 1;
	
	for(j=0;j<x;j++)
	{ 
		for (i = 0; i < x; i++)
		{
			if (tab[i] > tab[i + 1])
			{
				buffer = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = buffer;
				
			}
		}
	}
}


int shellSort(int*tab, int n)
{
	for (int gap = n / 2; gap > 0; gap /= 2)
	{
		for (int i = gap; i < n; i += 1)
		{
			int temp = tab[i];

			int j;
			for (j = i; j >= gap && tab[j - gap] > temp; j -= gap)
				tab[j] = tab[j - gap];
				tab[j] = temp;
		}
	}
	return 0;
}



