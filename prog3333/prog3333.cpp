#include <stdio.h>
#include <math.h>
struct TRIANGLE
{
    int a;
    int b;
    int c;
};
void geron(struct TRIANGLE* square, double S[3])
{
    double P[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        P[i] = (square[i].a + square[i].b + square[i].c) / 2;
        S[i] = sqrt(P[i] * (P[i] - square[i].a) * (P[i] - square[i].b) * (P[i] - square[i].c));
        printf("ploshad %d treugolnika: %1.2f\n", i + 1, S[i]);
    }
}
int naib(double S[3], int num)
{
    int i;
    double b = 0;
    for (i = 0; i < 3; i++) 
        if (S[i] > b)
            {
                num = i;
                b = S[i];
            }
    return num + 1;
}
void scan(struct TRIANGLE* square)
{
    int i;
    for (i = 0; i < 3; i++)
        scanf_s("%d%d%d", &square[i].a, &square[i].b, &square[i].c);
}
int main()
{
    FILE* f;
    double S[3];
    int i = 0, nomi,  num = 0;
    struct TRIANGLE square[3];
    printf("vvedite dlinu a,b,c dlya 3 treug: \n");
    scan(square);
    geron(square, &S[3]);
    nomi = naib(&S[3], num);
    fopen_s(&f, "d:\\sss.txt", "w");
    printf("\nTreug s naib. ploshad. - %d", nomi);
    fprintf(f,"Treug s naib. ploshad. - %d", nomi);
    fclose(f);
    return 0;
}