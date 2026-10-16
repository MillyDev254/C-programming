# include<iostream>
using namespace std;
int main()
{
    string customerName;
    string phoneModel;
    int quantity;
    double pricePerPhone;
    double totalSales;

    cout<<"Enter customerName:"<<endl;
    cin<<cusomerName;

    cout<<"Enter phoneModel:"<<endl;
    cin<<phoneModel;

    cout<<"Enter quantity purchased:"<<endl;
    cin<<quantity;

    cout<<"Enter pricePerPhone:"<<endl;
    cin<<pricePerPhone;

    totalSales=quantity*pricePerPhone;

    cout<<"SALES RECEIPT:"<<endl;
    cout<<"=============:"<<endl;
    cout<<"customer Name:"<<cusomerName<<endl;
    cout<<"phone Model:"<<phoneModel<<endl;
    cout<<"quantity Purchased:"<<quantity<<endl;
    cout<<"price per Phone:"<<pricePerPhone<<endl;
    cout<<"Total Sales:"<<totalSales<<endl;

    return 0;

}



