#include <iostream>
#include <cmath>

int main() {
	int x= fabs(7.5);
	std::cout << "El valor absoluto de 7.5 es: " << x<< std::endl;
	x = floor(7.5);
	std::cout << "El valor redondeado hacia abajo de 7.5 es: " << x << std::endl;
	x = fabs(0.0);
	std::cout << "El valor absoluto de 0.0 es: " << x << std::endl;
	x = ceil(0.0);
	std::cout << "El valor redondeado hacia arriba de 0.0 es: " << x << std::endl;
	x = fabs(-6.4);
	std::cout << "El valor absoluto de -6.4 es: " << x << std::endl;
	x = ceil(-6.4);
	std::cout << "El valor redondeado hacia arriba de -6.4 es: " << x << std::endl;
	x = ceil(-fabs(-8 + floor(-5.5)));
	std::cout << "El valor redondeado hacia arriba de el valor absoluto de -8 mas el valor redondeado hacia abajo de -5.5 es: " << x << std::endl;
	return 0;
}