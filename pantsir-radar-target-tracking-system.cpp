#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Avion {
    int frecventa;
    int altitudine;
    int viteza;
};

int main() {
    int n;
    Avion radar[100];

    
    srand(static_cast<unsigned int>(time(0)));

    cout << "Introduceti numarul de avioane (max 100): ";
    cin >> n;
    if (n > 100) n = 100;

    
    for (int i = 1; i <= n; i++) {
        
        if (rand() % 3 == 0) {
            radar[i].frecventa = 4200;
        }
        else {
            radar[i].frecventa = 1000 + (rand() % 8000); 
        }

       
        radar[i].altitudine = rand() % 18001;

    
        radar[i].viteza = 300 + (rand() % 2701);
    }

    cout << endl << "=== REZULTATE RADAR PANTSIR ===" << endl;
    for (int i = 1; i <= n; i++) {
        cout << endl << "Avionul " << i << " [Freq: " << radar[i].frecventa
            << ", Alt: " << radar[i].altitudine << "m, Viteza: " << radar[i].viteza << " km/h]: ";

        if (radar[i].frecventa != 4200) {
            cout << "AVION INAMIC! ";
            if (radar[i].altitudine >= 50 && radar[i].altitudine <= 15000) {
                cout << "TINTA VALABILA! Trageti!" << endl;
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
