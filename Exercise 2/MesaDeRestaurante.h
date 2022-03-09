#pragma once

#include "Pedido.h"
#include <vector>

class MesaDeRestaurante{
private:
    std::vector<Pedido> conta;

public:
    void adicionaPedido(int n, int q, std::string d, double p);
    void cancelaPedidos();
    double calculaTotal();
};