#include <iostream>
#include <map>

using namespace std;

class DMem {
private:
    map<int, int> data_memory;

public:
    void write_data(int address, int value);
    int read_data(int address);
};