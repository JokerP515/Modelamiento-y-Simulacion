#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

void verificarRepeticiones() {
    const int CHECK = 10000;

    ifstream archivo("sequenceStandard.txt");
    if (!archivo.is_open()) {
        cerr << "Error: No se pudo abrir el archivo sequence.txt" << endl;
        return;
    }

    unordered_set<double> vistos;
    double valor;
    int posicion = 0;

    while (archivo >> valor && posicion < CHECK) {
        if (vistos.count(valor)) {
            cout << "Repetición en la posición " 
                      << posicion << " con valor " << valor << endl;
            archivo.close();
            return;
        }
        vistos.insert(valor);
        posicion++;
    }

    archivo.close();

    if (posicion < CHECK) {
        cout << "El archivo solo contiene " << posicion 
             << " valores (menos de " << CHECK << ")" << endl;
    } else {
        cout << "No hay repeticiones en los primeros " << CHECK << " valores" << endl;
    }
}

int main() {
    fast;
    verificarRepeticiones();
    return 0;
}
