#pragma once

#include <string>

class Pedido
{
private:
    int num;
    int qtd;
    std::string desc;
    double preco;

public:
    Pedido();
    Pedido(int n, int q, std::string d, double v);

    int getNum();
    int getQtd();
    std::string getDesc();
    double getPreco();

    void setNum(int);
    void setQtd(int);
    void setDesc(std::string);
    void setPreco(double);

    void addQtd(int q);
};