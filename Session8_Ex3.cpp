
#include <stdio.h>

int main() {
    int n;

    printf("Nhap so nguyen duong: ");
    scanf("%d", &n);

    if (n > 0) {
        int ma_tran[n][n];
        printf("Ma tran %d x %d :\n", n, n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d ",n);
            }
            printf("\n");
        }
    } else {
        printf("So nhap vao khong hop le ");
    }

    return 0;
}


