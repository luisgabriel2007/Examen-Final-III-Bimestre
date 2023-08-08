#include <iostream>
#include <fstream>
using namespace std;

void archivo() {
    ifstream archivo("datos.txt");

    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo.\n";
        return;
    }

    string linea;
    cout << "Datos almacenados en el archivo:\n";
    while (getline(archivo, linea)) {
        cout << linea << endl;
    }

    archivo.close();
}

int main() {
    archivo();
    return 0;
}
