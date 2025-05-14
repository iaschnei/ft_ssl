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

//TODO: Make it a while loop that will call the hash algorithm for every input method given
//TODO:  -> Can be a file, stdin or a litteral string

// Ex:
//      echo "bonjour" | ./ft_ssl md5 -p -s "salut" file1 file2
//      loop 1 ->  md5("bonjour")
//      loop 2 ->  md5("salut")
//      loop 3 ->  md5(~content of file1~)
//      etc...
// Taking into account potential flags given such as -q or -r (pass them as argument to md5)
// Maybe create a structure "flags" containing all possible flags to make it easy to check

//* Some hash algo won't take the same flags so there needs to be a check about that somewhere


int main(int ac, char **av) {

    int algo_to_use = arg_parsing(ac, av);

    if (algo_to_use == 0) {
        return (1);
    }

    switch (algo_to_use) {
        case MD_5:
            md5(ac, av);
            break;
        default:
            return (1);
    }

    return (0);
}