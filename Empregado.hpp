#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  public:

    Empregado (std::string nome, double salario){
      _nome = nome;
      _salarioHora = salario;
    }

    double TAXAHORAEXTRA = 0.5;// taxa que converte o salario do empregado para a quantia que deve receber por hora extra
    
    int JORNADAPADRAO = 8;//quantidade de horas que um empregado trabalha num dia comum, em que não há horas extras

    void setNome (std::string nome){
      _nome = nome;
    }

    std::string getNome () {
      return _nome;
    }
    

    void setSalarioHora (double salario) {
      _salarioHora = salario;
    }      	  

    double getSalarioHora (){
      return _salarioHora;
    }

    virtual void print (double horas){
      std::cout << "Nome: " << getNome() << std::endl;
      std::cout << "Salario Mes: " << pagamentoMes(horas) << std::endl;
      std::cout << std::endl;
    }



    double pagamentoMes(double horasTrabalhadas) {
 
      double t = horasTrabalhadas;
	  
      //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > JORNADAPADRAO) {
        double x = horasTrabalhadas - JORNADAPADRAO;
        t += x * TAXAHORAEXTRA;
      }
	    return t * getSalarioHora();
    }

  protected:

    std::string _nome;

    double _salarioHora;  

};

#endif