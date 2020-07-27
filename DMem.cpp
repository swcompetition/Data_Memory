#include "DMem.h"
void DMem::write_data(int address, int value) {
    // Insert those value to address
    map<int, int>::iterator tmp_finder = data_memory.find(address);

    if (tmp_finder != data_memory.end()) {
        tmp_finder->second = value;
        cout << "Overwrited" << endl;
    } else {
        data_memory.insert(make_pair(address, value));
    }
}


int DMem::read_data(int address) {
    map<int, int>::iterator tmp_finder = data_memory.find(address);

    if (tmp_finder != data_memory.end()) {
        return tmp_finder->second;
    } else {
        return -1;
    }
}
