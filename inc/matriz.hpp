#ifndef  MATRIZ_HPP
#define MATRIZ_HPP

using namespace std;  

class Matriz {
private:
  int tamanho;
  char mp[60][60];
  int geracao;

public:
  Matriz ();
  ~Matriz ();

  void setTamanho (int tamanho);
  int getTamanho ();

  void setGeracao (int geracao);
  int getGeracao ();

  void setMp (char celula, int linha, int coluna);
  char getMp (int linha, int coluna);


};


#endif
