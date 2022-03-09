#include <iostream>
#include <vector>
#include "ContaEspecial.h"
#include "Conta.h"

using namespace std;

int main(void){
    vector<Conta> banco;
    banco.push_back(Conta("Catarina", 1000, 3, 0));
    banco.push_back(ContaEspecial("Duarte", 2000, 3, 888));

    for(auto k : banco){
        k.exibirDados();
    }

    banco[0].sacar(300.00);
    banco[1].depositar(200.00);
    
    for(auto k : banco){
        k.exibirDados();
    }
    
    banco[0].setSalarioMensal(2000);
    banco[1].setSalarioMensal(1500);

    for(auto k : banco){
        k.definirLimite();
        k.exibirDados();
    }

    return 0;
}