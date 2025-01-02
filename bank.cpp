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