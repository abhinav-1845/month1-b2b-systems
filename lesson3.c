#include <stdio.h>

int main(void){

    int units;
    float total_bill;
    
    printf("Enter compute units consumed:  ");
    scanf("%d", &units );

    if (units <=100){
        total_bill = units * 0.05;
        printf("Tier 1  (Base rate applied: $0.05/ unit)\n");
    }else if (units <=500){
        total_bill = units * 0.04; 
        printf(" Tier 2 (Volume discount applied: $0.04 / unit)\n");
    }else {
        total_bill = units * 0.03; 
        printf ("Tier 3 (Enterprise discount applied: 0.03)/ unit \n ");
    }

    printf("Total bill: $%.2f\n", total_bill);

    return 0; 



}