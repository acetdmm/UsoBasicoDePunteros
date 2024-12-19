# Uso de Punteros en C++

Este programa en C++ demuestra el uso básico de punteros para acceder a la dirección de memoria de una variable y mostrar tanto el valor de la variable como la dirección de memoria asociada a ella.

## Propósito del Código

El objetivo de este código es ilustrar cómo utilizar punteros para acceder a la dirección de memoria de una variable, así como el valor almacenado en esa dirección. El programa muestra cómo trabajar con punteros y cómo acceder al valor de la variable a través del puntero.

## ¿Qué incluye el código?

1. **Definición de una Variable**
   - Se declara una variable entera `var` y se le asigna el valor `10`:
     ```cpp
     int var = 10; // Variable entera
     ```
   - Esta es la variable cuyo valor y dirección serán utilizados para demostrar cómo trabajan los punteros.

2. **Declaración de un Puntero**
   - Se declara un puntero `ptr` que almacena la dirección de memoria de la variable `var`:
     ```cpp
     int* ptr = &var; // Puntero que almacena la dirección de var
     ```
   - El puntero `ptr` apunta a la dirección de memoria donde está almacenado el valor de `var`.

3. **Mostrar Información sobre la Variable y el Puntero**
   - El programa imprime la siguiente información:
     - El valor de `var`:
       ```cpp
       cout << "El valor de var es: " << var << endl;
       ```
     - La dirección de memoria de `var` utilizando el operador `&`:
       ```cpp
       cout << "La direccion de var es: " << &var << endl;
       ```
     - El valor almacenado en el puntero `ptr`, que es la dirección de memoria de `var`:
       ```cpp
       cout << "El valor almacenado en ptr es: " << ptr << endl;
       ```
     - El valor al que apunta `ptr`, que es el valor de la variable `var`:
       ```cpp
       cout << "El valor al que apunta ptr es: " << *ptr << endl;
       ```

4. **Salida del Programa**
   - La salida del programa mostrará lo siguiente (ejemplo):
     ```plaintext
     El valor de var es: 10
     La direccion de var es: 0x7ffee349b47c
     El valor almacenado en ptr es: 0x7ffee349b47c
     El valor al que apunta ptr es: 10
     ```
   - La dirección de memoria de `var` será específica de la ejecución y puede variar cada vez que se ejecute el programa.

## ¿Cómo usar el programa?

1. **Compilación del Código**
   - Usa un compilador de C++ para compilar el archivo fuente:
     ```bash
     g++ UsoBasicoDePunteros.cpp -o UsoBasicoDePunteros
     ```

2. **Ejecución del Programa**
   - Ejecuta el programa desde la terminal:
     ```bash
     ./UsoBasicoDePunteros
     ```

3. **Resultados**
   - El programa imprimirá:
     - El valor de la variable `var`.
     - La dirección de memoria de `var`.
     - La dirección almacenada en el puntero `ptr`.
     - El valor al que apunta `ptr` (que es el valor de `var`).

## Características Técnicas

- **Punteros en C++:** El programa utiliza un puntero para acceder a la dirección de memoria de una variable y al valor almacenado en esa dirección.
- **Dereferenciación de Punteros:** Se utiliza el operador de desreferenciación `*` para acceder al valor de la variable a través de su puntero.
- **Direcciones de Memoria:** El programa imprime las direcciones de memoria de la variable y del puntero, demostrando cómo se puede interactuar con la memoria en C++.

## Personalización

Puedes modificar el valor de la variable `var` para ver cómo el programa funciona con diferentes valores:
```cpp
int var = 25; // Cambia el valor de var
