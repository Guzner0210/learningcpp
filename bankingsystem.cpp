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
      cout << arr[i].account_number << " " << arr[i].first_name << " " << arr[i].last_name << " " << arr[i].balance << endl;
    }
}

void editRecord(Account& account) {
  cout << "Choose what you want to edit: " << endl;
  cout << "1> First name" << endl;
  cout << "2> Last name" << endl;
  cout << "3> Balance" << endl;
  int answer;
  cin >> answer;
  if (answer == 1) {
    string first_name;
    cout << "First name: ";
    cin >> first_name;
    account.first_name = first_name;
  } else if (answer == 2) {
    string last_name;
    cout << "Last name: ";
    cin >> last_name;
    account.last_name = last_name;
  } else if (answer == 3) {
    double balance;
    cout << "Balance: ";
    cin >> balance;
    account.balance = balance;
  }
}

void searchRecord() {
    int account_number;
    cout << "Enter your account number: ";
    cin >> account_number;

  for(int i = 0; i < arr.size(); ++i) {
    if (arr[i].account_number == account_number) {
      cout << "For account number " << arr[i].account_number << ", we have:" << endl;
      cout << "First name is " << arr[i].first_name << endl;
      cout << "Last name is " << arr[i].last_name << endl;
      cout << "Balance is " << arr[i].balance << endl;
      cout << "" << endl;
      string answer;
      cout << "Do you want to edit your record? [y/n]" << endl;
      cin >> answer;
      if (answer == "y") {
        editRecord(arr[i]);
      } else {
        //delete record
      }
    } else {

    }
  }
}

void decide() {
  int choice;
  cout << "What do you want to do?" << endl;
  cout << "1> Add Record" << endl;
  cout << "2> Show Records" << endl;
  cout << "3> Search Record" << endl;
  cout << "4> Edit Record" << endl;
  cout << "5> Delete Record" << endl;
  cout << "6> Exit Program" << endl;
  cout << "" << endl;
  cout << "" << endl;
  cin >> choice;

  if (choice == 1) {
    addRecord();
  } else if (choice == 2) {
    showRecords();
  } else if (choice == 3) {
    searchRecord();
  } else {

  }

  decide();
}

int main()
{
    decide();
    return 0;
}
