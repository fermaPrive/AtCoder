#include <stdio.h>

int main(void)
{

    char input[101];

    fgets(input, 101, stdin);

    int i = 0;
    while (input[i] != '\0' && input[i] != '\n') {
        input[i] -= 32;
        i++;
    }

    printf("%s", input);
    return 0;
}