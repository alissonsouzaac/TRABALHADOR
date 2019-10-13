#include "TrabalhadorAssalariado.h"
#include <string>
TrabalhadorAssalariado::TrabalhadorAssalariado()
{

}
TrabalhadorAssalariado::TrabalhadorAssalariado(std::string name, double sal):Trabalhador(name,sal){
}
/*double TrabalhadorAssalariado::getSalMensal()
{
    return salMensal;
}

void TrabalhadorAssalariado::setSalMensal(double sal)
{
    salMensal = sal;
}*/
double TrabalhadorAssalariado::calcularPagamentoSemanal()
{
    return salario/4;
}
