#include <iostream>
#include <vector>

using namespace std;

class Bus {
  public:
    int bus_no;
    string bus_driver;
    string arrival_time;
    string departure;
    string from;
    string to;

  Bus(int _bus_no, string _bus_driver, string _arrival_time, string _departure, string _from, string _to) {
    bus_no = _bus_no;
    bus_driver = _bus_driver;
    arrival_time = _arrival_time;
    departure = _departure;
    from = _from;
    to = _to;
  };
};

vector<Bus> arr;

Bus bus_1 = Bus(1, "Toni Bui", "10:00", "3:00", "London", "Manchester City");
Bus bus_2 = Bus(2, "Gerrard", "10:00", "3:00", "Liverpool", "Manchester City");
Bus bus_3 = Bus(3, "Lampard", "10:00", "3:00", "Westminster", "Manchester City");

void install() {
  int bus_no;
  cout << "Enter bus number: ";
  cin >> bus_no;
  cout << "Bus driver: " << arr[bus_no-1].bus_driver << endl;
  cout << "Arrival time: " << arr[bus_no-1].arrival_time << endl;
  cout << "Departure: " << arr[bus_no-1].departure << endl;
  cout << "From: " << arr[bus_no-1].from << endl;
  cout << "To: " << arr[bus_no-1].to << endl;
}

void buses_available() {
  for (int i = 0; i < arr.size(); i++) {
    cout << "Bus driver: " << arr[i].bus_driver << endl;
    cout << "Arrival time: " << arr[i].arrival_time << endl;
    cout << "Departure: " << arr[i].departure << endl;
    cout << "From: " << arr[i].from << endl;
    cout << "To: " << arr[i].to << endl;
  }
}

int main()
{
  arr.push_back(bus_1);
  arr.push_back(bus_2);
  arr.push_back(bus_3);
  buses_available();
  return 0;
}
