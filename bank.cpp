#include <iostream>
#include <map>
#include <string>
using namespace std;

// Structure to represent a Bank Account
struct Account {
    string name;
    double balance;
};
class BankingSystem {
private:
    map<int, Account> accounts; // Store accounts using an account number as key
    int nextAccountNumber;      // Generate unique account numbers

public:
    BankingSystem() : nextAccountNumber(1) {}
}
// Function to create a new account
    void createAccount() {
        string name;
        double initialDeposit;

        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter initial deposit amount: ";
        cin >> initialDeposit;

        if (initialDeposit < 0) {
            cout << "Initial deposit cannot be negative!\n";
            return;
        }