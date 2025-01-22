// This program demonstrates how to use structures to create a menu system.
#include <iostream>
#include <string>

using namespace std;

// display menu function
void displayMenu() {
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Exit" << endl;
}

// structure for menu item
struct MenuItem {
    int id;
    string name;
    void (*function)();
};

// function pointers for menu items
void add() {
    cout << "Addition selected" << endl;
}

void subtract() {
    cout << "Subtraction selected" << endl;
}

void multiply() {
    cout << "Multiplication selected" << endl;
}

void divide() {
    cout << "Division selected" << endl;
}

void exitMenu() {
    cout << "Exit selected" << endl;
}

// array of menu items
MenuItem menuItems[] = {
    {1, "Addition", add},
    {2, "Subtraction", subtract},
    {3, "Multiplication", multiply},
    {4, "Division", divide},
    {5, "Exit", exitMenu}
};

// function to select menu item
void selectMenuItem() {
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;

    // check if choice is valid
    if (choice < 1 || choice > 5) {
        cout << "Invalid choice. Please try again." << endl;
        return;
    }

    // call function associated with selected menu item
    menuItems[choice - 1].function();
}

int main() {
    int choice;

    // display menu and loop until exit selected
    do {
        displayMenu();
        selectMenuItem();
        cout << "Press any key to continue...";
        cin.get();
    } while (choice!= 5);

    return 0;
}