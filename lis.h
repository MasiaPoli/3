#ifndef LIS_H
#define LIS_H
#include <stdio.h>
#include <stdlib.h>
typedef struct el el;
typedef struct lis lis;
typedef struct para para;
el* el_create(int x, el* y); /*������ ������� �� �������� � ����������� ���������*/
lis* lis_create(); /*������ ������ ������*/
lis* add(lis* l, int x);/*��������� � ������ l ������� x*/
int tofrom(lis* l, lis* L);/*������������ ������� ������� L � l*/
void srt(lis* l, lis* m, lis* L);/*��������� L �� l � m (m - ��������)*/
lis* go(lis* l);/*��������� l �� �������� � ������ � ������� ��������*/
void say_el(el* x);/*������� ������*/
void say(lis* l);/*������� ������*/
#endif // LIS_H
