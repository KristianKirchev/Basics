#include <stdio.h>

//Да се намери сумйата на n числа, но само на простите

int main(){

    int n = 0;

    do {
        printf("n = ");
        scanf("%d", &n);
    } while(n <= 0);

    printf("1\n");
    printf("n:%d\n", n);

    int sum = 0;

    for (int c = 1; c <= n; c++) {
        int a = 0;
        while(a < 2) {
            printf("a%d = ", c);
            scanf("%d", &a);
        }

        int i = 1;

        do{
        } while ((a % ++i) != 0);

        if(i == a){
            sum += a;
        }
    }

    printf("Sum = %d", sum);
}
