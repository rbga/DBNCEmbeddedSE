#include <stdio.h>

void printsq(int N, int M) {
    while (N > 0 && M > 0) {
        if (N > M) {
            printf("%dx%d ", M, M);
            N -= M;
        } else if (N < M) {
            printf("%dx%d ", N, N);
            M -= N;
        } else {
            printf("%dx%d ", N, N);
            break;
        }
    }

    printf("\n");
}

int main() {
    int N, M;

    printf("Enter the dimensions (N x M): ");
    scanf("%d %d", &N, &M);

    printf("Series: ");
    printsq(N, M);

    return 0;
}
