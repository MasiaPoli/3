#include <stdio.h>
#include <stdlib.h>
#include "lis.h"
int main()
{
    printf("Write number and next the stack!\n");
    int n;
    scanf("%d", &n);
    lis* l=lis_create();
    for(int i=0; i<n; i++)
    {
        int x;
        scanf("%d", &x);
        add(l, x);
    }
    lis* m=go(l);
    say(l);
    say(m);
    return 0;
}
