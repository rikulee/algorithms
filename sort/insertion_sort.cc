#include <vector>
using namespace std;

vector<int> sort(vector<int> A) {
    int len = A.size();
    if (len < 2)
        return A;
    for (int i = 1; i < len; i++) {
        int key = A[i];
        int j = i - 1;
        while (j > -1 && A[j] > key) {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
    return A;
}
