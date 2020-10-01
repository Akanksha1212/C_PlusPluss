#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	int a[] = { 11, 75, 89, 93, 66, 79, 33, 64, 52, 70 };
	int asize = sizeof(a) / sizeof(a[0]);

	cout << "we have to sort the array"<<"\n";
	sort(a, a + asize);

    cout<<"We search element 64"<<"\n";
	if (binary_search(a, a + 10, 64))
		cout << "Element found in the array"<<"\n";
	else
		cout << "Element not found in the array"<"\n";

	cout<<"\n We search element 55"<<"\n";
	if (binary_search(a, a + 10, 55))
		cout << "Element found in the array"<<"\n";
	else
		cout << "Element not found in the array"<<"\n";

	return 0;
}
