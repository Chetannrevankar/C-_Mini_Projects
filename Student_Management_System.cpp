#include <iostream>
#include <vector>
using namespace std;

struct Book {
    int id;
    string title;
};

vector<Book> books;

void addBook() {
    Book b;
    cout << "Enter Book ID: ";
    cin >> b.id;
    cout << "Enter Book Title: ";
    cin.ignore();
    getline(cin, b.title);
    books.push_back(b);
    cout << "Book added successfully!\n";
}

void displayBooks() {
    cout << "Library Books:\n";
    for (const auto& b : books) {
        cout << "ID: " << b.id << ", Title: " << b.title << endl;
    }
}

void deleteBook() {
    int id;
    cout << "Enter Book ID to delete: ";
    cin >> id;
    for (auto it = books.begin(); it != books.end(); ++it) {
        if (it->id == id) {
            books.erase(it);
            cout << "Book deleted successfully!\n";
            return;
        }
    }
    cout << "Book ID not found.\n";
}

int main() {
    int choice;
    do {
        cout << "1. Add Book\n2. Display Books\n3. Delete Book\n4. Exit\nEnter choice: ";
        cin >> choice;
        switch (choice) {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: deleteBook(); break;
            case 4: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 4);
    return 0;
}
