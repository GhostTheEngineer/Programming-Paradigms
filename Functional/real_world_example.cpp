/*
    * Functional Programming Example - Billing Calculation

        Instead of modifying shared state, this version uses pure functions
        to compute subtotal, tax, discount, and final total in a predictable way.

*/

#include <iostream>

// Pure function to calculate subtotal
double getSubtotal(double item1, double item2) {
    return item1 + item2;
}

// Pure function to calculate tax
double calculateTax(double subtotal, double taxRate) {
    return subtotal * taxRate;
}

// Pure function to calculate discount
double calculateDiscount(double subtotal, double discountRate) {
    return subtotal * discountRate;
}

// Pure function to calculate final total
double getFinalTotal(double subtotal, double tax, double discount) {
    return subtotal + tax - discount;
}

int main() {
    
    double subtotal = getSubtotal(29.99, 15.49);
    double tax = calculateTax(subtotal, 0.07);
    double discount = calculateDiscount(subtotal, 0.10);
    double total = getFinalTotal(subtotal, tax, discount);

    std::cout << "Subtotal: $" << subtotal << std::endl;
    std::cout << "Tax:      $" << tax << std::endl;
    std::cout << "Discount: -$" << discount << std::endl;
    std::cout << "----------------------" << std::endl;
    std::cout << "Total:    $" << total << std::endl;
    return 0;
}
