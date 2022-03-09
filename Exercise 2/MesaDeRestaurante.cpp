#include "MesaDeRestaurante.h"

void MesaDeRestaurante::adicionaPedido(int n, int q, std::string d, double p){
    for(Pedido k : conta){
        if(k.getNum() == n){
            k.setQtd(k.getQtd() + q);
            return;
        }
    }

    conta.push_back(Pedido(n, q, d, p));
}

void MesaDeRestaurante::cancelaPedidos(){
    for(Pedido k : conta){
        k = Pedido();
    }
}

double MesaDeRestaurante::calculaTotal(){
    double total = 0;
    for(Pedido k : conta){
        total += (k.getPreco() * k.getQtd());
    }
    return total;
}