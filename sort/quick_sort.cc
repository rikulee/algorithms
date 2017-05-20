#include <vector>
#include <algorithm>
using namespace std;

void quick_sort(vector<int> &A, int p, int q);

vector<int> sort(vector<int> A) {
    quick_sort(A, 0, A.size() - 1);
    return A;
}

void quick_sort(vector<int> &A, int p, int q) {
    if (p < q) {
        int mid = A[q];
        int l = p, r = q - 1;
        while (l < r) {
            while (A[l] < mid && l < r) l++;
            while (A[r] >= mid && l < r) r--;
            swap(A[l], A[r]);
        }
        if (A[l] >= A[q]) {
            swap(A[l], A[q]);
        } else {
            l++;
        }
        quick_sort(A, p, l - 1);
        quick_sort(A, l + 1, q);
    }
}
