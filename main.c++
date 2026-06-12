#include <iostream>
using namespace std;

class Payroll
{
private:
    double hourlyRate;
    double hoursWorked;
    double totalPay;

public:
    // Set hourly rate
    void setRate(double r)
    {
        hourlyRate = r;
    }

    // Set hours worked
    void setHours(double h)
    {
        hoursWorked = h;
    }

    // Calculate total pay
    void calculatePay()
    {
        totalPay = hourlyRate * hoursWorked;
    }

    // Get total pay
    double getPay()
    {
        return totalPay;
    }
};

int main()
{
    Payroll emp[7];
    double hours;
    double rate;

    // Input validation for hourly rate (cannot be negative)
    cout << "Enter hourly pay rate: ";
    cin >> rate;
    while (rate < 0)
    {
        cout << "Pay rate cannot be negative. Enter again: ";
        cin >> rate;
    }

    // Collect hours for each employee with strict boundaries
    for (int i = 0; i < 7; i++)
    {
        emp[i].setRate(rate);

        cout << "Enter hours worked by employee " << i + 1 << ": ";
        cin >> hours;

        // Input Validation: Do not accept values negative or greater than 60
        while (hours < 0 || hours > 60)
        {
            cout << "Hours must be between 0 and 60. Enter again: ";
            cin >> hours;
        }

        emp[i].setHours(hours);
        emp[i].calculatePay();
    }

    // Displaying the results
    cout << "\n==============================\n";
    cout << "       Weekly Gross Pay       \n";
    cout << "==============================\n";

    for (int i = 0; i < 7; i++)
    {
        cout << "Employee " << i + 1 << " Pay: $" << emp[i].getPay() << endl;
    }

    return 0;
}
