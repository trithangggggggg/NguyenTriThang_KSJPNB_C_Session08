#include <stdio.h>

int main(){
	
	int mang[4][4] = {
	{2, 4, 6, 8},
	{1,3, 5, 7},
	{2, 5, 8, 9},
	{5, 7, 2, 6}, 
	}; 
	int tong = 0;
	for ( int i = 0; i < 4; i++){
		printf("%d", mang[i][i]);
		tong = tong + mang[i][i]; 
	} 
	printf("Tong cac phan tu tren duong cheo trong ma tran la: %d", tong); 
	return 0; 
} 
