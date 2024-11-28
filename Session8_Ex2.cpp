#include <stdio.h>

int main() {
	int mang[] = {2, 6, 7, 75, 24, 64, 98};
	int phantu;
	
	printf("Moi nhap phan tu can tim: ");
	scanf("%d", &phantu);
	 
	for ( int i = 0; i < 6; i++){
		if ( mang[i] == phantu){
			printf("So %d nam tai vi tri thu %d trong mang \n", phantu, i + 1);
			return 0; 
		} 
	} 
	printf("So vua nhap khong ton tai"); 
    return 0;
}
