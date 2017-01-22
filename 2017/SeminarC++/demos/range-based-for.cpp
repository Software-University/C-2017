#include <map>
#include <vector>
#include <iostream>

using namespace std;

int main ()
{
	vector <int> v = {0, 1, 2, 3, 4, 5};

	for (const int& i : v) // access by const reference
		cout << i << ' ';
	cout << '\n';

	for (auto& i : v) // typeof (i) == int&
		cout << i << ' ';
	cout << '\n';

	map <string, int> m = {
		{"sdf", 1},
		{"asd", 2},
		{"asf", 3},
		{"adf", 4},
	};
	for (auto& x : m)
		cout << x.first << " " << x.second << "\n";
	}
}
