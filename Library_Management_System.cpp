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
