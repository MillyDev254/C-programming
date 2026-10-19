
#include<iostream>
#include<string>
using namespace std;

string customerName;
double unitsConsumed;
double ratePerUnit = 50;
double bill;
double discount;
double finalAmount;

void getCustomerDetails()
{
    cout << "Enter customer name: ";
    getline(cin,customerName);

    cout << "Enter units consumed: ";
    cin >> unitsConsumed;
}

double calculateBill()
{
    bill = unitsConsumed * ratePerUnit;
    return bill;
}

double applyDiscount()
{
    if (unitsConsumed > 100)
        discount = bill * 0.10;
    else
        discount = 0;

    return discount;
}

void displayBill()
{
    finalAmount = bill - discount;

    cout << "\n----- CUSTOMER ELECTRICITY BILL -----" << endl;
    cout << "Customer Name: " << customerName << endl;
    cout << "Units Consumed: " << unitsConsumed << endl;
    cout << "Rate Per Unit: KSh " << ratePerUnit << endl;
    cout << "Total Bill: KSh " << bill << endl;
    cout << "Discount: KSh " << discount << endl;
    cout << "Final Amount: KSh " << finalAmount << endl;
}

int main()
{
    getCustomerDetails();
    calculateBill();
    applyDiscount();
    displayBill();

    return 0;
}

