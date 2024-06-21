#include "pola.h"
#include <cmath>

double poleKwadratu (double dlugoscBoku) {
    return std::pow(dlugoscBoku, 2);
}
double  poleProstokata(double pierwszyBok, double drugiBok) {
    return pierwszyBok * drugiBok;
}