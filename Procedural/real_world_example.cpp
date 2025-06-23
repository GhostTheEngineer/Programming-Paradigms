/*
    * Procedural Programming Real World Example - Processing an Order

        This code calculates the final total of an online order by updating
        shared variables step-by-step. It simulates a simplified backend 
        process used in e-commerce.
*/

#include <iostream>

// Shared state (external variables)
double subtotal = 0.0;
double taxAmount = 0.0;
double discountAmount = 0.0;
double total = 0.0;

// Add an item to the order
void addItem(double price) {
    subtotal += price; // update running subtotal
}

// Apply tax to the subtotal
void applyTax(double taxRate) {
    taxAmount = subtotal * taxRate; // calculate tax
    total += taxAmount;             // update total with tax
}

// Apply a discount to the subtotal
void applyDiscount(double discountRate) {
    discountAmount = subtotal * discountRate;
    total -= discountAmount;        // reduce total by discount
}

// Finalize total
void calculateTotal() {
    total += subtotal; // add subtotal to final total (after applying tax and discount)
}

// Print the receipt
void printReceipt() {
    std::cout << "Subtotal: $" << subtotal << std::endl;
    std::cout << "Tax:      $" << taxAmount << std::endl;
    std::cout << "Discount: -$" << discountAmount << std::endl;
    std::cout << "----------------------" << std::endl;
    std::cout << "Total:    $" << total << std::endl;
}

//* Entry point
int main() {
    addItem(29.99); // simulate adding item
    addItem(15.49); // simulate adding item - sub total = $45.48

    applyTax(0.07);       // 7% tax ($3.1836)
    applyDiscount(0.10);  // 10% discount ($4.548)

    calculateTotal(); // calculate whole order ($44.11)

    printReceipt(); // display results
    return 0;
}
