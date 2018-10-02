#include <stdio.h>
#include "dict.h"

struct pair
{
    char *value;
    int key;
};

struct dict
{
    struct pair pairs[];
}
