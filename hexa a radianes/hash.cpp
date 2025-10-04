//
// Created by sebastian on 23/08/2025.
//
#include <iostream>
#include <functional>

int main() {
    int numero = 12345;

    std::hash<int> hasher;
    size_t hash_value = hasher(numero);

    std::cout << "Numero: " << numero << "\nHash: " << hash_value << std::endl;

    return 0;
}