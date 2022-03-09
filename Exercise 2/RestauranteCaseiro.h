#pragma once

#include "MesaDeRestaurante.h"

class RestauranteCaseiro
{
public:
    MesaDeRestaurante mesa[23];

    void adicionaPedido(int m, int n, int q, std::string d, double p);
    double calculaTotalRestaurante();
};