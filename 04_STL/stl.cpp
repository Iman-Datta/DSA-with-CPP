#include <iostream>
#include <utility>
#include<vector>
#include <list>
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
    cout << "===== BASIC VECTOR OPERATIONS =====\n";

    vector<int> v;

    // Insertion
    v.push_back(10);
    v.emplace_back(20);
    v.push_back(30);

    cout << "Size  : " << v.size() << endl;
    cout << "Front : " << v.front() << endl;
    cout << "Back  : " << v.back() << endl;

    cout << "Elements: ";
    for (int x : v) cout << x << " ";
    cout << endl;


    cout << "\n===== VECTOR OF PAIRS =====\n";

    vector<pair<int, int>> vp;
    vp.push_back({1, 2});
    vp.emplace_back(3, 4);
    vp.push_back({5, 6});
    vp.emplace_back(7, 8);

    for (auto p : vp)
        cout << p.first << " " << p.second << endl;


    cout << "\n===== INSERT & ERASE =====\n";

    v.pop_back();                 // removes 30
    v.insert(v.begin() + 1, 99);  // single element
    v.insert(v.begin() + 2, 2, 5);// insert 2 copies of 5

    v.erase(v.begin());                    // erase first
    v.erase(v.begin() + 1, v.begin() + 3); // erase range

    cout << "After modifications: ";
    for (int x : v) cout << x << " ";
    cout << endl;


    cout << "\n===== VECTOR CONSTRUCTORS =====\n";

    vector<int> vA(5, 100);   // size + value
    vector<int> vB(5);        // size only (0)
    vector<int> vC(vB);       // copy constructor

    cout << "vA: "; for (int x : vA) cout << x << " "; cout << endl;
    cout << "vB: "; for (int x : vB) cout << x << " "; cout << endl;
    cout << "vC: "; for (int x : vC) cout << x << " "; cout << endl;


    cout << "\n===== ITERATORS =====\n";

    vector<int>::iterator it = vA.begin();
    cout << "Begin element: " << *it << endl;

    it++;
    cout << "After it++   : " << *it << endl;

    vector<int>::reverse_iterator rit = vA.rbegin();
    cout << "Last element : " << *rit << endl;


    cout << "\n===== TRAVERSAL STYLES =====\n";

    cout << "Iterator loop: ";
    for (vector<int>::iterator it = vA.begin(); it != vA.end(); it++)
        cout << *it << " ";
    cout << endl;

    cout << "Auto iterator: ";
    for (auto it = vA.begin(); it != vA.end(); it++)
        cout << *it << " ";
    cout << endl;

    cout << "Range-based  : ";
    for (auto x : vA)
        cout << x << " ";
    cout << endl;


    cout << "\n===== CLEAR & EMPTY =====\n";

    v.clear();
    cout << "Size after clear: " << v.size() << endl;

    if (v.empty())
        cout << "Vector is empty (safe state)\n";
}

void explainList()
{
    cout << "===== STL LIST =====\n";

    list<int> l;

    // Insertion at back
    l.push_back(10);
    l.emplace_back(20);

    // Insertion at front
    l.push_front(5);
    l.emplace_front(1);

    cout << "Elements in list: ";
    for (int x : l)
        cout << x << " ";
    cout << endl;

    // Front & back access
    cout << "Front element: " << l.front() << endl;
    cout << "Back element : " << l.back() << endl;

    // Removing elements
    l.pop_front();
    l.pop_back();

    cout << "After pop_front & pop_back: ";
    for (int x : l)
        cout << x << " ";
    cout << endl;

    // Size
    cout << "Size of list: " << l.size() << endl;
}

void explainPQ(){
    
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== STL MENU =====\n";
        cout << "1. Explain Pair\n";
        cout << "2. Explain Vector\n";
        cout << "3. Explain List\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            explainPair();
            break;

        case 2:
            explainVector();
            break;

        case 0:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 0);

    return 0;
}