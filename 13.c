#include <stdio.h>
#include<conio.h>
#include<string.h>
void Htower(int,char,char,char);
void Htower(int n, char frod, char torod, char aurod)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c", frod, torod);
        return;
    }
    Htower(n-1, frod, aurod, torod);
    printf("\n Move disk %d from rod %c to rod %c", n, frod, torod);
    Htower(n-1, aurod, torod, frod);
    getch();
}
 
int main()
{
    int n = 4; 
    Htower(n, 'A', 'C', 'B'); 
    return 0;
}
