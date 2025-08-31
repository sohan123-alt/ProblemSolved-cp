#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
    string s;
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> s;
            if (s == "C" || s == "M" || s == "Y") {
                cout << "#Color" << endl;
                return 0;
            }
        }
    }
 
    cout << "#Black&White" << endl;
    return 0;
}
