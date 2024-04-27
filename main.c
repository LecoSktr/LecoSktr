#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
      setlocale(LC_ALL, "Portuguese");

    // Declaração das variáveis para armazenar as notas do aluno
    float nota1, nota2, nota3;

    // Solicita ao usuário que insira as notas
    printf("Insira a primeira nota: ");
    scanf("%f", &nota1);

    printf("Insira a segunda nota: ");
    scanf("%f", &nota2);

    printf("Insira a terceira nota: ");
    scanf("%f", &nota3);

    // Calcula a média aritmética das notas
    float media = (nota1 + nota2 + nota3) / 3.0;

    // Verifica se o aluno foi aprovado ou reprovado
    if (media >= 5.0) {
        printf("O aluno foi aprovado com média %.2f\n", media);
    } else {
        printf("O aluno foi reprovado com média %.2f\n", media);
    }

    return 0;
}
