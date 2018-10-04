#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//// s t r u c t   d e f s ////

struct pair
{
    char words[32];
    char defs[64];
};

char *keys[7] = {"tump", "notionate", "rewild", "nugacity", "interloper" , "diapason", "applesauce",
                  };
char *values[7] = {"a small mound, hill, or rise of ground",
                    "strong-willed or stubborn",
                    "to return (land) to a more natural state",
                    "triviality; insignificance",
                    "a person who interferes or meddles in the affairs of others",
                    "a full, rich outpouring of melodious sound",
                    "(Slang) nonsense; bunk",
                  };

//// f u n c t i o n s ////

void display( struct pair *oof)
{
    printf("Word of the Day: %s\nDefinition: %s\n", oof->words, oof->defs);
}

struct pair random_pair()
{
    srand( time(NULL));
    struct pair out;
    int i = rand() % 7;
    strcpy( out.words, keys[i] );
    strcpy( out.defs, values[i] );
    return out;
}

struct pair * modify_pair( struct pair *oof )
{
    strcat( oof->words, "ay");
    strcat( oof->defs, "ay");
    return oof;
}

int main()
{
    struct pair test;
    test = random_pair();
    printf("\nExample of struct\n");
    display( &test);
    modify_pair( &test);
    printf("\nAdd \'ay\' to the end\n");
    display( &test);
    return 0;
}
