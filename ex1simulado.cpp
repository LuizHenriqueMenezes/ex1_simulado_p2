#include <cstdlib>
#include <iostream>

using namespace std;

class FilaDeArray
{
      private:
             int *VET;
             int ProximaPosicaoLivre;
             int MAX;
      public:
             FilaDeArray(int qtde)
             {
                 MAX = qtde;
                 VET = new int[MAX];
                 ProximaPosicaoLivre = 0;
             }
             void Insere(int n)
             {
                  if(ProximaPosicaoLivre < MAX) 
                  VET[ProximaPosicaoLivre++] = n;
             }
             void Mostra()
             {
                  for(int i = 0; i<ProximaPosicaoLivre; i++)
                  {
                          cout <<VET[i] <<"\n";
                  }
             }
             int Retira()
             {
                  if(ProximaPosicaoLivre > 0)
                  {
                      int ValorDeRetorno = VET[0];
                      for(int i = 1; i < ProximaPosicaoLivre; i++)
                      {
                              VET[i-1] = VET[i];
                      }
                      ProximaPosicaoLivre--;
                      return ValorDeRetorno;
                  }
             }
};

int main(int argc, char *argv[])
{
    FilaDeArray filaPar(50);
    FilaDeArray filaImpar(50);
    int n;
    
    for(int i=0; i<20; i++){
            cin>>n;
            if(n % 2 == 0){
                 filaPar.Insere(n);
                 }
            else{
                 filaImpar.Insere(n);
            }
    }
    
     cout<<"Numeros impares: "<<"\n";
    filaImpar.Mostra();
    cout<<"Numeros pares: "<<"\n";
    filaPar.Mostra();
    system("PAUSE");
    return EXIT_SUCCESS;
}