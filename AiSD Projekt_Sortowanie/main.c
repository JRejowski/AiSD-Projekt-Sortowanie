#include <stdio.h>
#include "algorytmy.h"


int main()
{
	FILE* fp = fopen("dane.txt", "r"); // Dla danych posortowanych
	FILE* fq = fopen("dane1.txt", "r"); //Dla danych posortowanych odwrotnie
	int size;
	printf("Podaj rozmiar tablicy: ");
	scanf("%d", &size);

	int j = size - 1;

	int* t = malloc(sizeof(int) * size); // alokacja pami�ci
	fill_tab(t, size); //Tej funkcji u�ywa�em do wype�niania tablicy liczbami losowymi

	//for (int i = 0; i < size; i++)
	//{
	//	fscanf(fp, "%4d",&t[i]); //Pobieranie danych z wybranego pliku
	//	
	//}

	time_t begin, end; //Zmienne potrzebne do ustalenia czasu wykonywania algorytmu
	time(&begin);
								//Poni�ej znajduj� si� wywo�ania poszczeg�lnch funkcji, odkomentowywane w zale�no�ci od tego kt�rej chcia�em u�y�
	//insert_sort(t, size);
	//selection_sort(t, size);
	//bubble_sort(t, size);
	//quickSort(t, 0, size-1);
	//heapsort(t, size);
	//shellSort(t, size);

	time(&end);
	time_t elapsed = end - begin; //Oblicza czas wykonania

	
	printf("TIME: %lld \n", elapsed); // Wy�wietla czas wykonania


	for (int i = 0; i < size; i++)
	{
		printf("  %d", t[i]);
	}

	fclose(fp); //Zamkni�cie obu plik�w
	fclose(fq);


	free(t); //Zwolnienie miejsca zajmowanego przez tablic�


	return 0;
}
