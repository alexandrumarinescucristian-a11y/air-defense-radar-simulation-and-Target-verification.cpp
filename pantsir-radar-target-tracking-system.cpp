#include <iostream>

using namespace std;



struct Avion {

int frecventa;

int altitudine;

int viteza;

};



int main() {

int n;

Avion radar[100];



cout << "Introduceti numarul de avioane: ";

cin >> n;

for (int i = 1; i <= n; i++) {

cout << "--- Date pentru avionul " << i << " ---" << endl;

cout << "Frecventa: ";

cin >> radar[i].frecventa; // Folosim [i], nu [100]



cout << "Altitudine: ";

cin >> radar[i].altitudine;



cout << "Viteza: ";

cin >> radar[i].viteza;

} // Inchidem acolada for-ului de citire



cout << endl << "=== REZULTATE RADAR PANTSIR ===" << endl;

for (int i = 1; i <= n; i++) {

cout << endl << "Avionul " << i << ": ";

if (radar[i].frecventa != 4200) {

cout << "AVION INAMIC! ";

if (radar[i].altitudine >= 50 && radar[i].altitudine <= 15000) {

cout << "TINTA VALABILA! Trageti! Viteza: " << radar[i].viteza << " km/h" << endl;

}

else if (radar[i].altitudine < 50) {

cout << "Eroare: Aparatul zboara prea jos pentru rachete." << endl;

}

else {

cout << "Eroare: Aparatul zboara prea sus (peste 15.000 m)." << endl;

}

}

else {

cout << "ALIAT. Nu trageti." << endl;

}

}



return 0;

}
