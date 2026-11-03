#include <stdio.h>

// 1. Function Prototype (Tells C this function exists before main uses it)
float calculate_discount(float amount, int is_enterprise);

int main(void) {
    float order_total = 1200.00;
    int enterprise_client = 1; // 1 = true, 0 = false

    // Calling the function
    float discount = calculate_discount(order_total, enterprise_client);
    float final_price = order_total - discount;

    printf("Original Total: $%.2f\n", order_total);
    printf("Discount Applied: $%.2f\n", discount);
    printf("Final Price: $%.2f\n", final_price);

    return 0;
}

// 2. Function Definition (The actual implementation)
float calculate_discount(float amount, int is_enterprise) {
    if (is_enterprise == 1 && amount > 1000.00) {
        return amount * 0.15; // 15% discount
    } else if (amount > 500.00) {
        return amount * 0.05; // 5% discount
    } else {
        return 0.00;
    }
}