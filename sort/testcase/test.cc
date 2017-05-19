#include <iostream>
#include <cassert>
#include "testcase.h"

extern vector<int> sort(vector<int> A);

int main() {
    for (int i = 0; i < test_amt; i++) {
        assert(targets[i] == sort(test_data[i]));
    }
    cout << "Passed.." << endl;
    return 0;
}
