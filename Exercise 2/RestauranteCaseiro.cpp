#include "RestauranteCaseiro.h"

void RestauranteCaseiro::adicionaPedido(int m, int n, int q, std::string d, double p){
    mesa[m].adicionaPedido(n, q, d, p);
}

double RestauranteCaseiro::calculaTotalRestaurante(){
    double total = 0;
    for(MesaDeRestaurante m : mesa){
        total += m.calculaTotal();
    }
    return total;
}