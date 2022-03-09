#include "Conta.h"
#include <iostream>

std::string Conta::getNomeCliente() { return nomeCliente; }
double Conta::getSalarioMensal() { return salarioMensal; }
int Conta::getNumeroConta() { return numeroConta; }
double Conta::getSaldo() { return saldo; }
double Conta::getLimite() { return limite; }

void Conta::setNomeCliente(std::string nome) { nomeCliente = nome; }
void Conta::setSalarioMensal(double salario) { salarioMensal = salario; }
void Conta::setNumeroConta(int num) { numeroConta = num; }

Conta::Conta(std::string nomeCliente, double salarioMensal, int numeroConta, double saldo)
{
    this->nomeCliente = nomeCliente;
    this->salarioMensal = salarioMensal;
    this->numeroConta = numeroConta;
    this->saldo = saldo;

    definirLimite();
}

void Conta::definirLimite()
{
    limite = salarioMensal * 2;
}

void Conta::sacar(double valor)
{
    saldo -= valor;
}

void Conta::depositar(double valor)
{
    saldo += valor;
}

void Conta::exibirDados()
{
    std::cout << "Nome: " << nomeCliente << std::endl
              << "Salario: " << salarioMensal << std::endl
              << "Numero: " << numeroConta << std::endl
              << "Saldo: " << saldo << std::endl
              << "Limite: " << limite << std::endl << std::endl;
}