#pragma once

class IConta
{
protected:
    virtual void sacar(double valor) = 0;
    virtual void depositar(double valor) = 0;
};