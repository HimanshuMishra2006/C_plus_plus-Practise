#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s = "HelloWorld";
    string vowels = "aeiouAEIOU";

    for(char v : vowels) {
        s.erase(remove(s.begin(), s.end(), v), s.end());
    }

    cout << s << endl;  // Output: "HllWrld"
    return 0;
}
