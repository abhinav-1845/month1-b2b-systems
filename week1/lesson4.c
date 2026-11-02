#include <stdio.h>

int main(void){
    int total_requests; 

    printf("How many incoming requests to process? ");
    scanf("%d", &total_requests);

    printf("\n --- Starting Processing Batch --- \n");
    for (int i=1; i <= total_requests; i++){

        printf("Processing request  #%d ... Done\n", i);   }

    printf("--- Batch Complete -- \n");
    return 0; 


}