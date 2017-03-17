#include <stdio.h>

int main(void) {

    short i;
    float media, pf, score[4];

    for (i = 0; i < 4; ++i) {
        scanf("%f", &score[i]);
    }
    media = (2 * score[0] + 3 * score[1] + 4 * score[2] + score[3]) / 10;
    printf("Media: %.1f\n", media);
    if (media >= 7.0) {
        puts("Aluno aprovado.");
    } else if (media < 5.0) {
        puts("Aluno reprovado.");
    } else {
        puts("Aluno em exame.");
        scanf("%f", &pf);
        printf("Nota do exame: %.1f\n", pf);
        if (pf < 5.0) {
            puts("Aluno reprovado.");
        } else {
            puts("Aluno aprovado.");
        }
        printf("Media final: %.1f\n", (media + pf) / 2.0);
    }

    return 0;
}