#include <iostream>

using std::cout;
using std::cin;
using std::endl;

float a, b, c, d, e, f;

int main(){
	
	cout <<"Inserisci primo numero: ";
	cin >> a;
	cout <<"Inserisci secondo numero: ";
	cin >> b;
	cout << endl;
	
	c = a + b;
	d = a - b;
	e = a * b;
	f = a / b;
	
	cout << "I risultati sono: " <<"\nSomma: " << c <<"\nDifferenza: " << d << "\nProdotto: " << e << "\nDivisione: " << f << endl;
	
	return 0;
	
}
