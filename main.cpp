#include <iostream>
#include "pola.h"

using namespace std;

int main() {
    double sideLength;

    cout << "Podaj dlugosc boku kwadratu: ";
    cin >> sideLength;
    cout << "Pole kwadratu: " << squareArea(sideLength) <<endl;

    return 0;
}