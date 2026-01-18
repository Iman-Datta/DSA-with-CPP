# include <iostream>
# include <vector>

using namespace std;

vector<int> reverse(vector<int> v){
    int sz = v.size();
    int start = 0, end = sz - 1;
    while (start < end) {
        swap(v[start], v[end]);
        start++;
        end--;
    }
    return v;
}

int main () {
    vector<int> v = {1,3,65,32,25,90,73,55};
    vector<int> reverse_v = reverse(v);
    return 0;
}