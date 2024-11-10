#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string nomeProduto;
    double precoPorKg, peso, valorAPagar;

    cout << "Digite o nome do produto: ";
    cin >> nomeProduto;

    cout << "Digite o valor por KG do item (em reais): R$ ";
    cin >> precoPorKg;

    cout << "Digite o peso do item em KG (Ex: 0.9 para 900g): ";
    cin >> peso;

    valorAPagar = precoPorKg * peso;

    cout << "\nProduto pesado: " << nomeProduto << endl;
    cout << "Peso total: " << peso << "Kg" << endl;
    cout << "Valor a pagar por este produto: R$ " << valorAPagar << endl;

    ofstream arquivoServidor("servidor.txt", ios::app);

    if (arquivoServidor.is_open()) {
        arquivoServidor << "Pesagem - Produto: " << nomeProduto << ", Peso: " << peso << "Kg, Valor: R$ " << valorAPagar << endl;
    } else {
        cout << "Erro ao abrir o arquivo do servidor!" << endl;
    }

    arquivoServidor.close();

    return 0;
}
