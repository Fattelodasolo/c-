#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int n1, n2;

int main (){
	
	cout << "Inserisci il primo numero: ";
	cin >> n1;
	cout << "Inserisci il secondo numero: ";
	cin >> n2;
	
	if (n1 == n2)
		cout << n1 << " corrisponde a " << n2 << endl;
	else if (n1 >= n2)
		cout << n1 << " maggiore di " << n2 << endl;
	else
		cout << n1 << " minore di " << n2 << endl;
	
	return 0;
}
