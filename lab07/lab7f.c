#include <stdio.h>

void printTable (int N, int max, int min, int total, double avg ) {

    printf("--------------------------------------------\n");
    printf("Number Processed:\t%d\n", N);
    if ( N > 0 ) {
        printf("Maximum:\t\t%d\n", max); 
        printf("Minimum:\t\t%d\n", min); 
        printf("Total:\t\t\t%d\n", total); 
        printf("Average:\t\t%lf\n", avg); 
    }
    printf("--------------------------------------------\n");

}