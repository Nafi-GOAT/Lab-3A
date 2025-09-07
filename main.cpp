//
//  main.cpp
//  Lab 3A
//
//  Created by Nafi on 9/6/25.
//

#include <iostream>
#include <string>
using namespace std;

//  Define the structure
struct Restaurant {
    string name;
    string address;
    string cuisineType;
    double averagePrice;
    int rating;
};

Restaurant createRestaurant() {
    Restaurant temp;

    cout << "Enter restaurant name: ";
    getline(cin, temp.name);

    cout << "Enter address: ";
    getline(cin, temp.address);

    cout << "Enter cuisine type: ";
    getline(cin, temp.cuisineType);

    cout << "Enter average price per meal: ";
    cin >> temp.averagePrice;

    cout << "Enter rating (1-5): ";
    cin >> temp.rating;
    cin.ignore(); // clear newline after int input

    return temp;
}

//  Function to print restaurant info
void printRestaurant(const Restaurant &r) {
    cout << "\n==============================\n";
    cout << "Restaurant: " << r.name << endl;
    cout << "Address   : " << r.address << endl;
    cout << "Cuisine   : " << r.cuisineType << endl;
    cout << "Avg Price : $" << r.averagePrice << endl;
    cout << "Rating    : " << r.rating << " stars" << endl;
    cout << "==============================\n";
}

int main() {
    // Create 4 restaurants
    cout << "Enter details for Restaurant 1:\n";
    Restaurant r1 = createRestaurant();

    cout << "\nEnter details for Restaurant 2:\n";
    Restaurant r2 = createRestaurant();

    cout << "\nEnter details for Restaurant 3:\n";
    Restaurant r3 = createRestaurant();

    cout << "\nEnter details for Restaurant 4:\n";
    Restaurant r4 = createRestaurant();

    // Print them
    cout << "\n=== Restaurant Directory ===\n";
    printRestaurant(r1);
    printRestaurant(r2);
    printRestaurant(r3);
    printRestaurant(r4);

    return 0;
}

