#include "lis.h"
#include <malloc.h>
struct el
{
    int c;
    el* prev;
};
struct lis
{
    el* head;
};
struct para
{
    lis* chet;
    lis* nechet;
};
el* el_create(int x, el* y)
{
    el* e= malloc(sizeof(el));
    if(!e)
    {
        return NULL;
    }
    e->prev=y;
    e->c=x;
    return e;
}
lis* lis_create()
{
    lis* l=malloc(sizeof(lis));
    l->head=NULL;
    return l;
}
lis* add(lis* l, int x)
{
    el* e=el_create(x, l->head);
    l->head=e;
    return l;
}
int tofrom(lis* l, lis* L)
{
    if(!L->head)
    {
        return 1;
    }
   el* a=L->head;
   L->head=L->head->prev;
   a->prev=l->head;
   l->head=a;
}
void srt(lis* l, lis* m, lis* L)
{
    while(L->head)
    {
        if((L->head->c)%2==0)
        {
            tofrom(l, L);
        }
        else
        {
            tofrom(m, L);
        }
    }
}
lis* go(lis* l)
{
    lis* L=lis_create();
    while(l->head)
    {
        tofrom(L, l);
    }
    lis* m=lis_create();
    srt(l, m, L);
    return m;
}
void say_el(el* x)
{
    if(x)
    {
        say_el(x->prev);
        printf("%d ", x->c);
    }
}
void say(lis* l)
{
   say_el(l->head);
    printf("\n");
}
