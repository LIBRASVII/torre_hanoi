#include <stdio.h>
#include <stdlib.h>

typedef struct pilha {
  int origem, destino, aux;
  int *top;
} Pilha;

typedef struct torres {
  char *torre_A, *torre_B, *torre_C;
  int info;
  struct hanoi *prox;
} Torres;

Pilha *cria_torre(void);
void push_torre(Pilha *, char);
void hanoi(Pilha *, char, char, char);

int main() { return 0; }

void hanoi(Pilha *h, char a, char b, char c) { h->origem = a; }

Pilha *cria_torre(void) {
  Pilha *t = (Pilha *)malloc(sizeof(int));
  t->top = NULL;
  t->origem = 0;
  return t;
}

void push_torre(Pilha *h, char v) {
  Pilha *t = (Pilha *)malloc(sizeof(Pilha));
  t->origem = v;
  t->destino = h->top;
  h->top = t;
}

int hanoi_vazia(Pilha *h) { return h->top == -1; }
