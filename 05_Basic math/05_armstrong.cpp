# include <iostream>
# include <cmath>

using namespace std;

bool isArmstrong(int n, int sz) {
    int dig, count = 0;
    int temp = n;
    while (temp > 0) {
        dig = temp % 10;
        count += pow(dig, sz);
        temp /= 10;
    }
    if (count == n) {
        return true;
    }
    else
        return false;
}

int main() {
    int num, sz;
    cout << "Enter your number: ";
    cin >> num;

    string s = to_string(num);
    sz = s.length();

    if (isArmstrong(num, sz)) {
        cout << num << " is an Armstrong number" << endl;
    } 
    else {
        cout << num << " is not an Armstrong number" << endl;
    }

    return 0;
}