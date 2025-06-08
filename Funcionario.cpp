#include "Funcionario.h"
#include <iostream>

// Implementa��o dos m�todos de Funcionario.h

void Funcionario::setNome(string nome) {
    this->nome = nome;
}

string Funcionario::getNome() const {
    return nome;
}

void Funcionario::setSalarioBase(float salario) {
    this->salarioBase = salario;
}

float Funcionario::getSalarioBase() const {
    return salarioBase;
}

void Funcionario::setId(int id) {
    this->id = id;
}

int Funcionario::getId() const {
    return id;
}

void Funcionario::exibirInformacoes() const {
    cout << "ID: " << id << endl;
    cout << "Nome: " << nome << endl;
    cout << "Sal�rio base: " << salarioBase << endl;
}
