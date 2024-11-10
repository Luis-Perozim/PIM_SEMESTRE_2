#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string nomeProduto;
    double valorProduto, valorTotal = 0;

    ofstream arquivoServidor("servidor.txt", ios::app);

    do {
        cout << "Digite o nome do produto: ";
        cin >> nomeProduto;
        if (nomeProduto == "F") {
            break;
        }

        cout << "Digite o valor a pagar: R$ ";
        cin >> valorProduto;

        cout << "-------------------------------" << endl;
        valorTotal += valorProduto;
        cout << "Total: R$ " << valorTotal << "\n- Digite F para finalizar a compra" << endl;
        cout << "-------------------------------" << endl;

        if (arquivoServidor.is_open()) {
            arquivoServidor << "Compra - Produto: " << nomeProduto << ", Valor: R$ " << valorProduto << endl;
        } else {
            cout << "Erro ao abrir o arquivo do servidor!" << endl;
        }

    } while (nomeProduto != "F");

    cout << "*****COMPRA FINALIZADA*****" << endl;

    arquivoServidor.close();

    return 0;
}
