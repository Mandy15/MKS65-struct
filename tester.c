#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct pair
{
    int key;
    char * value;
};

void display( struct pair *oof)
{
    printf("%d: %s\n", oof->key, oof->value);
}

struct pair random_pair()
{
    return NULL;
}

int main()
{
    struct pair jeff;
    jeff.key = 10;
    jeff.value = "okay";
    display( &jeff);
    return 0;
}
