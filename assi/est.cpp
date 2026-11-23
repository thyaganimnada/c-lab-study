#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool status = false;
string uid, pwd;

void login();
void menu();
void viewOptions();

int main() {
    login();
    if (status == true) {
        menu();
    }
    return 0;
}

void login() {
    cout << "Enter your username: ";
    cin >> uid;
    cout << "Enter your password: ";
    cin >> pwd;

    if (uid == "abc" && pwd == "123") {
        status = true;
    } else {
        cout << "Wrong username or password. Try again.\n";
        login(); 
    }

    cout << "\n============================\n";
}

void menu() {
    int choice;
    string packages[] = { "Wash and Fold", "Dry Cleaning", "Ironing" };
    int amount[] = { 50, 500, 30 };

    cout << "LAUNDRY MANAGEMENT SYSTEM\n";
    cout << "==========================\n";
    cout << "1. View Available Packages\n";
    cout << "2. Make a Sale\n";
    cout << "3. Delete Packages\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
    case 1:
        viewOptions();
        break;
    default:
        cout << "Invalid choice.\n";
        break;
    }
}

void viewOptions() {
    string lineIn;
    ifstream infile("laundry.txt");

    cout << "\nAvailable Packages from File:\n";
    while (getline(infile, lineIn)) {
        cout << lineIn << "\n";
    }

    infile.close();
}

