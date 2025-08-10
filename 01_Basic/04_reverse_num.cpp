# include <iostream>
using namespace std;

int reverse(int x) {
    int digit, reverse_num = 0, num; 
    num = abs(x);

    if (x == 0) {
        return 0;
    }

    while (num > 0) {
        digit = num % 10; 
        reverse_num = reverse_num * 10 + digit;
        num = num / 10;
    }

    if ( x < 0) {
        return -reverse_num;
    }
    return reverse_num;
}

int main () {
    int num, reverse_num;
    cout << "Enter your number: ";
    cin >> num;
    
    reverse_num = reverse(num);
    cout << "reverse number of your number is :" << reverse_num << endl;
}