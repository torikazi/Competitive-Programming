#include<stdio.h>
int main()
{
    char a[100];
    int i;
    while(gets(a))
    {
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]=='4') printf("q");
            else if(a[i]=='5') printf("j");
            else if(a[i]=='6') printf("l");
            else if(a[i]=='7') printf("m");
            else if(a[i]=='8') printf("f");
            else if(a[i]=='9') printf("p");
            else if(a[i]=='0') printf("/");
            else if(a[i]=='-') printf("[");
            else if(a[i]=='=') printf("]");
            else if(a[i]=='q') printf("4");
            else if(a[i]=='w') printf("5");
            else if(a[i]=='e') printf("6");
            else if(a[i]=='r') printf(".");
            else if(a[i]=='t') printf("o");
            else if(a[i]=='y') printf("r");
            else if(a[i]=='u') printf("s");
            else if(a[i]=='i') printf("u");
            else if(a[i]=='o') printf("y");
            else if(a[i]=='p') printf("b");
            else if(a[i]=='[') printf(";");
            else if(a[i]==']') printf("-");
            else if(a[i]=='a') printf("7");
            else if(a[i]=='s') printf("8");
            else if(a[i]=='4') printf("q");
            else if(a[i]=='d') printf("9");
            else if(a[i]=='f') printf("a");
            else if(a[i]=='g') printf("e");
            else if(a[i]=='j') printf("t");
            else if(a[i]=='k') printf("d");
            else if(a[i]=='l') printf("c");
            else if(a[i]==';') printf("k");
            else if(a[i]=='\'') printf("-");
            else if(a[i]=='z') printf("0");
            else if(a[i]=='x') printf("z");
            else if(a[i]=='c') printf("x");
            else if(a[i]=='v') printf(",");
            else if(a[i]=='b') printf("i");
            else if(a[i]=='m') printf("w");
            else if(a[i]==',') printf("v");
            else if(a[i]=='.') printf("g");
            else if(a[i]=='/') printf("'");
            else if(a[i]=='$') printf("Q");
            else if(a[i]=='%') printf("J");
            else if(a[i]=='^') printf("L");
            else if(a[i]=='&') printf("M");
            else if(a[i]=='*') printf("F");
            else if(a[i]=='(') printf("P");
            else if(a[i]==')') printf("?");
            else if(a[i]=='_') printf("{");
            else if(a[i]=='+') printf("}");
            else if(a[i]=='Q') printf("$");
            else if(a[i]=='W') printf("%");
            else if(a[i]=='E') printf("^");
            else if(a[i]=='R') printf(">");
            else if(a[i]=='T') printf("O");
            else if(a[i]=='Y') printf("R");
            else if(a[i]=='U') printf("S");
            else if(a[i]=='I') printf("U");
            else if(a[i]=='O') printf("Y");
            else if(a[i]=='P') printf("B");
            else if(a[i]=='{') printf(":");
            else if(a[i]=='}') printf("+");
            else if(a[i]=='&') printf("A");
            else if(a[i]=='S') printf("*");
            else if(a[i]=='D') printf("(");
            else if(a[i]=='G') printf("E");
            else if(a[i]=='J') printf("T");
            else if(a[i]=='K') printf("D");
            else if(a[i]=='L') printf("C");
            else if(a[i]==':') printf("K");
            else if(a[i]=='"') printf("_");
            else if(a[i]=='Z') printf(")");
            else if(a[i]=='X') printf("Z");
            else if(a[i]=='C') printf("X");
            else if(a[i]=='V') printf("<");
            else if(a[i]=='B') printf("I");
            else if(a[i]=='M') printf("W");
            else if(a[i]=='<') printf("V");
            else if(a[i]=='>') printf("G");
            else if(a[i]=='?') printf("\"");
            else printf("%c",a[i]);
        }
        printf("\n");
    }
    return 0;
}
