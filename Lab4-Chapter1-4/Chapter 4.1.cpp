#include <iostream>
#include <string>
using namespace std;

int main() {
    string a = "hatti";

    string b = a + a;
    cout << "Concatenation: " << b << "\n"; // hattihatti

    b[5] = 'v';
    cout << "After modification: " << b << "\n"; // hattivatti

    string c = b.substr(3, 4); 
    cout << "Substring (from index 3, length 4): " << c << "\n"; // tiva

    int pos = b.find("vi");
    if (pos != string::npos) {
        cout << "\"vi\" found at index: " << pos << "\n";
    } else {
        cout << "Substring not found\n";
    }

    return 0;
}