#include <stdio.h>
#include <string.h>
#define MAX 100


void squeeze(char c, char S[], char out[]){
    int i, j = 0;
    int len = strlen(S);
    for (i = 0; i < len; i++)
    {
        if (S[i]!=c)
        {
            out[j] = S[i];
            j++;
        }
        
    }
    
}

void printBackwards(char out[]){
    int i = 0;
    int len = strlen(out);
    

    for (i = len-1; i > -1; i--)
    {
        putchar(out[i]);
    }
    printf("\n");
}

int main(void){
    char c;
    char S[MAX];
    char out[MAX];


    printf("Enter a character:");
    c = getchar();
    getchar();
    printf("Enter a string (max %d chars):", MAX-1);
    gets(S);
    squeeze(c, S, out);
    printf("%s\n", out);
    printBackwards(out);

    return 255;
}