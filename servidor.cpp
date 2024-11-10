#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream arquivoServidor("servidor.txt");
    string linha;

    if (arquivoServidor.is_open()) {
        cout << "***** REGISTRO DE VENDAS E PESAGENS *****" << endl;

        while (getline(arquivoServidor, linha)) {
            cout << "\n" << linha << endl;
        }

        arquivoServidor.close();
    } else {
        cout << "Erro ao abrir o arquivo do servidor!" << endl;
    }

    return 0;
}
