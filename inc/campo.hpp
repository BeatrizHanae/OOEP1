#ifndef  CAMPO_HPP
#define CAMPO_HPP

using namespace std;

class Campo {
private:
  int tamanho;
  char campo[60][60];
  int geracao;

public:
  Campo ();

  void setTamanho (int tamanho);
  int getTamanho ();

  void setGeracao (int geracao);
  int getGeracao ();

  void setCampo (char celula, int linha, int coluna);
  char getCampo (int linha, int coluna);


};


#endif
