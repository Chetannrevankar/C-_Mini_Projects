#include <iostream>
using namespace std;

float balance = 0.0;

void deposit() {
    float amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;
    balance += amount;
    cout << "Deposit successful! New balance: " << balance << endl;
}

void withdraw() {
    float amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;
    if (amount > balance)
        cout << "Insufficient balance!\n";
    else {
        balance -= amount;
        cout << "Withdrawal successful! New balance: " << balance << endl;
    }
}

void checkBalance() {
    cout << "Current Balance: " << balance << endl;
}

int main() {
    int choice;
    do {
        cout << "1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\nEnter choice: ";
        cin >> choice;
        switch (choice) {
            case 1: deposit(); break;
            case 2: withdraw(); break;
            case 3: checkBalance(); break;
            case 4: cout << "Thank you for banking with us!\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 4);
    return 0;
}
