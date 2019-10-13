#include "Trabalhador.h"

Trabalhador::Trabalhador()
{
    setNome("Joao");
    setSalario(0.0);
}
Trabalhador::Trabalhador(std::string name, double payment)
{
    setNome(name);
    setSalario(payment);
}
void Trabalhador::setNome(std::string name)
{
    nome = name;
}
void Trabalhador::setSalario(double payment)
{
    salario = payment;
}
double Trabalhador::getSalario()
{
    return salario;
}

std::string Trabalhador::getNome()
{
    return nome;
}
