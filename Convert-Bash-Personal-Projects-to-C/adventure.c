#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define NUM_COMMANDS 10

int main()
{
    // Define an array of commands to be used in the adventure
    char* commands[] = {"cd", "ls", "pwd", "less", "file", "ln", "cp", "mv", "rm", "mkdir"};

    // Start the adventure
    while (1) {
        // Ask the player which command they would like to learn next
        printf("Which command would you like to learn next?\n");
        printf("Enter the number corresponding to the command:\n");
        for (int i = 0; i < NUM_COMMANDS; i++) {
            printf("%d) %s\n", i + 1, commands[i]);
        }

        // Read the player's choice
        char choice[10];
        fgets(choice, sizeof(choice), stdin);
        int cmd_choice = atoi(choice) - 1;

        // Check if the choice is valid
        if (cmd_choice < 0 || cmd_choice >= NUM_COMMANDS) {
            printf("Invalid choice. Please try again.\n");
            continue;
        }

        // Execute the selected command
        char cmd[100];
        int result;
        if (cmd_choice == 0) {
            printf("Enter the directory you would like to change to (e.g. 'cd /etc'):\n");
            fgets(cmd, sizeof(cmd), stdin);
            cmd[strcspn(cmd, "\n")] = 0; // remove newline character from input
            result = chdir(cmd);
            if (result == 0) {
                printf("The 'cd' command was executed successfully.\n");
                printf("You are now in the %s directory.\n", getcwd(NULL, 0));
            } else {
                printf("The 'cd' command failed. Please try again.\n");
            }
        } else if (cmd_choice == 1) {
            printf("Enter the 'ls' command you would like to execute (e.g. 'ls -al'):\n");
            fgets(cmd, sizeof(cmd), stdin);
            cmd[strcspn(cmd, "\n")] = 0; // remove newline character from input
            result = system(cmd);
            if (result == 0) {
                printf("The 'ls' command was executed successfully.\n");
            } else {
                printf("The 'ls' command failed. Please try again.\n");
            }
        } else if (cmd_choice == 2) {
            printf("Enter the 'pwd' command you would like to execute (e.g. 'pwd'):\n");
            fgets(cmd, sizeof(cmd), stdin);
            cmd[strcspn(cmd, "\n")] = 0; // remove newline character from input
            char* cwd = getcwd(NULL, 0);
            printf("%s\n", cwd);
            free(cwd);
            if (cwd != NULL) {
                printf("The 'pwd' command was executed successfully.\n");
                printf("You are in the %s directory.\n", getcwd(NULL, 0));
            } else {
                printf("The 'pwd' command failed. Please try again.\n");
            }
        } else if (cmd_choice == 3) {
            printf("Enter the 'less' command you would like to execute (e.g. 'less file.txt'):\n");
            fgets(cmd, sizeof(cmd), stdin);
            cmd[strcspn(cmd, "\n")] = 0; // remove newline character from input
           

