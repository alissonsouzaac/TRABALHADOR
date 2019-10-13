#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H
#include "Trabalhador.h"

class TrabalhadorPorHora: public Trabalhador
{
    public:
        TrabalhadorPorHora();
        TrabalhadorPorHora(std::string name, double sal, double salHora);
        double calcularPagamentoSemanal(int  horasSem);
        void setValorDaHora(double valueOfHours);
        double getValorDaHora();
    protected:
        double valorDaHora;
    private:
};

#endif // TRABALHADORPORHORA_H
