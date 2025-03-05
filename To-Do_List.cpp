#include <iostream>
#include <vector>
using namespace std;

vector<string> tasks;

void addTask() {
    string task;
    cout << "Enter task: ";
    cin.ignore();
    getline(cin, task);
    tasks.push_back(task);
    cout << "Task added!\n";
}

void showTasks() {
    cout << "To-Do List:\n";
    for (size_t i = 0; i < tasks.size(); i++)
        cout << i + 1 << ". " << tasks[i] << endl;
}

void removeTask() {
    int index;
    cout << "Enter task number to remove: ";
    cin >> index;
    if (index > 0 && index <= tasks.size()) {
        tasks.erase(tasks.begin() + index - 1);
        cout << "Task removed!\n";
    } else {
        cout << "Invalid task number!\n";
    }
}

int main() {
    int choice;
    do {
        cout << "1. Add Task\n2. Show Tasks\n3. Remove Task\n4. Exit\nEnter choice: ";
        cin >> choice;
        switch (choice) {
            case 1: addTask(); break;
            case 2: showTasks(); break;
            case 3: removeTask(); break;
            case 4: cout << "Goodbye!\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 4);
    return 0;
}
