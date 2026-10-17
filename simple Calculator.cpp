#include<iostream>
using namespace std;

int main(){
    double number1,number2,result;
    char operation;

    cout<<"Enter first number:"<<endl;
    cin<<number1;

    cout<<"Enter second number:"<<endl;
    cin<<number2;

    cout<<"Enter operator(+,-,*,/):"<<endl;
    cin<<operation;

    switch(operation)
    {
        case '+';
        result=number1+number2;
        cout<<"Result="<<result<<endl;
        break;

        case '-';
        result=number1-number2;
        cout<<"Result="<<result<<endl;
        break;

        case '*';
        result=number1*number2;
        cout<<"Result="<<result<<endl;
        break;

        case '/';
        if (number2!=0)
        {
            result=number1/number2;
            cout<<"Result="<<result<<endl;
        }
        else
        {
            cout<<"Error:cannot divide by zero."<<endl;
        }
        break;

        default:
        cout<<"Invalid operator."<<endl;
    }
    return 0;
    
}