#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <iomanip>

using namespace std;

struct BusinessCard {
    string companyName;
    string companyAddress;
    string companyNumber;
    string workingHours;
    string representative;
    float priceQuoted;
};

int main() {
    srand(time(nullptr));

    BusinessCard companies[5] = {
        {"Unbrella Corporation", "Raccoon City", "123-456-7890", "9am - 5pm", "Albert Wesker", 0 },
        {"Wayne Enterprises", "Gotham City", "987-654-3210", "8am - 6pm", "Bruce Wayne", 0},
        {"Stark Industries", "New York", "555-123-4567", "7am - 7pm", "Tony Stark", 0},
        {"Xenon Technologies", "Los Angeles", "444-987-6543", "10am - 8pm", "Reed Richards", 0 },
        {"Oscorp Industries", "New York", "333-210-9876", "9am - 5pm", "Norman Osborn", 0 }
 };

    for (int i = 0; i < 5; i++) {
        companies[i].priceQuoted = 100 + rand() % 401; // Random price between 100 and 500
    }

    cout << "Company Price Comparison:\n/n";
    for (int i = 0; i < 5; i++) {
        cout << companies[i].companyName
                << " - $" << fixed << setprecision(2) 
                << companies[i].priceQuoted << endl;
    }
    int bestIndex = 0;
    for (int i = 1; i < 5; i++) {
        if (companies[i].priceQuoted < companies[bestIndex].priceQuoted) {
            bestIndex = i;
        }    
}
cout << "\nBest Deal:\n";
cout << "Company: "<< companies[bestIndex].companyName << endl;
cout << "Price: $" << fixed << setprecision(2) << companies[bestIndex].priceQuoted << endl;
cout << "Contract: " << companies[bestIndex].representative
     << " (" << companies[bestIndex].companyNumber << ")\n";
     
    return 0;
}