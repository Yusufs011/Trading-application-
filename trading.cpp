//These below are include statements for the standard input/output library, 
//the string library, and the vector library.

#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <iomanip>


// The line below "using namespace std" statement makes
//it unnecessary to prefix the standard library functions with "std::".

using namespace std;


// This below is a class definition for the Order class. 
// Each order has a symbol, a side (buy or sell), a price, and a quantity.
// The constructor takes in these values and initializes the instance variables.


class Order {
public:
    string symbol;
    string side;
    double price;
    int quantity;
    
    Order(string sym, string s, double p, int q) {
        symbol = sym;
        side = s;
        price = p;
        quantity = q;
    }
};

class TradingPlatform {
public:
    vector<Order> orders;
    
    void placeOrder(Order o) {
        orders.push_back(o);
        cout << "Order placed successfully." << endl;
    }
    
    void displayOrders() {
        cout << "Symbol\tSide\tPrice\tQuantity" << endl;
        for (int i = 0; i < orders.size(); i++) {
            Order o = orders[i];
            cout << o.symbol << "\t" << o.side << "\t" << o.price << "\t" << o.quantity << endl;
        }
    }
};
void intro();
int main() {
	intro();
    TradingPlatform platform;
    int choice;
    
    do {
        cout << "1. Place Order" << endl;
        cout << "2. Display Orders" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1: {
                string symbol, side;
                double price;
                int quantity;
                
                cout << "Enter symbol: ";
                cin >> symbol;
                cout << "Enter side (buy/sell): ";
                cin >> side;
                cout << "Enter price: ";
                cin >> price;
                cout << "Enter quantity: ";
                cin >> quantity;
                
                Order o(symbol, side, price, quantity);
                platform.placeOrder(o);
                break;
            }
            case 2: {
                platform.displayOrders();
                break;
            }
            case 3: {
                cout << "Exiting..." << endl;
                break;
            }
            default: {
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        }
        
    } while (choice != 3);
    
    return 0;
}

        // Introduction section 
void intro(){
    cout << "\n\n\n\t     TOPIC: TRADING APPLICATION SYSTEM";
    cout << "\n\n\n\n\t     MADE BY:SALISU YUSUF";
    cout << "\n\n\n\n\t     MATRIC NO: H/CTE/21/0634";
    cout << "\n\n\n\n\t     SUPERVISOR : ENGR NZUBE";
    cout << "\n\n\n\n\t     SCHOOL : THE FEDERAL POLYTECHNIC ILARO";
    cin.get();
}
