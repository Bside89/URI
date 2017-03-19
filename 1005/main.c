// URI Online Judge | 1005
// Link: https://www.urionlinejudge.com.br/judge/pt/problems/view/1005

#include <stdio.h>


int main() {

    double A, B, media;

    scanf("%lf", &A);
    scanf("%lf", &B);
    if (A < 0 || B < 0 || A > 10 || B > 10) {
        return 1;
    }
    media = ((A * 3.5) + (B * 7.5)) / (11);

    printf("MEDIA = %.05lf\n", media);

    return 0;
}