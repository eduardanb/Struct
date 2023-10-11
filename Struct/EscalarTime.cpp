#include <iostream>
using namespace std;

struct jogadores {
    string nome;
    string posicao;
    int numero;
};

void ler_vet(jogadores vet[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << "Nome do jogador: ";
        cin >> vet[i].nome;
        cout << "Posicao: ";
        cin >> vet[i].posicao;
        cout << "Numero: ";
        cin >> vet[i].numero;
        cout << "---------------------------------" << endl;
    }
}

void imprimir_vet(jogadores vet[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << vet[i].nome << endl;
        cout << vet[i].posicao << endl;
        cout << vet[i].numero << endl;
        cout << "---------------------------------" << endl;
    }
}

void realizarSubstituicao(jogadores vet[], int indiceTitular) {
    jogadores novoReserva;
    cout << "Digite os dados do jogador reserva:\n";
    cout << "Nome: ";
    cin >> novoReserva.nome;
    cout << "Posicao: ";
    cin >> novoReserva.posicao;
    cout << "Numero: ";
    cin >> novoReserva.numero;

    vet[indiceTitular - 1] = novoReserva;
}

int main() {
    const int time = 19;
    jogadores vet[time];

    cout << "---------Dados dos Jogadores---------" << endl;
    ler_vet(vet, 11);

    cout << "----------Escalacao Inicial----------" << endl;
    imprimir_vet(vet, 19);

    cout << "--------Realizar Substituicao--------" << endl;
    int indice_titular;
    cin >> indice_titular;

    realizarSubstituicao(vet, indice_titular);

    cout << "----------Escalacao Atualizada--------" << endl;
    imprimir_vet(vet, 19);

    return 0;
}