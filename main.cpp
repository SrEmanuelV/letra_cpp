#codigo de letras

#include <iostream>
#include <stack>
#include <vector>

int main() {
    // Crear una pila para almacenar caracteres
    std::stack<char> pila;
    std::vector<char> temporal;

    // Insertar las primeras 15 letras del alfabeto en la pila
    for (char letra = 'A'; letra < 'A' + 15; ++letra) {
        pila.push(letra);
    }

    // Extraer los elementos de la pila y almacenarlos en un vector temporal
    while (!pila.empty()) {
        temporal.push_back(pila.top());
        pila.pop();
    }

    // Imprimir los elementos en el orden deseado
    for (auto it = temporal.rbegin(); it != temporal.rend(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}

# Codigo de nombres

#include <iostream>
#include <stack>
#include <vector>
#include <string>  // Añadido para usar std::string

int main() {
    // Cambiar la pila para almacenar cadenas
    std::stack<std::string> pila;  // Cambiado de char a std::string
    std::vector<std::string> temporal;  // Cambiado de char a std::string

    // Insertar nombres en la pila en lugar de letras
    pila.push("Alice");  // Añadido
    pila.push("Bob");    // Añadido
    pila.push("Charlie"); // Añadido
    pila.push("David");  // Añadido
    pila.push("Eva");    // Añadido
    // Puedes añadir más nombres si lo deseas

    // Extraer los elementos de la pila y almacenarlos en un vector temporal
    while (!pila.empty()) {
        temporal.push_back(pila.top());
        pila.pop();
    }

    // Imprimir los elementos en el orden deseado
    for (auto it = temporal.rbegin(); it != temporal.rend(); ++it) {
        std::cout << *it << " ";  // No se necesita cambiar
    }

    return 0;
}
