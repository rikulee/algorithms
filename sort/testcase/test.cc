#include <iostream>
#include <cassert>
#include "testcase.h"

extern vector<int> sort(vector<int> A);

int main() {
    vector<int> failed;

    for (int i = 0; i < test_amt; i++) {
        if (targets[i] != sort(test_data[i])) {
            failed.push_back(i);
        }
    }
    if (failed.size() == 0) {
        cout << "All Pass.." << endl;
    } else {
        cout << "Faild..(";
        for (int i : failed) {
            cout << i << ",";
        }
        cout << ")" << endl;
    }

    return 0;
}
