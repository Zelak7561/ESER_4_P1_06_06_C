#include <math.h>
#include <stdio.h>

void somSegniAlterni(int nTotale , float *sumSegniAlterni);

int main(void) {

    int nTotale;
    float sumSegniAlterni;

    printf("Inserisci il numero totale: \n");
    scanf("%d", &nTotale);

    somSegniAlterni(nTotale, &sumSegniAlterni);

    printf("SumSegniAlterni: %2.2f\n", sumSegniAlterni);

    return 0;
}

void somSegniAlterni(int nTotale, float *sumSegniAlterni) {
    for (int i = 0; i < nTotale; i++) {
        float n = pow(-1, i);
        float d = 2.0 * i + 1.0;
         *sumSegniAlterni = *sumSegniAlterni + n/d;
    }
}