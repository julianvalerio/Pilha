#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h" //inclui os Protótipos

//Definição do tipo Pilha
struct pilha{
    int dados;
    struct pilha *prox;
};
Pilha* cria_Pilha(){
    return NULL;
}

Pilha* libera_Pilha(Pilha* pi){
    if(pi != NULL){
        Elem* no;
        while(pi != NULL){
            no = pi;
            pi = pi->prox;
            free(no);
        }
    }
    return pi;
}

int consulta_topo_Pilha(Pilha* pi, struct aluno *al){
    if(pi == NULL)
        return 0;
    if((*pi) == NULL)
        return 0;
    *al = (*pi)->dados;
    return 1;
}

Pilha* insere_Pilha(Pilha* pi, int dados){
    Pilha* novo;
    novo = (Pilha*) malloc(sizeof(Pilha));
    if(novo == NULL)
        return pi;
    novo->dados = dados;
    novo->prox = pi;
    return novo;
}

Pilha* remove_Pilha(Pilha* pi){
    if(pi == NULL)
        return pi;
    Pilha *remov =pi;
    pi = remov->prox;
    free(remov);
    return pi;
}

int tamanho_Pilha(Pilha* pi){
    if(pi == NULL)
        return 0;
    int cont = 0;
    Pilha* novo = pi;
    while(novo != NULL){
        cont++;
        novo = novo->prox;
    }
    return cont;
}

int Pilha_vazia(Pilha* pi){
    if(pi == NULL)
        return 1;
    if(*pi == NULL)
        return 1;
    return 0;
}

void imprime_Pilha(Pilha* pi){
    if(pi == NULL)
        return;
    Pilha* elem = pi;
    while(elem != NULL){
        printf(elem->dados);
        elem = elem->prox;
    }
}
