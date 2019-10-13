#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H
#include "Trabalhador.h"

class TrabalhadorAssalariado:public Trabalhador
{
    public:
        TrabalhadorAssalariado();
        TrabalhadorAssalariado(std::string name, double sal);
        double calcularPagamentoSemanal();
        //double getSalMensal();
        //void setSalMensal(double sal);
    protected:
        //double salMensal;
    private:
};

#endif // TRABALHADORASSALARIADO_H
