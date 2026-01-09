#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "thequickbrownfoxjumpsoverthelazydog";

   for (int i = 0; i < s.length(); i++) {
        // 1. Jadikan huruf kapital tanpa toupper
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - ('a' - 'A');
        }
        
        // 2. Geser ke huruf berikutnya
        if (s[i] == 'Z') {
            s[i] = 'A';
        } else {
            s[i] = s[i] + 1;
        }
    }

    cout << s << endl;

    return 0;
}
