#include <iostream>

int main ()
{
	int a[2] = {1,2};
	auto f = [&a]() { return a; };
	 
	auto [x,y] = f(); // creates e[2], copies a into e, then x refers to e[0], y refers to e[1]
	auto& [xr, yr] = f(); // xr refers to a[0], yr refers to a[1]
}
