void bubble_sort (int vetor[], int n) {
    int k, j, aux;

    for (k = 1; k < n; k++) {
        printf("\n[%d] ", k);

        for (j = 0; j < n - 1; j++) {
            printf("%d, ", j);

            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

int main(){

    int v[10] = {8, 5, 7, 1, 9, 0, 2, 6, 4, 3};

    printf("\nVetor original:\n");
    for(int i = 0; i < 10; i++){
        printf("%i ", v[i]);
    }

    printf("\n");

    bubble_sort(v, 10);

    printf("\n\nVetor ordenado:\n");
    for(int i = 0; i < 10; i++){
        printf("%i ", v[i]);
    }
    printf("\n");

    return 0;
}