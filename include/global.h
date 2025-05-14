#ifndef GLOBAL_H
# define GLOBAL_H

#include <unistd.h>
#include <stdio.h>
#include <string.h>

// Note: some algorithms will accept some flags but not others
typedef struct s_flags {

    bool flag_p;                    // md5
    bool flag_q;                    // md5
    bool flag_r;                    // md5
    bool flag_s                     // md5

} t_flags;

// Holds every string that has to be hashed
typedef struct s_call_list {

    char                *string_to_hash;
    struct s_call_list  *next;

} t_call_list;

int arg_parsing(int ac, char **av);

// MD5
void md5(int ac, char **av);

#endif