/*
◦ open
◦ close
◦ read
◦ write
◦ malloc
◦ free
*/

#include "../include/global.h"

#define MD_5 1

int main(int ac, char **av) {

    int algo_to_use = arg_parsing(ac, av);

    if (algo_to_use == 0) {
        return (1);
    }

    switch (algo_to_use) {
        case MD_5:
            md_5(ac, av);
            break;
        default:
            return (1);
    }

    return (0);
}