#include <iostream>
#include <cctype>
using namespace std;

// ---------- Iterative version ----------
bool isPalindromeIterative(string s) {
    int i = 0, j = s.length() - 1;

    while (i < j) {

        while (i < j && !isalnum(s[i]))
            i++;

        while (i < j && !isalnum(s[j]))
            j--;

        if (tolower(s[i]) != tolower(s[j]))
            return false;

        i++;
        j--;
    }
    return true;
}

// ---------- Recursive version ----------
bool isPalindromeRecursive(string s, int i, int j) {

    // base case
    if (i >= j)
        return true;

    // skip non-alphanumeric from left
    if (!isalnum(s[i]))
        return isPalindromeRecursive(s, i + 1, j);

    // skip non-alphanumeric from right
    if (!isalnum(s[j]))
        return isPalindromeRecursive(s, i, j - 1);

    // compare characters
    if (tolower(s[i]) != tolower(s[j]))
        return false;

    // recursive call
    return isPalindromeRecursive(s, i + 1, j - 1);
}

int main() {
    string s;

    cout << "Enter string: ";
    getline(cin, s);   // full sentence input

    cout << "\nIterative Result: ";
    if (isPalindromeIterative(s))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    cout << "\nRecursive Result: ";
    if (isPalindromeRecursive(s, 0, s.length() - 1))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
