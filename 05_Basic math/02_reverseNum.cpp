# include <iostream>

using namespace std;

int reverseNum(int n){
    int dig, rev_num = 0;
    while (n > 0){
        dig = n % 10;
        rev_num = rev_num * 10 + dig;
        n /= 10;
    }
    return rev_num;
}

int main () {
    int num, rev_num;
    cout << "Enter your number: ";
    cin >> num;

    rev_num = reverseNum(num);
    cout << "Reverse number is: " << rev_num << endl;
    return 0;
}