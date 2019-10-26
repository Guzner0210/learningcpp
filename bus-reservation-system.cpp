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
  }
}

int main()
{
    return 0;
}
