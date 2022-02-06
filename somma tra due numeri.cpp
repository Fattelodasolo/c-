#include <iostream>

int n1, n2, som;

int main(){
	
	std::cout <<"Inserisci il primo numero: ";
	std::cin >> n1;
	std::cout <<"Inserisci il secondo numero: ";
	std::cin >> n2;
	
	som = n1 + n2;
	
	std::cout <<"Il risultato: " <<som <<std::endl;
	
	return 0;
}
