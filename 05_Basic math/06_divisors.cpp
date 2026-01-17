# include <iostream>
# include <vector>

using namespace std;

vector<int> getDivisors(int n){
    vector<int> divisors;
    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            divisors.push_back(i);
        }
    }
    return divisors;
}

int main() {
    int num, sz;
    vector<int> divisors;

    cout << "Enter your number: ";
    cin >> num;

    divisors = getDivisors(num);
    for (int element : divisors){
        cout << element << ", ";
    }
    return 0;
}