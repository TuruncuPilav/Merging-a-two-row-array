/*
İki sıralanmış dizi verildiğinde, onları sıralanmış bir şekilde
birleştiren C kodunu yazınız.
 */

#include <stdio.h>
#include <string.h>

void sirala(int dizi[], int uzunluk) {

	int swap;

	for (int i = 0; i < uzunluk; i++)
	{
		for (int j = 0; j < uzunluk-1; j++)
		{
			if (dizi[j] > dizi[j + 1]) {
				swap = dizi[j];
				dizi[j] = dizi[j + 1];
				dizi[j + 1] = swap;
			}
		}
	}

	for (int k = 0; k < uzunluk; k++)
	{
		printf("%d ", dizi[k]);
	}

}


void birlestir(int dizi1[], int dizi2[], int uzunluk1, int uzunluk2) {
	int dizi3[99] = { 0 };
	int i, j;

	for (i = 0; i < uzunluk1; i++) //dizi1'i aktarma dongusu
	{
		dizi3[i] = dizi1[i];
	}
	for ( j = 0; j < uzunluk2; j++) //dizi2'yi aktarma dongusu
	{
		dizi3[i] = dizi2[j];
		i++;
	}

	sirala(dizi3, uzunluk1 + uzunluk2);
}

int main() {
	int dizi1[] = { 1,3,4,5 };
	int dizi2[] = { 2,4,6,8 };	
	int uzunluk1 = sizeof(dizi1) / sizeof(dizi1[0]);
	int uzunluk2 = sizeof(dizi2) / sizeof(dizi2[0]);

	birlestir(dizi1, dizi2, uzunluk1, uzunluk2);
}