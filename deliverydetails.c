#include <stdio.h>
#include <conio.h>
int main()
 {
    int num_deliveries;
    float total_earnings, delivery_fee, tip_amount, earnings_per_delivery;
    
    printf("Enter the number of deliveries made: ");
    scanf("%d", &num_deliveries);
    
    printf("Enter the delivery fee per delivery: ");
    scanf("%f", &delivery_fee);
    
    printf("Enter the total tip amount received: ");
    scanf("%f", &tip_amount);
    
    total_earnings = (num_deliveries * delivery_fee) + tip_amount;
    earnings_per_delivery = total_earnings / num_deliveries;
    
    printf("Total earnings: $%.2f\n", total_earnings);
    printf("Earnings per delivery: $%.2f\n", earnings_per_delivery);
    
    return 0;
}
