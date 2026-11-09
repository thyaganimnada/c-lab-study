#include <iostream>
#include <fstream>
#include <string>


using namespace std;



void showpackages() {
    cout << "Available Packages\n";
    cout<<"--------------------\n";
    cout << "1. Wash & Fold  - Rs.50\n";
    cout << "2. Dry Cleaning - Rs.500\n";
    cout << "3. Ironing      - Rs.30\n";
    
}



void company() {
    cout << "Eco-Clean Laundry Service\n";
    cout << "Address: Rahularoad, Gabadavidiya, Matara\n";
    cout << "Phone: +94772234345\n";
    
}



void addcus() {
    ofstream file("customers.txt", ios::app);
    string name, phone;
    cout << "\nEnter Customer Name: ";
    getline(cin, name);
    cout << "Enter Phone Number: ";
    getline(cin, phone);
    file << name << "," << phone << endl;
    file.close();
    cout << "Customer saved successfully!!!\n";
}

void viewcus() {
    ifstream file("customers.txt");
    string line;
    cout << "Customer List\n";
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
}

void order() {
    string cus, service;
    int qty, price = 0;
    cout << "\nEnter customer name: ";
    getline(cin, cus);
    showpackages();
    cout << "Select package (1-3): ";
    int choice; cin >> choice;
    cout << "Enter quantity: ";
	cin >> qty;
    cin.ignore();
    

    if (choice == 1) { service = "Wash & Fold"; price = 50; }
    else if (choice == 2) { service = "Dry Cleaning"; price = 500; }
    else if (choice == 3) { service = "Ironing"; price = 30; }
    else { cout << "Invalid choice!\n"; return; }
    

    int total = price * qty;
    ofstream file("orders.txt", ios::app);
    file << cus << "," << service << "," << qty << "," << total << endl;
    file.close();
    

    cout << "Order placed successfully!\n";
    cout << "Total Bill: Rs." << total << "\n";
    
}



void orders() {
    ifstream file("orders.txt");
    string line;
    cout << "Orders\n";
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
    
}

int main() {
    string user, pass;
    cout<<"Login\n";
    cout<<"----------\n";
    cout << "Username: ";
	getline(cin, user);
    cout << "Password: ";
	getline(cin, pass);

    if (user != "echo" || pass != "1234") {
        cout << "Login failed!\n";
        return 0;
    }

    int choice;
    do {
        cout << "\n--- Eco-Clean Laundry System ---\n";
        cout << "1. View Service Packages\n";
        cout << "2. Add Customer\n";
        cout << "3. View Customers\n";
        cout << "4. Make Order\n";
        cout << "5. View Orders\n";
        cout << "6. Company Details\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1: 
		    showpackages();
			break;
        case 2:
		    addcus();
			break;
        case 3: 
		    viewcus();
			break;
        case 4:
		    order();
			break;
        case 5:
		    orders();
			break;
        case 6:
		    company();
			break;
        case 7:
		    cout << "Exiting";
			break;
        default:
		    cout << "Invalid choice\n";
        }

    } while (choice != 7);
}
