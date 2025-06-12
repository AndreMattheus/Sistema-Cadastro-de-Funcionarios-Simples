#include <iostream>
#include "Funcionario.h"
using namespace std;

// Implementa��o dos m�todos da classe Funcionario

void Funcionario::setNome(string nome) {
    this->nome = nome;
}

string Funcionario::getNome() {
    return nome;
}

void Funcionario::setSalarioBase(float salario) {
    this->salarioBase = salario;
}

float Funcionario::getSalarioBase() {
    return salarioBase;
}

void Funcionario::setId(int id) {
    this->id = id;
}

int Funcionario::getId() {
    return id;
}

// M�todo virtual para exibir as informa��es

void Funcionario::exibirInformacoes() {
    cout << "ID: " << getId() << endl;
    cout << "Nome: " << getNome() << endl;
    cout << "Sal�rio base: " << getSalarioBase() << endl;
}