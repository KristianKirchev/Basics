#include <stdio.h>

//�� �� ������ ������ �� n ���������� �����

int main(){

    int n = 0;
    do{
        printf("N: ");
        scanf("%d", &n);
    }while(n < 1);
    int a;
    int i = 1;
    int sum = 0;

    printf("Nums: ");
    for(; i <= n; i++){
        scanf("%d", &a);
        sum = sum + a;
    }

    printf("Sum = %d", sum);
}
