#include <iostream>
#include <string>
using namespace std;

int main()
{
string customerName;
string phoneModel;
int quantity;
double pricePerPhone;
double totalSales;

cout << "Enter customer name: " << endl;
getline(cin,customerName);

cout << "Enter phone model: " << endl;
cin >> phoneModel;

cout << "Enter quantity purchased: " << endl;
cin >> quantity;

cout << "Enter price per phone: " << endl;
cin >> pricePerPhone;

totalSales = quantity * pricePerPhone;

cout << "\nSALES RECEIPT:" << endl;
cout << "==============" << endl;
cout << "Customer Name: " << customerName << endl;
cout << "Phone Model: " << phoneModel << endl;
cout << "Quantity Purchased: " << quantity << endl;
cout << "Price per Phone: " << pricePerPhone << endl;
cout << "Total Sales: " << totalSales << endl;

return 0;

}
