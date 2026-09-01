
#include <iostream>
using namespace std;

double reorderCost(int qty, double unitPrice){
    return qty * unitPrice;
}

double reorderCost(double qty, double unitPrice){
    return qty * unitPrice;
}

double reorderCost(int qty, double unitPrice, double taxRate){
    double cost = qty * unitPrice;
    double tax = cost * taxRate / 100;

    return cost + tax;
}

double applyDiscount(double price, double discountPercent = 10.0){
    double discount = price * discountPercent / 100;

    return price - discount;
}

int main(){
    int qty1;
    double unitPrice1;

    cout << "Enter qty: ";
    cin >> qty1;

    cout << "Enter unit Price: ";
    cin >> unitPrice1;

    cout << "Reorder cost1: " << reorderCost(qty1, unitPrice1) << endl;

    double qty2;
    double unitPrice2;

    cout << "Enter qty: ";
    cin >> qty2;

    cout << "Enter unit Price: ";
    cin >> unitPrice2;

    cout << "Reorder cost2: " << reorderCost(qty2, unitPrice2) << endl;

    int qty3;
    double unitPrice3;
    double taxRate;

    cout << "Enter qty: ";
    cin >> qty3;

    cout << "Enter unit Price: ";
    cin >> unitPrice3;

    cout << "enter taxrate: ";
    cin >> taxRate;

    cout << "Reorder Cost3: " << reorderCost(qty3, unitPrice3, taxRate) << endl;

    // adding discout
    double price;

    cout << "Enter price: ";
    cin >> price;


    cout << "With applied discount: " << applyDiscount(price,20) << endl;
    cout << "With default discount: " << applyDiscount(price) << endl;

    return 0;
}

