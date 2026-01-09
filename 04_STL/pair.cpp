#include <iostream>
#include <utility>
#include<vector>
using namespace std;

void explainPair(){
    // Simple pair
    pair<int, int> p1 = {10, 20};
    cout << "p1 first element: " << p1.first << endl;
    cout << "p1 second element: " << p1.second << endl;

    cout << endl;

    // Nested pair
    pair<int, pair<int, int>> p2 = {1, {2, 3}};
    cout << "p2 first element: " << p2.first << endl;
    cout << "p2 second pair first element: " << p2.second.first << endl;
    cout << "p2 second pair second element: " << p2.second.second << endl;

    // Array of pairs
    pair<int, int> arr[3] = {{1, 2}, {3, 4}, {5, 6}};

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i].first << " " << arr[i].second << endl;
    }
}

void explainVector()
{
    vector<int> v;

    // push_back
    v.push_back(10);
    v.emplace_back(20);
    v.push_back(30);

    vector<pair<int, int>> vp;

    // Using push_back
    vp.push_back({1, 2});

    // Using emplace_back
    vp.emplace_back(3, 4);

    vp.push_back({5, 6});
    vp.emplace_back(7, 8);

    // Printing the vector of pairs
    for (int i = 0; i < vp.size(); i++)
    {
        cout << vp[i].first << " " << vp[i].second << endl;
    }

    // size
    cout << "Size: " << v.size() << endl;

    // front and back
    cout << "Front: " << v.front() << endl;
    cout << "Back: " << v.back() << endl;

    // access using index
    cout << "Elements: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // pop_back
    v.pop_back();

    // insert at position
    v.insert(v.begin() + 1, 99);

    // erase element
    v.erase(v.begin());

    // empty
    if (v.empty())
        cout << "Vector is empty" << endl;
    else
        cout << "Vector is not empty" << endl;

    // clear
    v.clear();

    // size after clear
    cout << "Size after clear: " << v.size() << endl;

    vector<int> v(5, 100);   // 5 elements, each = 100
    vector<int> v1(5);       // 5 elements, default = 0
    vector<int> v2(v1);      // copy of v1

    cout << "Vector v: ";
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    cout << "Vector v1: ";
    for (int x : v1)
    {
        cout << x << " ";
    }
    cout << endl;

    cout << "Vector v2: ";
    for (int x : v2)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    explainPair();
    return 0;
}
