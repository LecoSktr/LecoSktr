#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
      setlocale(LC_ALL, "Portuguese");

    // Declara��o das vari�veis para armazenar as notas do aluno
    float nota1, nota2, nota3;

    // Solicita ao usu�rio que insira as notas
    printf("Insira a primeira nota: ");
    scanf("%f", &nota1);

    printf("Insira a segunda nota: ");
    scanf("%f", &nota2);

    printf("Insira a terceira nota: ");
    scanf("%f", &nota3);

    // Calcula a m�dia aritm�tica das notas
    float media = (nota1 + nota2 + nota3) / 3.0;

    // Verifica se o aluno foi aprovado ou reprovado
    if (media >= 5.0) {
        printf("O aluno foi aprovado com m�dia %.2f\n", media);
    } else {
        printf("O aluno foi reprovado com m�dia %.2f\n", media);
    }

    return 0;
}
