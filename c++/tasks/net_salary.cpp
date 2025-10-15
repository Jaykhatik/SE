#include <iostream>
using namespace std;

int main() {
    // Program To calculate Net Salary!!

    int basic_salary;
    cout << "Enter Basic Salary: ";
    cin >> basic_salary;

    int da = (basic_salary * 2) / 100;   // calculation of DA
    int hra = (basic_salary * 3) / 100;  // calculation Of HRA
    int gross = basic_salary + da + hra; // calculation of GROSS
    int tax = (gross * 3) / 100;         // calculation of tax
    int net_salary = gross - tax;        // The Perfect Net Salary

    cout << "Basic Salary = " << basic_salary << endl;
    cout << "DA = " << da << endl;
    cout << "HRA = " << hra << endl;
    cout << "Gross Salary = " << gross << endl;
    cout << "Tax = " << tax << endl;
    cout << "Net Salary = " << net_salary << endl;

    return 0;
}
