#include <iostream>

using namespace std;

int main() {
	
	int v1 = 1;
	
 	int *v2 = new int(2);
	int v3 = *v2;
	v3 += 1; // does v2 change?
	 
	int *v4 = &v1;n	
	*v4 += 10; // does v1 change?
	 
	int *a[5];

	a[1] = &v1;
	a[2] = v2;
	a[3] = &v3;
	a[4] = v4;
	a[0] = new int(*v4 + v3);

	for (int i = 0; i < 5; i++) {
		cout << *a[i] << " ";
	}

	cout << endl;
}
