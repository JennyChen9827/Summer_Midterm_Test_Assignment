#include <stdio.h>
#include <stdlib.h>

int sum_array(int arr[], int n){
    // implement this function!!
    return 0;
}


void count_characters() {

    
    FILE *inFile = fopen("input.txt", "r");
    FILE *outFile = fopen("output.txt", "w");

    if (inFile == NULL || outFile == NULL) {
        printf("Error opening file.\n");
        if (inFile) fclose(inFile);
        if (outFile) fclose(outFile);
        return;
    }

    int letters = 0, digits = 0, special = 0;
    char ch;

    while ((ch = fgetc(inFile)) != EOF) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            letters++;
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else if (ch != ' ' && ch != '\n') {
            special++;
        }
    }

    fprintf(outFile, "Letters: %d\n", letters);
    
    fprintf(outFile, "Digits: %d\n", digits);
    fprintf(outFile, "Special Characters: %d\n", special);
    
    printf( "Letters: %d\n", letters);
    printf( "Digits: %d\n", digits);
    printf( "Special Characters: %d\n", special);

    fclose(inFile);
    fclose(outFile);
}

int main() {
    
    int function;
    scanf("%d", &function); // get the function
    
    switch(function){
        case 0: // test only the array function
            int size;
            scanf("%d", &size);
            int* arr = (int*)malloc(size * sizeof(int);
            for(int i = 0; i< size; i++){
                scanf("%d", (arr + i));
            }
            printf("%d", sum_array(arr, size));
            break;
        case 1: // test only the count characters function
            count_characters();
            break;
        default:  // test all of the functions
            count_characters();
            int* arr = (int*)malloc(size * sizeof(int);
            for(int i = 0; i< size; i++){
                scanf("%d", (arr + i));
            };
            printf("%d", sum_array(arr, size));
            break;
    }
    return 0;  
        
}
