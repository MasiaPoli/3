#ifndef LIS_H
#define LIS_H
#include <stdio.h>
#include <stdlib.h>
typedef struct el el;
typedef struct lis lis;
typedef struct para para;
el* el_create(int x, el* y); /*Создаёт элемент по значению и предыдущему указателю*/
lis* lis_create(); /*Создаёт пустой список*/
lis* add(lis* l, int x);/*Добавляет к списку l элемент x*/
int tofrom(lis* l, lis* L);/*Перекидывает верхний элемент L в l*/
void srt(lis* l, lis* m, lis* L);/*Разделяет L на l и m (m - нечётный)*/
lis* go(lis* l);/*Разделяет l на нечётный и чётный и возвращ нечётный*/
void say_el(el* x);/*Выводит список*/
void say(lis* l);/*Выводит список*/
#endif // LIS_H
