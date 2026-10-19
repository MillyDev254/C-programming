#include <iostream>
using namespace std;

int main()
{
    double balance, withdrawal;

    cout << "Enter account balance: KSh ";
    cin >> balance;

    while (balance > 0)
    {
        cout << "\nCurrent balance: KSh ";

        cout << "Enter withdrawal amount: KSh ";
        cin >> withdrawal;

        if (withdrawal > balance)
        {
            cout << "Insufficient balance. Withdrawal stopped." << endl;
            break;
        }

        if (withdrawal <= 0)
        {
            cout << "Enter a valid withdrawal amount." << endl;
            continue;
        }

        balance = balance - withdrawal;

        cout << "Withdrawal successful!" << endl;
        cout << "Remaining balance: KSh " << balance << endl;

        if (balance == 0)
        {
            cout << "Your balance is zero. Withdrawal stopped." << endl;
            break;
        }
    }

    return 0;
}
