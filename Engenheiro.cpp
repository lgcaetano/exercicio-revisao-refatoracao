#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  public:

    void setNumProjetos (int projetos){
      _numProjetos = projetos;
    }

    int getNumProjetos (){
      return _numProjetos;
    }

  protected:

	  int _numProjetos; // indica a quantidade de projetos em que o engenheiro está envolvido
	
};

