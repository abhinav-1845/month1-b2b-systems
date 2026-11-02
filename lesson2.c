#include <stdio.h>

int main(void){

    int user_age;
    float monthly_budget;


    printf("Enther you age:");
    scanf("%d", &user_age);

    printf("Enter you monthly budget: ");
    scanf("%f", &monthly_budget);


    printf("\n -- Data Captured-- \n");
    printf("Age confirmed: %d\n", user_age);
    printf("Monthly buget set to $%.2f \n", monthly_budget);

    return 0;



}