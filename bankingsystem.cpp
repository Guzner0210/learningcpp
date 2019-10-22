#include <iostream>
#include <vector>

using namespace std;

class Account {
  public:

    Account(int account_number, string first_name, string last_name, double balance){
        account_number = account_number;
        first_name = first_name;
        last_name = last_name;
        balance = balance;
    };
};

vector<Account> arr;

void addRecord() {

    // Declare variables
    int account_number;
    string first_name;
    string last_name;
    double balance;

    // Add records
    cout << "Enter account number: ";
    cin >> account_number;
    cout << "Enter first name: ";
    cin >> first_name;
    cout << "Enter last name: ";
    cin >> last_name;
    cout << "Enter balance: ";
    cin >> balance;

    Account new_account = Account(account_number=account_number, first_name=first_name, last_name=last_name, balance=balance);
    cout << "Dear Mr/Mrs " << first_name << " " << last_name << endl;
    cout << "You created a new account with an account number of " << account_number;
    cout << ", with a balance of " << balance << endl;

    arr.push_back(new_account);

    cout << arr.size() << endl;

};

int main()
{
    addRecord();
    addRecord();
    return 0;
}
