#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

typedef struct pilha Pilha;

Pilha* cria_Pilha();
void libera_Pilha(Pilha* pi);
int consulta_topo_Pilha(Pilha* pi, int valor);
Pilha* insere_Pilha(Pilha* pi, int valor);
Pilha* remove_Pilha(Pilha* pi);
int tamanho_Pilha(Pilha* pi);
int Pilha_vazia(Pilha* pi);
void imprime_Pilha(Pilha* pi);

#endif // PILHA_H_INCLUDED
