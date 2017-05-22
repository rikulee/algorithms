#ifndef i_STACK
#define i_STACK
const int STACK_DEP = 128;

template <class T>
class Stack {
    T buffer[STACK_DEP];
    int top;

public:
    Stack() { top = -1; }
    bool push(const T &t);
    bool pop(T &t);
};

template <class T>
bool Stack<T>::push(const T&t) {
    if (top < STACK_DEP) {
        buffer[++top] = t;
        return true;
    }

    return false;
}

template <class T>
bool Stack<T>::pop(T &t) {
    if (top == -1) return false;

    x = buffer[top--];

    return true;
}
#endif
