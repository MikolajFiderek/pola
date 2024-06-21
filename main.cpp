#include <iostream>
#include "pola.h"

using namespace std;

int main() {

    double dlugoscBoku, pierwszyBok, drugiBok;

    int choice;
        cout << "Co chcesz obliczyc?"<<endl;
        cout << "1. Pole kwadratu"<<endl;
        cout << "2. Pole prostokata"<<endl;
        cout << "Wybierz opcje (1-2): ";
        cin >> choice;

            switch (choice) {
                case 1: {
                    cout << "Podaj dlugosc boku kwadratu: ";
                    cin >> dlugoscBoku;
                    cout << "Pole kwadratu: " << poleKwadratu(dlugoscBoku) << endl;
                    break;
                }
                case 2: {
                    cout << "Wprowadz dlugosc pierwszego boku: ";
                    cin >> pierwszyBok;
                    cout << "Wprowadz dlugosc drugiego boku: ";
                    cin >> drugiBok;
                    cout << "Pole prostokata: " << poleProstokata(pierwszyBok, drugiBok) <<endl;
                    break;
                }
                default:
                    cout << "Nieprawidlowa opcja!" <<endl;
            }


    return 0;
}
