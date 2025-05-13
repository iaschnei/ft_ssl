#include "../include/global.h"

static int known_command(char *command);

//! This is going to change as more algos are added
static char available_commands[1] = {"md5"};

int arg_parsing(int ac, char **av) {

    if (ac < 2) {
        write(1, "usage: ft_ssl command [flags] [file/string]\n", 44);
        return (0);
    }

    int command = known_command(av[1]);

    if (command == -1) {
        write(1, "Unknown command '", 17);
        write(1, av[1], strlen(av[1]));
        write(1, "'. Available commands:\n", 23);
        write(1, "md5\n", 4);
        // More to come
        write(1, "Available flags:\n", 17);
        write(1, "-p -q -r -s\n", 11);
    }

    return (command);

    return (0);
}

//! This is going to change as more algos are added
static int known_command(char *command) {

    for (int i = 0; i < 1; i++ ) {
        if (strcmp(command, available_commands[0]) == 0) {
            return (i);
        } 
    }

    return (-1);
}


