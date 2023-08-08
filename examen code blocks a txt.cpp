#include <iostream>
#include <fstream>
using namespace std;

void enviar_a_archivo() {
    ofstream archivo("datos.txt", ios::app);

    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo.\n";
        return;
    }

    string dato;
    cout << "Ingrese un dato: ";
    getline(cin, dato);

    archivo << dato << endl;

    archivo.close();
    cout << "Dato enviado correctamente al archivo.\n";
}

int main() {
    enviar_a_archivo();
    return 0;
}
