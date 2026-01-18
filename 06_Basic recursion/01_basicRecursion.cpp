#include <iostream>
using namespace std;

void f_recursion(int n, int value) {
    if (n == 0) {
        return;
    }
    cout << value << endl;
    f_recursion(n - 1, value);
}

int main() {
    int num;
    cout << "Enter your number: ";
    cin >> num;

    f_recursion(num, num);
    return 0;
}
