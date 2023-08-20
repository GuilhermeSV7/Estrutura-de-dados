#include <stdio.h>
#include <string.h>

int existeString(char *arr[], int size, char *target) {
    for (int i = 0; i < size; i++) {
        if (strcmp(arr[i], target) == 0) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    char *strings[n];
    for (int i = 0; i < n; i++) {
        char temp[100];
        scanf("%s", temp);
        strings[i] = strdup(temp);
    }

    char busca[100];
    scanf("%s", busca);

    if (existeString(strings, n, busca)) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    for (int i = 0; i < n; i++) {
        free(strings[i]);
    }

    return 0;
}
