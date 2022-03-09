#pragma once

#include "Conta.h"
#include <string>

class Conta: public IConta
{
protected:
    std::string nomeCliente;
    double salarioMensal;
    int numeroConta;
    double saldo;
    double limite;

public:
    Conta(std::string nomeCliente, double salarioMensal, int numeroConta, double saldo);

    std::string getNomeCliente();
    double getSalarioMensal();
    int getNumeroConta();
    double getSaldo();
    double getLimite();

    void setNomeCliente(std::string nome);
    void setSalarioMensal(double salario);
    void setNumeroConta(int num);

    virtual void definirLimite();
    void sacar(double valor);
    void depositar(double valor);
    void exibirDados();
};