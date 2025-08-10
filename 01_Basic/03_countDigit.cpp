# include <iostream>
using namespace std;

int countDigit(int n){
    int count = 0;
    
    if (n == 0){
        return 1;
    }

    if (n < 0) {
        n = abs(n);
    }
    while (n > 0){
        n = n / 10;
        count ++;
    }
    return count;
}

int main () {
    int num, no_digits;
    cout << "Enter your number: ";
    cin >> num; //123
    
    no_digits = countDigit(num);
    cout << "Total number of digit in your number is :" << no_digits << endl;
}