#include <stdio.h>
#include <stdlib.h>

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

    count_characters();
    return 0;
}