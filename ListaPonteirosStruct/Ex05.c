/*Determine o valor especificado em cada item abaixo considerando que foi executado as seguintes
instru��es (assuma que o endere�o de x � 1000 e de y � 1004):
int x = 10, y=20;
int* p1;
int* p2;
p1 = &x;
p2 = &y;
(*p1)++;
(a) x
(b) y
(c) &x
(d) &y
(e) p1
(f) p2
(g) *p1 + *p2
(h) *(&x)
(i) &(*p2)
*/
/*
a) 11
b) 20
c) 1000
d) 1004
e) 1000
f) 1004
g) 31
h) 11
i) 1004
*/
#include <stdio.h>
int main(){
int x=10,y=20;
int* p1;
int* p2;
p1 = &x;
p2 = &y;
(*p1)++;
printf("%d", &(*p2));
return 0;
}
