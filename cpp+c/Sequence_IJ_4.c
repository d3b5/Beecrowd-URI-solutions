// https://www.urionlinejudge.com.br/judge/en/problems/view/1098
//by: https://github.com/chvillap/URI/blob/master/1_beginner/1098.c
#include <stdio.h>

int main()
{
    int i, j;
    float frac;

    for (i = 0; i <= 20; i += 2) {
        frac = i / 10.f;
        for (j = 1; j <= 3; ++j)
            printf("I=%g J=%g\n", frac, j + frac);
    }

    return 0;
}