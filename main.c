#include <stdio.h>
#include <stdlib.h>

int sum_array(int arr[], int n){
    // implement this function!!
    return 0;
}


void count_characters() {
// implement
  /*  
     */
}
// don't edit this
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
