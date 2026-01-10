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
    cout << "===== BASIC VECTOR OPERATIONS =====" << endl;

    // 1️⃣ Creating an empty vector
    vector<int> v;

    // Adding elements
    v.push_back(10);      // inserts 10
    v.emplace_back(20);   // inserts 20 (constructed in-place)
    v.push_back(30);      // inserts 30

    // Size, front, back
    cout << "Size of v: " << v.size() << endl;
    cout << "Front element: " << v.front() << endl;
    cout << "Back element : " << v.back() << endl;

    // Traversing vector
    cout << "Elements in v: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;


    cout << "\n===== VECTOR OF PAIRS =====" << endl;

    // 2️⃣ Vector of pairs
    vector<pair<int, int>> vp;

    vp.push_back({1, 2});      // pair created first, then added
    vp.emplace_back(3, 4);     // pair constructed directly
    vp.push_back({5, 6});
    vp.emplace_back(7, 8);

    cout << "Vector of pairs (vp):" << endl;
    for (int i = 0; i < vp.size(); i++)
    {
        cout << vp[i].first << " " << vp[i].second << endl;
    }


    cout << "\n===== MODIFICATION FUNCTIONS =====" << endl;

    // Removing last element
    v.pop_back();   // removes 30

    // Insert element at index 1
    v.insert(v.begin() + 1, 99);

    // Erase first element
    v.erase(v.begin());

    cout << "v after pop, insert, erase: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // Empty check
    cout << (v.empty() ? "Vector is empty" : "Vector is not empty") << endl;


    cout << "\n===== VECTOR CONSTRUCTORS =====" << endl;

    // 3️⃣ Different ways to initialize vector
    vector<int> vA(5, 100);   // 5 elements, all 100
    vector<int> vB(5);        // 5 elements, all 0
    vector<int> vC(vB);       // copy of vB

    cout << "vA: ";
    for (int x : vA) cout << x << " ";
    cout << endl;

    cout << "vB: ";
    for (int x : vB) cout << x << " ";
    cout << endl;

    cout << "vC: ";
    for (int x : vC) cout << x << " ";
    cout << endl;


    cout << "\n===== ITERATORS =====" << endl;

    // 4️⃣ Iterators
    vector<int>::iterator it;

    it = vA.begin();
    cout << "Begin element: " << *it << endl;

    it++;
    cout << "After it++: " << *it << endl;

    // Reverse iterator
    vector<int>::reverse_iterator rit = vA.rbegin();
    cout << "Last element using reverse iterator: " << *rit << endl;


    cout << "\n===== CLEAR FUNCTION =====" << endl;

    // Clearing vector
    v.clear();
    cout << "Size after clear: " << v.size() << endl;

    cout << v.back() << endl;

    for (vector<int>::iterator it = vA.begin(); it != vA.end(); it++)
    {
        cout << *it << " ";
    }
   
    for (auto it = vA.begin(); it != vA.end(); it++)
    {
        cout << *it << " ";
    }
    
    for (auto x : vA)
    {
        cout << x << " ";
    }
    
}

int main()
{
    explainPair();
    return 0;
}
