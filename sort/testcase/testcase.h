#include <vector>
using namespace std;

int test_amt = 6;

vector<int> test_data[] = {
    {},
    {1},
    {1, 1, 1},
    {1, 1, 1, 1},
    {1, 2, 3, 4, 5, 6, 7, 8},
    {3, 1, 5, 6, 4, 7, 8, 2},
};

vector<int> targets[] = {
    {},
    {1},
    {1, 1, 1},
    {1, 1, 1, 1},
    {1, 2, 3, 4, 5, 6, 7, 8},
    {1, 2, 3, 4, 5, 6, 7, 8},
};
