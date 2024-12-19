#include <iostream>
using namespace std;
int main() {
int var = 10; // Variable entera
int* ptr = &var; // Puntero que almacena la dirección de var
cout << "El valor de var es: " << var << endl;
cout << "La direccion de var es: " << &var << endl;
cout << "El valor almacenado en ptr es: " << ptr << endl;
cout << "El valor al que apunta ptr es: " << *ptr << endl;
return 0;
}
