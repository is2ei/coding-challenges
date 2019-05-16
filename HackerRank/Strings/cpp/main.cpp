#include <iostream>
#include <string>
using namespace std;

int main() {
	
    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    cout << a.size() << " " << b.size() << endl;

    cout << a << b << endl;

    std::swap(a[0], b[0]);

    cout << a << " " << b << endl;
  
    return 0;
}
