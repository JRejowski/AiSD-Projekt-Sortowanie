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

	int* t = malloc(sizeof(int) * size); // alokacja pamiêci
	fill_tab(t, size); //Tej funkcji u¿ywa³em do wype³niania tablicy liczbami losowymi

	//for (int i = 0; i < size; i++)
	//{
	//	fscanf(fp, "%4d",&t[i]); //Pobieranie danych z wybranego pliku
	//	
	//}

	time_t begin, end; //Zmienne potrzebne do ustalenia czasu wykonywania algorytmu
	time(&begin);
								//Poni¿ej znajduj¹ siê wywo³ania poszczególnch funkcji, odkomentowywane w zale¿noœci od tego której chcia³em u¿yæ
	//insert_sort(t, size);
	//selection_sort(t, size);
	//bubble_sort(t, size);
	//quickSort(t, 0, size-1);
	//heapsort(t, size);
	//shellSort(t, size);

	time(&end);
	time_t elapsed = end - begin; //Oblicza czas wykonania

	
	printf("TIME: %lld \n", elapsed); // Wyœwietla czas wykonania


	for (int i = 0; i < size; i++)
	{
		printf("  %d", t[i]);
	}

	fclose(fp); //Zamkniêcie obu plików
	fclose(fq);


	free(t); //Zwolnienie miejsca zajmowanego przez tablicê


	return 0;
}
