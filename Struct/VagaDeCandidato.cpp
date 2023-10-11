#include <iostream>
using namespace std;

struct infos{
    string nome;
    string telefone;
    int idade;
    double nota; 
};

void ler_vet(infos vet[], int tam){
    for(int i = 0; i < tam; i++){
        cout << "Nome: ";
        cin >> vet[i].nome;
        cout << "Telefone: ";
        cin >> vet[i].telefone;
        cout << "Idade: ";
        cin >> vet[i].idade;
        cout << "Nota: ";
        cin >> vet[i].nota;
        cout << "-----------------------" << endl;
    }
}

void imprimir_vet(infos vet[], int tam){
    for(int i = 0; i < tam; i++){
        cout << vet[i].nome << endl;
        cout << vet[i].telefone << endl;
        cout << vet[i].idade << endl;
        cout << vet[i].nota << endl;
        cout << "-----------------------" << endl;
    }
}

int classificado(infos vet[], int tam){
    int vencedor = 0;
    for(int i = 0; i < tam; i++){
        if (vet[i].nota > vet[vencedor].nota){
            vencedor = i;
        } else if (vet[i].nota == vet[vencedor].nota ) {
            if (vet[i].idade > vet[vencedor].idade){
                vencedor = i;
            }
        }
    }
    return vencedor;
}

int main(){

    const int tam = 2;
    infos vet[tam];

    ler_vet(vet, tam);
    imprimir_vet(vet, tam);

    int index = classificado(vet, tam);

    cout << "Classificado: " << vet[index].nome << endl;

    return 0;
}