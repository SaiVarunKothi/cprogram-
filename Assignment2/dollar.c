#include <stdio.h>

int main() {
    float amount_in_inr;
    printf("Enter the amount in INR: ");
    scanf("%f", &amount_in_inr);
    
    float usd_conversion_rate = 76.23;
    float amount_in_usd = amount_in_inr / usd_conversion_rate;
    
    printf("Amount in USD: %.2f\n", amount_in_usd);
    
    return 0;
}
