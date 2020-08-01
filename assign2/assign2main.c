// CPS393 Assign. 2
// Owen Goodwin (500909196)
// 11/14/19

#include "assign2funcs.c"

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
