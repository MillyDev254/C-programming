#include<iostream>
using namespace std;
string customerName;
double unitsConsumed;
double ratePerUnit=50;
double bill;
double discount;
double finalAmount;

void getCustomerDetails()
{
    cout<<"Enter customer name:";
    cin<<customerName;

    cout<<"Enter units consumed:";
    cin<<unitConsumed;

    double calculateBill()
    {
        bil=unitsConsumed*ratePerUnit;
        return bill;
    }
    double applyDiscont()
    {
        if(unitsConsumed>100)
        discount=bill*0.10;
        else
        discount=0;

        return discount; 
    } 
    void displayBill()
    {

    }
}