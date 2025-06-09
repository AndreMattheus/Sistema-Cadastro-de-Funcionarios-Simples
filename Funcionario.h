#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>
using namespace std;

class Funcionario {
protected:
    string nome;
    float salarioBase;

private:
    int id;

public:
    void setNome(string nome);
    string getNome() const;

    void setSalarioBase(float salario);
    float getSalarioBase() const;

    void setId(int id);
    int getId() const;

    virtual void exibirInformacoes() const;
    virtual float calcularSalarioFinal() const = 0;

    virtual ~Funcionario() {}
};

#endif

