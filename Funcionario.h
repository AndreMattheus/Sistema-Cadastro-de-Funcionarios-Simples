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
    string getNome();

    void setSalarioBase(float salario);
    float getSalarioBase();

    void setId(int id);
    int getId();

    virtual void exibirInformacoes(); // Método virtual
    virtual float calcularSalarioFinal() = 0; // Método virtual puro
    virtual ~Funcionario() {} // Destrutor
};

#endif