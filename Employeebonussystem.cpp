#include <iostream>
#include <string>
using namespace std;

int main()
{
    string employeeName;
    double basicSalary, bonus, totalSalary;

    for (int i = 1; i <= 5; i++)
    {
        cout<<"\nEnter details for Employee"<<i<<e

        cout << "Enter employee name: ";
        cin>>ws;
        getline(cin, employeeName);

        cout << "Enter basic salary: ";
        cin >> basicSalary;

        bonus = 0.05 * basicSalary;
        totalSalary = basicSalary + bonus;

        cout << "\n===== EMPLOYEE REPORT =====" << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Basic Salary: KSh " << basicSalary << endl;
        cout << "Bonus: KSh " << bonus << endl;
        cout << "Total Salary: KSh " << totalSalary << endl;
    }

    return 0;
}
