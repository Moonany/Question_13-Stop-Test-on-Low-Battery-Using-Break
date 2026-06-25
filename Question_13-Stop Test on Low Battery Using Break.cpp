#include <iostream>
using namespace std;

int main() {
    double voltage;       // Variable to store each battery voltage reading

    // Programme header
    cout << "========================================" << endl;
    cout << "   Battery Voltage Test (Up to 10 Readings)" << endl;
    cout << "========================================" << endl;
    cout << "Low battery threshold: below 10.5 V" << endl;
    cout << "----------------------------------------" << endl;

    // for loop: accepts up to 10 battery voltage readings
    for (int i = 1; i <= 10; i++) {
        cout << "Enter battery voltage reading " << i << " (V): ";
        cin >> voltage;

        // if: check for low battery
        if (voltage < 10.5) {
            cout << "  --> Low battery detected. Test stopped." << endl;
            break;   // exit the for loop immediately
        }
        else {
            cout << "  --> Battery voltage normal: " << voltage << " V" << endl;
        }
    }

    cout << "----------------------------------------" << endl;
    cout << "Programme ended." << endl;
    cout << "========================================" << endl;

    return 0;
}
