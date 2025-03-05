#include <iostream>
using namespace std;

void quiz() {
    int score = 0;
    int answer;
    
    cout << "Q1: What is 2 + 2?\n1) 3\n2) 4\n3) 5\n";
    cin >> answer;
    if (answer == 2) score++;

    cout << "Q2: What is the capital of France?\n1) London\n2) Paris\n3) Berlin\n";
    cin >> answer;
    if (answer == 2) score++;

    cout << "Q3: What is 5 * 6?\n1) 30\n2) 25\n3) 36\n";
    cin >> answer;
    if (answer == 1) score++;

    cout << "Your score: " << score << "/3\n";
}

int main() {
    quiz();
    return 0;
}
