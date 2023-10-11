#include <iostream>
using namespace std;

struct Candidatos
{
    string nome;
    int idade;
    string telefone;
    double prova;
};

void LerVetor(Candidatos vet[], int tam){
    for (int i = 0; i < tam; i++){
        cout << "Nome do " << i+1 << " candidato: ";
        cin >> vet[i].nome;
        cout << "Idade: ";
        cin >> vet[i].idade;
        cout << "Telefone: ";
        cin >> vet[i].telefone;
        cout << "Nota da Prova: ";
        cin >> vet[i].prova;
        cout << "----------------------------------------" << endl;
    }

}

int CandidatoAprovado(Candidatos vet[], int tam){
    int vencedor = 0;
    for (int i = 0; i < tam; i++){
        if (vet[i].prova > vet[vencedor].prova ){
            vencedor = i;
        } else if (vet[i].prova == vet[vencedor].prova){
            if (vet[i].idade > vet[vencedor].idade){
                vencedor = i;
            }
        }
    }
    return vencedor;
}


int main(){

    int tam;
    cout << "Quatidade de candidatos: ";
    cin >> tam;

    Candidatos vet[tam];
    LerVetor(vet, tam);

    int index_vencedor;
    index_vencedor = CandidatoAprovado(vet,tam);

    cout<<"Candidato vencedor: "<<vet[index_vencedor].nome<<endl;

    system("pause");
    return 0;
}