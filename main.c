#include <stdio.h>  // input output
#include <stdlib.h> // proc, dinamic
void input(int *a);
int input_int();

int main(void)
{
    // %d %c %s %f %lf - спецификаторы
    // %d - int , %c - char , %s - char[10], %f - float, %lf - double
    int name = 0; // целая 2.14
    // int *p = &name;
    // scanf("%d", p);
    name = input_int();
    // input(&name);
    printf("name = %d\n", name);
    // int *p = &name;
    // printf("&name = %p name = %d &p = %p p = %p *p = %d\n", &name, name, &p,
    // p,
    //        *p);
    exit(EXIT_SUCCESS);
}

void input(int *a) { scanf("%d", a); }

int input_int()
{
    int a = 0;
    scanf("%d", &a);
    return a;
}
