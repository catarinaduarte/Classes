#pragma once

#include "Conta.h"

class ContaEspecial: public Conta
{
public:
    ContaEspecial(std::string nomeCliente, double salarioMensal, int numeroConta, double saldo);
    void definirLimite();
};