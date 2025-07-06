#include<iostream>
#include<ctime>
using namespace std;

char userChoice();
char compChoice();
void showChoice(char choice);
void result(char user, char comp);

int main() {
    srand(time(NULL));
    char user, comp;
    int c = (rand() % 3 + 1);
    user = userChoice();
    comp = compChoice();

    result(user, comp);

    return 0;
}

char userChoice() {
    char user;
    do {
        cout << "Enter your choice:\n 'r' for Rock\n 'p' for Paper\n 's' for Scissors\n:- ";
        cin >> user;
    } while (user != 'r' && user != 'p' && user != 's');
    cout << "User choice: ";
    showChoice(user);
    cout << endl;
    return user;
}

char compChoice() {
    char comp;
    int c = (rand() % 3 + 1);
    switch (c) {
        case 1:
            comp = 'r';
            break;
        case 2:
            comp = 'p';
            break;
        case 3:
            comp = 's';
            break;
    }

    cout << "Computer choice: ";
    showChoice(comp);
    cout << endl;
    return comp;
}

void showChoice(char choice) {
    if (choice == 'r') cout << "Rock";
    if (choice == 'p') cout << "Paper";
    if (choice == 's') cout << "Scissors";
}

void result(char user, char comp) {
    if (user == comp) {
        cout << "\nIt's a tie";
    } else if ((user == 'r' && comp == 's') ||
               (user == 'p' && comp == 'r') ||
               (user == 's' && comp == 'p')) {
        cout << "\nUser wins";
    } else {
        cout << "\nComputer wins";
    }
    cout << endl;
}
