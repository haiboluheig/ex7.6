
/* 
 * File:   main.cpp
 * Author: luhaibo_
 *
 * Created on February 21, 2018, 3:14 PM
 */

#include <cstdlib>
#include<iostream>
#include<iomanip>

#include "maclasse.h"
using namespace std;
extern const float PI = 3.14156;

int main() {
    //exe 7.6
    const int PRECISION = 3;
    const int LARGEUR = 8;
    const int NB_ROTATION = 16;
    const float THELTA_ROTATION = PI / 4;
    Point point;
    cout << "* Initialisation *" << endl;
    for (int i = 1; i <= NB_ROTATION + 1; ++i) {
        cout << setprecision(PRECISION) << fixed
                << "abcisse  : " << setw(LARGEUR) << point.abcisse()
                << "  ordonnee : " << setw(LARGEUR) << point.ordonnee() << endl;
        cout << "rho      : " << setw(LARGEUR) << point.rho()
                << "  thelta   : " << setw(LARGEUR) << point.thelta() << endl;
        if (i < NB_ROTATION + 1) {
            point.rotation(THELTA_ROTATION);
            cout << "\n* ROTATION * " << i << endl;
        }
    }
    return EXIT_SUCCESS;
}