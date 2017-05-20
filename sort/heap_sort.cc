#include <vector>
#include <algorithm>
using namespace std;

static int heap_size;

void max_heapify(vector<int> &A, int i);
void build_max_heap(vector<int> &A);

vector<int> sort(vector<int> A) {
    heap_size = A.size();
    build_max_heap(A);
    for (int i = A.size() - 1; i > 0; i--) {
        swap(A[0], A[i]);
        heap_size--;
        max_heapify(A, 0);
    }
    return A;
}

void max_heapify(vector<int> &A, int i) {
    int lchild = 2 * i + 1;
    int rchild = 2 * (i + 1);
    int larger;

    if (lchild < heap_size && A[lchild] > A[i]) {
        larger = lchild;
    } else {
        larger = i;
    }
    if (rchild < heap_size && A[rchild] > A[larger]) {
        larger = rchild;
    }
    if (larger != i) {
        swap(A[i], A[larger]);
        max_heapify(A, larger);
    }
}

void build_max_heap(vector<int> &A) {
    for (int i = A.size() / 2; i > -1; i--) {
        max_heapify(A, i);
    }
}
