#include <iostream>
using namespace std;

int main() {
    // Program To calculate Simple Interest!!

    int principle, interest, time_years;

    cout << "Enter Principle Amount: ";
    cin >> principle;

    cout << "Enter Rate of Interest (%): ";
    cin >> interest;

    cout << "Enter Time (in years): ";
    cin >> time_years;

    int simple_interest = (principle * interest * time_years) / 100; // calculation of SI
    int totalAmount = principle + simple_interest;                   // Total Amount After SI

    cout << "Principle: " << principle << endl;
    cout << "Interest Rate: " << interest << "%" << endl;
    cout << "Time (Years): " << time_years << endl;
    cout << "Simple Interest: " << simple_interest << endl;
    cout << "Total Amount: " << totalAmount << endl;

    return 0;
}
