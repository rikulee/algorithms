#include <vector>
using namespace std;

const int INF = (1 << 30);

void merge_sort(vector<int> &A, int p, int r);
void merge(vector<int> &A, int p, int q, int r);

vector<int> sort(vector<int> A) {
    merge_sort(A, 0, A.size() - 1);
    return A;
}

void merge(vector<int> &A, int p, int q, int r) {
    int llen = q - p + 1;
    int rlen = r - q;
    vector<int> L, R;

    for (int i = 0; i < llen; i++) {
        L.push_back(A[p + i]);
    }
    for (int i = 0; i < rlen; i++) {
        R.push_back(A[q + 1 + i]);
    }
    L.push_back(INF);
    R.push_back(INF);

    int i, j;
    i = j = 0;

    for (int k = p; k < r + 1; k++) {
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            j++;
        }
    }
}

void merge_sort(vector<int> &A, int p, int r) {
    if (p < r) {
        int q = (p + r) / 2;
        merge_sort(A, p, q);
        merge_sort(A, q + 1, r);
        merge(A, p, q, r);
    }
}
