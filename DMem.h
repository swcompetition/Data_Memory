#include <iostream>
#include <map>
#include "Control.h"

using namespace std;

class DMem {
private:
    map<int, int> data_memory;
    Control ctr;

public:
    void set_control(Control& c);
    void write_data(int address, int value);
    int read_data(int address);
};