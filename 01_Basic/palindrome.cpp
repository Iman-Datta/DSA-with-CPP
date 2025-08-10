# include <iostream>

using namespace std;

bool palindrome(int x) {
    long long num = x, reverse_num = 0;
    int digit;

    if (x < 0) {
        return false;
    }

    while (num>0) {
        digit = num % 10;
        reverse_num = reverse_num * 10 + digit;
        num /= 10;
    }
    if (reverse_num == x) {
        return true;
    }
    return false;    
}

int main () {
    int num;
    cout << "Enter your number: ";
    cin >> num;
    if (palindrome(num)){
        cout << num << "\tis a palindromic number";
    }
    else{
        cout << num << "\tis not a palindromic number";
    }
    return 0;
}