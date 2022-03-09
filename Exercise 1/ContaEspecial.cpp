#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(std::string n, double sm, int num, double s): Conta(n, sm, num, s){}

void ContaEspecial::definirLimite(){
    limite = salarioMensal * 3;
}