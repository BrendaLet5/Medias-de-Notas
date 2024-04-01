#include <stdio.h>

int main(void) {
  float nota1, nota2, sub, media,NMedia = 0; // declara as notas em racional e é igualado a 0 para definir um "limite inicial" e não pegar variaveis de programas anteriores

  printf("\n Informe uma nota1: "); // pede para o usuario digitar a nota1
  scanf("%f", &nota1);              // atribui o valor digitado à nota 1
  printf("\n Informe uma nota2: ");
  scanf("%f", &nota2);
  media = (nota1 + nota2) / 2; // calculo da media
  printf("\n a sua media é: %f", media);

  if (media >= 7) {
      printf("\n aluno APROVADO");
  } 
  else {
    if (media <= 4.9) {
        printf("\n aluno REPROVADO");
    } 
    else {
      ((media >= 5)&&(media <= 6.9));
        printf("\n aluno EM RECUPERAÇÃO");
      printf("\n Digite a nota da prova Substitutiva:");
      scanf("%f", &sub);
    }
    if  (nota1 > nota2) {
        NMedia = (nota1 + sub) / 2; 
    }
      else {
        NMedia = (nota2 + sub) / 2;
      }
      if (NMedia >=7) {
          printf("\n aluno APROVADO");
      } 
    else {
        printf("\n aluno REPROVADO");
      }
    }
    return 0;
  }