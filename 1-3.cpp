#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
#include <cstdlib>

using namespace std;

int main(){


    int l = 0;
    int w = 0;
    int d = 0;

    char R1[20];
    char R2[20];
    char R3[20];

    printf("R1 value - ");
    scanf("%20s", R1);
//    scanf("%2s", R2);
//    scanf("%2s", R3);

    printf("R1 is: '%s' \n", R1);
//    printf("R1[0] is '%d' \n", R1[0]);


    char * pch;

    pch = strtok(R1, ":");

    while (pch != NULL)
    {
        printf("Num is : %s\n", pch);

        int i = atoi(pch);
        printf("Num-int is '%d' \n", i);

        pch = strtok(NULL, ":");
    }

//    int i = atoi(R1[0]);
//    printf("R1[0] int is '%d' \n", i);



//    int a1 = R1[0];
//    int b1 = R1[2];
//    int a2 = R2[0];
//    int b2 = R2[2];
//    int a3 = R3[0];
//    int b3 = R3[2];
//
//    if(a1 > b1){
//        w++;
//    }else if(a1 < b1){
//        l++;
//    }else {
//        d++;
//    }
//
//
//    if(a2 > b2){
//        w++2;
//    }else if(a2 < b2){
//        l++;
//    }else {
//        d++;
//    }
//
//
//    if(a3 > b3){
//        w++;
//    }else if(a3 < b3){
//        l++;
//    }else {
//        d++;
//    }
//
//
//    printf(" Team won %d games. %n", w);
//    printf(" Team lost %d games. %n", l);
//    printf(" Drawn games: %d. %n", d);
}
