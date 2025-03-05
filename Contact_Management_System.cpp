#include <iostream>
#include <vector>
using namespace std;

struct Contact {
    string name;
    string phone;
};

vector<Contact> contacts;

void addContact() {
    Contact c;
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, c.name);
    cout << "Enter Phone Number: ";
    cin >> c.phone;
    contacts.push_back(c);
    cout << "Contact added successfully!\n";
}

void showContacts() {
    if (contacts.empty()) {
        cout << "No contacts available.\n";
        return;
    }
    cout << "Contact List:\n";
    for (size_t i = 0; i < contacts.size(); i++) {
        cout << i + 1 << ". Name: " << contacts[i].name << ", Phone: " << contacts[i].phone << endl;
    }
}

void searchContact() {
    string name;
    cout << "Enter name to search: ";
    cin.ignore();
    getline(cin, name);
    for (const auto& c : contacts) {
        if (c.name == name) {
            cout << "Contact Found - Name: " << c.name << ", Phone: " << c.phone << endl;
            return;
        }
    }
    cout << "Contact not found!\n";
}

void deleteContact() {
    string name;
    cout << "Enter name to delete: ";
    cin.ignore();
    getline(cin, name);
    for (auto it = contacts.begin(); it != contacts.end(); ++it) {
        if (it->name == name) {
            contacts.erase(it);
            cout << "Contact deleted successfully!\n";
            return;
        }
    }
    cout << "Contact not found!\n";
}

int main() {
    int choice;
    do {
        cout << "\n1. Add Contact\n2. Show Contacts\n3. Search Contact\n4. Delete Contact\n5. Exit\nEnter choice: ";
        cin >> choice;
        switch (choice) {
            case 1: addContact(); break;
            case 2: showContacts(); break;
            case 3: searchContact(); break;
            case 4: deleteContact(); break;
            case 5: cout << "Exiting Contact Manager. Goodbye!\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 5);
    return 0;
}
