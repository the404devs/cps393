#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void readVector(int *vector, int size){
    // printf("Expecting %d items.\n", size);
    for (size_t i = 0; i < size; i++)
    {
        if (scanf("%d", &vector[i])==0){
            fprintf(stderr, "Bad input.\n");
        }
        // printf("Vector[%d] is: %d\n", i, vector[i]);
        if (vector[i] == 0)
        {
            exit(0);
        }
        
        vector++;
    }
    vector -= size;
    printf("Vector: [");
    for (size_t i = 0; i < size; i++)
    {
        printf(" %d", vector[i]);
        vector++;
    }
    printf(" ]  ");
}

void normalizeVector(int *vector, int size){
    int sum;
    sum = 0;
    for (size_t i = 0; i < size; i++)
    {
        // printf("Vector[%d] is: %d\n", i, vector[i]);
        sum += (vector[i] * vector[i]);
        // printf("sum is: %d\n",sum);
        vector++;
    }
    vector -= size;
    double norm;
    norm = sqrt(sum);
    // printf("norm is: %lf\n",norm);
    double normalized[size];
    for (size_t i = 0; i < size; i++)
    {
        // printf("Dividing %d by %lf.\n", vector[i], norm);
        normalized[i] = vector[i] / norm;
        // printf("Norm[%d] is: %lf\n", i, normalized[i]);
        vector++;
    }
    vector -= size;
    printf("Normalized: [");
    for (size_t i = 0; i < size; i++)
    {
        printf(" %lf", normalized[i]);
        vector++;
    }
    printf(" ]\n");
}

int main(void){

    int size;
    printf("Input values:\n");
    scanf("%d", &size);
    if (size == 0)
    {
        exit(0);
    }
    
    int* vector[size];
    readVector(vector, size);
    normalizeVector(vector, size);
    exit(0);    
}
