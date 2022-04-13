#include <iostream>

int n1, n2, n3;

using std::cout;
using std::cin;
using std::endl;

int main(){
	
	cout << "Inserisci primo numero: ";
	cin >> n1;
	
	cout << "Inserisci secondo numero: ";
	cin >> n2;
	
	cout << "Inserisci terzo numero: ";
	cin >> n3;
	
	if (n1 == n2 && n1 == n3)
		cout << "I tre numeri sono uguali";
	else if (n1 < n2 && n2 < n3)
		cout << "Il numero maggiore: "	<< n3 << endl;
	else if (n1 > n2 && n1 > n3)
		cout << "Il numero maggiore: "	<< n1 << endl;
	else
		cout << "Il numero maggiore: "	<< n2 << endl;
		
return 0;
}
