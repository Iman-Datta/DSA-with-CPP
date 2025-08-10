# include <iostream>
using namespace std;

int countDigit(int n){
    int count = 0;
    while (n > 0){
        n = n / 10;
        count ++;
    }
    return count;
}

int main () {
    int num, no_degits;
    cout << "Enter your number: ";
    cin >> num; //123
    
    no_degits = countDigit(num);
    cout << "Total number of digit in your number is :" << no_degits << endl;
}