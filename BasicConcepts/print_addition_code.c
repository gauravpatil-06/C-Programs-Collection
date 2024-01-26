#include <stdio.h>
#include <conio.h>

void main()
{
    clrscr();

    printf("#include <stdio.h>\n");
    printf("#include <conio.h>\n");
    printf("void main()\n");
    printf("{\n");
    printf("    int a, b, c;\n");
    printf("    printf(\"Enter value of a and b: \");\n");
    printf("    scanf(\"%%d %%d\", &a, &b);\n");
    printf("    c = a + b;\n");
    printf("    printf(\"Addition = %%d\", c);\n");
    printf("    getch();\n");
    printf("}\n");

    getch();
}