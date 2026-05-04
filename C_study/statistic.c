#include <stdio.h>

int main()
{
    int mu, sigma, x;
    scanf("%d", &x);
    scanf("%d", &mu);
    scanf("%d", &sigma);

    int z_score = (x - mu) / sigma;

    printf("%d", z_score);
    return 0;
}