#include <iostream>
using namespace std;

int main() {
    double precoPorKg, peso, valorAPagar, valorTotalCompra = 0;

        cout<<"Digite o valor por KG do item (em reais): R$";
        cin>>precoPorKg;

        cout<<"Digite o peso do item em KG (Ex: 0.9 para 900g): ";
        cin>>peso;

        valorAPagar = precoPorKg * peso;
        
        cout<<"Peso total: "<<peso<<"Kg"<<endl;
        cout<<"Valor a pagar por este produto: R$"<<valorAPagar<<endl;
        
;
    return 0;
}