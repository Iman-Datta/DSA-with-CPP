# include <iostream>

using namespace std;

int main () {
    int arr[] = {1,2,3,4,5};
    int sz = sizeof(arr)/sizeof(int);

    for (int start = 0; start < sz; start ++) {
        for (int end = start; end < sz; end ++) {
            for (int i = start; i <= end; i++) {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}    