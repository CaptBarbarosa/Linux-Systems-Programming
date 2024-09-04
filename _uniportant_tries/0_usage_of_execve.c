#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    // Define the path to the executable
    char *path = "/bin/ls";

    // Define the arguments for the executable (argv array)
    char *const args[] = { "ls", "-l", NULL };

    // Define the environment variables (envp array)
    //char *const env[] = { "HOME=/", "PATH=/bin:/usr/bin", NULL };

    // Execute the program
    if (execve(path, args, NULL) == -1) { //It works even if I don't put env the last one.
        perror("execve failed");
        exit(EXIT_FAILURE);
    }

    // This line will not be reached if execve is successful
    return 0;
}

