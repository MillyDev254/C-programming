#inclue<iostream>
using namespace std;

string employeeName;
double basicSalary,overtimeHours,ratePerHour;

void  getEmployeeeDetails()
{
    cout<<"Enter employee name:";
    cin<<employeeName;

    cout<<"Enter basic salary:";
    cin<<basicSalary;

    cout<<"Enter overtime hours:";
    cin<<overtimeHours;

    cout<<"Enter overtime rate per hour:";
    cin<<ratePerHour;

    double calculateOvertimePay()
    {
        return overtimeHours*ratePerHour;
    } 
    double calculateNetSalary()
    {
        return basicSalary+calculateOvertimePay();
    }

    void displayPaySlip()
    {
        cout<<"======EMPLOYEE PAYSLIP======"<<endl;
        cout<<"Enter Employee Name:"<<employeeName<<endl;
        cout<<"Basic Salary:"<<basicSalary<<endl;
        cout<<"Overtime Hours:"<<overtimeHours<<endl;
        cout<<"OverTime Pay:"<<calculateOvertimePay()<<endl;
        cout<<"Net Salary:"<<calculateNetSalary()<<endl;
    }
    int main()
    {
        getEmployeeeDetails();
        displayPaySlip();

        return 0;
    }
}