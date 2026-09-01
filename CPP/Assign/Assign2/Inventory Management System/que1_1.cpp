//============================================================================
// Name        : cpp.cpp
// Author      : Shravani
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include<iomanip>
using namespace std;

class Product {

public:

    void acceptDetails() {
        cout << "Product Id: " << endl;
        cin >> productId;

        cout << "Product name: " << endl;
        cin >> name;

        cout << "Product price: " << endl;
        cin >> price;

        cout << "Product quantity: " << endl;
        cin >> quantity;

        cout << endl;

    }
    void displayDetails() const {
        cout << left
            << setw(10) << productId
            << setw(15) << name
            << setw(12) << fixed << setprecision(2) << price
            << setw(10) << quantity
            << endl;
    }
    double totalValue()const {
        return price * quantity;
    }
    bool isLowStock(int threshold) const {
        return quantity < threshold;
    }

    string getName() {
        return name;
    }

private:
    int productId;
    string name;
    double price;
    int quantity;
};

int main() {

    Product products[2];
    cout << "Enter product details: " << endl;
    for (int i = 0; i < 2; i++) {
        products[i].acceptDetails();
    }

    cout << left
        << setw(10) << "ID"
        << setw(15) << "Name"
        << setw(12) << "Price"
        << setw(10) << "Qty"
        << endl;

    for (int i = 0;i < 2;i++) {
        products[i].displayDetails();
    }

    for (int i = 0;i < 2;i++) {
        cout << "Total value of products: " << i + 1 << " : " << products[i].totalValue() << endl;

    }

    int threshold;
    cout << "enter low stock threshold: ";
    cin >> threshold;

    cout << "the following products have low stock threshold: " << endl;

    for (int i = 0;i < 2;i++) {
        if (products[i].isLowStock(threshold)) {
            cout << products[i].getName() << endl;
        }
    }

    return 0;
}
