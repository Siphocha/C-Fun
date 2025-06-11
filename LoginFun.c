#include <stdio.h>
#include <string.h>

int main() {
    char username[] = "Sipho";
    int password[] = 1;

    int inputPassword[1];
    char inputUsername[5];


    printf("Username: ");
    fgets(inputUsername, sizeof(inputUsername), stdin);
    inputUsername[strcspn(inputUsername, "\n")] = '\0';  // Remove newline


    printf("Password: ");
    fgets(inputPassword, sizeof(inputPassword), stdin);
    inputPassword[strcspn(inputPassword, "\n")] = '\0';  // Remove newline


    if (strcmp(inputUsername, username) == 0 && strcmp(inputPassword, password) == 0) {
        printf("LOGGED IN SUCCESS! %s.\n", inputUsername);
    } else {
        printf("FAILED TO LOGIN. LEEEAVVVEEE! \n");
    }

    return 0;
}