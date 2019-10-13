#include "TrabalhadorPorHora.h"
TrabalhadorPorHora::TrabalhadorPorHora()
{
    setValorDaHora(0.0);
}
TrabalhadorPorHora::TrabalhadorPorHora(std::string name, double sal, double salHora):Trabalhador(name, sal)
{
    setValorDaHora(salHora);
}

void TrabalhadorPorHora::setValorDaHora(double valueOfHours)
{
    valorDaHora = valueOfHours;
}
double TrabalhadorPorHora::getValorDaHora()
{
    return valorDaHora;
}

double TrabalhadorPorHora::calcularPagamentoSemanal(int  horasSem){
    if(horasSem > 0 && horasSem < 41){
        return valorDaHora*horasSem;
    }else{
        int horasExtras;
        horasExtras = (horasSem-40);
        horasSem = (horasSem - horasExtras);
        horasExtras = (horasExtras)*1.5*valorDaHora;
        horasSem = horasSem*valorDaHora;
        return horasExtras + horasSem;
    }
}
