#include <iostream>
using namespace std;

int main() {

	char nomeProduto;
	double valorProduto, valorTotal;

	do {
		cout<<"Digite o nome do produto: ";
		cin>>nomeProduto;
		if(nomeProduto == 'F') {
			break;
		}

		cout<<"Digite o valor a pagar: R$";
		cin>>valorProduto;

		cout<<"-------------------------------"<<endl;
		valorTotal += valorProduto;
		cout<<"TOTAL: R$"<<valorTotal<<"\ndigite F para finalizar a compra"<<endl;
		cout<<"-------------------------------"<<endl;

	} while(nomeProduto != 'F');

	cout<<"*****COMPRA FINALIZADA*****"<<endl;

	return 0;
}