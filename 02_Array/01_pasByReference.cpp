# include <iostream>
using namespace std;

void changeArr(int arr[], int size) { // pass by refarence
    cout << "in funtion \n";
    for (int i = 0; i < size; i ++) {
        arr[i] = 2 * arr[i];
    }
}
int main() {
    int arr[] = {1,2,3};
    changeArr(arr, 3); // arr is actually the pointer of first index
    for(int i = 0; i < 3; i ++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}