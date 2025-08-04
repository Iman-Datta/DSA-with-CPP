# include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num,i, flage = 0;

    cout << "Enter your number ";
    cin >> num;
    label:
    if (cin.fail()) {
        cin.clear();               
        cin.ignore(1000, '\n');    
        cout << "Error: Not a valid integer!" << endl;
        return 0;
    }
    else if (num <= 1){
        cout<< num <<" is not a prime number. Enter posetive int" << endl;
        return 0;
    }
    else {
        for(i = 2; i <= sqrt(num); i++){
            if (num % i == 0){
                flage = 1;
                break;
            }
        }

        if (flage == 1){
            cout << num << " is not a prime number";
        }
        else{
            cout << num << " is  a prime number";
        }
    }
    return 0;
}