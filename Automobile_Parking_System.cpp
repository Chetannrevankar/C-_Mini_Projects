#include <iostream>
using namespace std;
int menu();
void bus();
void cycle();
void rickshaw();
void showdata();
void Delete();
int nor = 0, nob = 0, noc = 0, amount = 0, counti = 0;
int main() {
    int b;
    do {
        switch (menu()) {
            case 1:
                bus();
                break;
            case 2:
                cycle();
                break;
            case 3:
                rickshaw();
                break;
            case 4:
                showdata();
                break;
            case 5:
                Delete();
                break;
            case 6:
                cout << "Exiting the program. Thank you!" << endl;
                return 0;  // Exits the program properly
            default:
                cout << "PLEASE choose the correct option" << endl;
        }
        cout << "To add more vehicle details, press 0. Else, press any other number to exit." << endl;
        cout << "Enter your choice = ";
        cin >> b;
    } while (b == 0);
    cout << "Thank you! Visit again." << endl;
    return 0;
}
int menu() {  // Fixed function name (Menu -> menu)
    int ch;
    cout << "**********************************************" << endl;
    cout << "PRESS 1 for BUS, per bus 100rs" << endl;
    cout << "PRESS 2 for CYCLE, per cycle 70rs" << endl;
    cout << "PRESS 3 for RICKSHAW, per rickshaw 90rs" << endl;
    cout << "PRESS 4 for DISPLAYING THE RECORD" << endl;
    cout << "PRESS 5 for DELETING THE RECORD" << endl;
    cout << "PRESS 6 for EXIT" << endl;  // Fixed typo "EXCIT" -> "EXIT"
    cout << "**********************************************" << endl;
    cout << "ENTER YOUR CHOICE: ";
    cin >> ch;
    return ch;
}
void bus() {
    nob++;
    amount += 100;
    counti++;
}
void cycle() {
    noc++;
    amount += 70;
    counti++;
}
void rickshaw() {
    nor++;
    amount += 90;
    counti++;
}
void showdata() {
    cout << "**********************************************" << endl;
    cout << "TOTAL number of buses in parking lot = " << nob << endl;
    cout << "TOTAL number of cycles in parking lot = " << noc << endl;
    cout << "TOTAL number of rickshaws in parking lot = " << nor << endl;
    cout << "TOTAL number of vehicles in parking lot = " << counti << endl;
    cout << "TOTAL COLLECTION is = " << amount << " rs" << endl;
    cout << "**********************************************" << endl;
}
void Delete() {
    nob = 0;
    noc = 0;
    nor = 0;
    amount = 0;
    counti = 0;
}
