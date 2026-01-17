# include <iostream>

using namespace std;

int countDig(int n) {
    int count = 0;
    while (n > 0) {
        n /= 10;
        count ++;
    }
    return count;
}

int main() {
    int num, noDig;
    cout << "Enter your number: ";
    cin >> num;

    noDig = countDig(num);
    cout << "Total number of digit in your number is :" << noDig << endl;
    return 0;
}