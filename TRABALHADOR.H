#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include <string>

class Trabalhador
{
    public:
        Trabalhador();
        Trabalhador(std::string name, double payment);
        void setNome(std::string name);
        void setSalario(double payment);
        double getSalario();
        std::string getNome();
    protected:
    std::string nome;
    double salario;
    private:
};

#endif // TRABALHADOR_H
