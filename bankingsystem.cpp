#include <iostream>
#include <vector>

using namespace std;

class Account {
  public:

    int account_number;
    string first_name;
    string last_name;
    double balance;

    Account(int _account_number, string _first_name, string _last_name, double _balance){
        account_number = _account_number;
        first_name = _first_name;
        last_name = _last_name;
        balance = _balance;
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

void showRecords() {
    for(int i = 0; i < arr.size(); ++i) {
      cout << arr[i].account_number << endl;
    }
}

int main()
{
    addRecord();
    showRecords();
    return 0;
}
