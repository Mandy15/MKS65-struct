#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//// s t r u c t   d e f s ////

struct pair
{
    int num;
    char string[32];
};

char *values[3] = {"red", "blue", "yellow",
                   };
//// f u n c t i o n s ////

void display( struct pair *oof)
{
    printf("%d: %s\n", oof->num, oof->string);
}

struct pair random_pair()
{
    srand( time(NULL));
    struct pair out;
    out.num = rand();
    strcpy( out.string, values[ rand() % 3] );
    return out;
}

struct pair * modify_pair( struct pair *oof )
{
    oof->num += 16;
    strcat( oof->string, "ay");
    return oof;
}

int main()
{
    struct pair jeff;
    jeff = random_pair();
    int i = 64;
    while( i-- ) {
        display( &jeff);
        modify_pair( &jeff);
    }
    return 0;
}
