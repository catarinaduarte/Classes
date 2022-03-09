#include "Pedido.h"

Pedido::Pedido(){
    setNum(0);
    setQtd(0);
    setDesc(0);
    setPreco(0);
}

Pedido::Pedido(int n, int q, std::string d, double v){
    setNum(n);
    setQtd(q);
    setDesc(d);
    setPreco(v);
}

int Pedido::getNum(){return num;}
int Pedido::getQtd(){return qtd;}
std::string Pedido::getDesc(){return desc;}
double Pedido::getPreco(){return preco;}

void Pedido::setNum(int n){num = n;}
void Pedido::setQtd(int q){qtd = q;}
void Pedido::setDesc(std::string d){desc = d;}
void Pedido::setPreco(double v){preco = v;}

void Pedido::addQtd(int q){
    qtd += q;
}