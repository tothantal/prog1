#include <stdio.h>

int main()
{
	int a;	//egesz

	int *b = &a; // egeszre mutato mutato
 
	int &r = a; // egesz referenciaja

	int c[5]; // egeszek tombje

	int (&tr) [5] = c; // egeszek tombjenek a referenciaja

	int *d[5]; // egeszre mutato mutatok tombje

	int *h (); // egeszre mutato mutatot visszaado fuggveny

	int *(*l) (); //egeszre mutato mutatot visszaado fuggvenyre mutato mutato

	int (*v (int c)) (int a, int b); //egeszet visszaado es ket egeszet kapo fuggvenyre mutato mutatot visszaado, egeszet kapo fuggveny

	int (*(*z) (int)) (int, int); // fuggvenymutato egy egeszet visszaado es ket egeszet kapo fuggvenyre mutato mutatot visszaado, egeszet kapo fuggvenyre.

}
