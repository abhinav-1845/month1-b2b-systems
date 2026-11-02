#include <stdio.h>
 
int main(void){
    int user_age;
    float target_revenue;
    char tier;


    user_age = 18;
    target_revenue = 1500;
    tier = 'A';

    printf("-- User Profile -- \n");
    printf("Age: %d years\n", user_age);
    printf("Montly target: $%.2f \n", target_revenue);
    printf("Account tier: %c\n", tier);

    return 0;
}