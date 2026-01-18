#include <iostream>
using namespace std;

int recursiveFectorial(int num) {
    if (num == 0) {
        return 1;
    }
    return num * recursiveFectorial(num - 1);
}

int main() {
    int n;
    cout << "Enter your number: ";
    cin >> n;

    int ans = recursiveFectorial(n);
    cout << "Factorial is: " << ans << endl;

    return 0;
}
