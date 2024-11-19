/*Kathir aims to create a program to determine the total ticket cost for an upcoming event, considering his age and the quantity of tickets he intends to buy.



The available ticket types are Basic (Rs. 150.0) and VIP (Rs. 300.0), each priced differently. The program should apply age-based discounts and utilize pointers for price calculations.



Discount calculation:

If Kathir's age is less than 18 (not inclusive), he will receive a 10% discount on Basic tickets.
If Kathir's age is 18 or older, he will receive a 5% discount on VIP tickets.


Formulas used: Total Cost = Discounted Price * Number of Tickets

where Discounted Price = Original Price - (Original Price * Discount Percentage)

Input format :
The first line of input consists of an integer representing Kathir's age.

The second line of input consists of an integer n, representing the number of tickets Kathir wants to purchase.

Output format :
The output displays "Rs." followed by the total cost of the tickets as a double-point value rounded to two decimal places.*/


#include <stdio.h>

int main() {
    double Basic_PRICE = 150.0;
    double VIP_PRICE = 300.0;

    double* pricePtr;
    double price;

    int age;
    int numTickets;

    scanf("%d", &age);
    scanf("%d", &numTickets);

    // Add a discount percentage based on age
    double discount = 0.0;
    if (age >= 0 && age < 18) {
        pricePtr = &Basic_PRICE;
        discount = 0.10; // 10% discount for Basic tickets
    } 
    else {
        pricePtr = &VIP_PRICE;
        discount = 0.05; // 5% discount for VIP tickets
    }

    double discountedPrice = *pricePtr - (*pricePtr * discount);
    price = numTickets * discountedPrice;

    printf("Rs.%.2lf", price);

    return 0;
}
