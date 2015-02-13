#include <stdio.h>
int main(int argc, char** argv)
{
	char c[10] = "Hola";
	printf("%s", &c[1]);
	getchar();
}
/*

char=1byte=8bits=256 --> {-128,128}
Cadena: munt de memoria que acaba en 0


*/