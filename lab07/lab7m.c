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

int main(void){
    int N, num;
    int exitCode = 1;
    int first = 1;
    int max, min, total = 0;
    double avg = 0.0;



    scanf("%d", &N);
    printf("first one is %d\n", N);
    if(N<=0){
        exitCode = 0;
    }
    for (size_t i = 0; i < N; i++)
    {
        scanf("%d", &num);
        if(first){
            max = num;
            min = num;
            first = 0;
        }
        if(num > max){
            max = num;
        }
        if(num < min){
            min = num;
        }
        total += num;
    }
    avg = total/(double)N;

    printTable(N, max, min, total, avg);

    return exitCode;
    
}