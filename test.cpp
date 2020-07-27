#include <iostream>
#include "DMem.h"

using namespace std;

int main(void) {
    DMem data_mem;
    data_mem.write_data(10, 20);
    data_mem.write_data(10, 100);
    cout << data_mem.read_data(10) << endl;
    return 0;
}