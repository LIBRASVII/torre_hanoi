#include <stdio.h>
#include <stdlib.h>

typedef struct hanoi {
  int cap;
  char torre_A, torre_B, torre_C;
  char *prox;
  int top;
} Hanoi;

void cria_torre(Hanoi *, int);
void push_A(Hanoi *, char);
void hanoi(Hanoi *, char, char, char);

int main() {
  Hanoi hanoi;
  int cap;

  printf("\nCap torre ==> ");
  scanf("%d", &cap);

  cria_torre(&hanoi, cap);

  return 0;
}

void hanoi(Hanoi *h, char a, char b, char c) {}

void cria_torre(Hanoi *h, int c) {
  h->prox = (char *)malloc(c * sizeof(int));
  h->top = -1;
  h->cap = c;
}

void push_A(Hanoi *h, char v) {
  h->torre_A = v;
  h->top = v;
  h->top++;
}
