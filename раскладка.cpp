#include <iostream>
#include <unordered_map>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string en = "qwertyuiop[]asdfghjkl;'zxcvbnm,.";
    string ru = "йцукенгшщзхъфывапролджэячсмитьбю";

    unordered_map<char, char> mp;

    for (int i = 0; i < en.size(); i++) {
        mp[en[i]] = ru[i];
        mp[ru[i]] = en[i];
    }

    string s;
    getline(cin, s);

    for (char& c : s)
        if (mp.count(c))
            c = mp[c];

    cout << s;
}