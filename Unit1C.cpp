//---------------------------------------------------------------------------

#include <vcl.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#pragma hdrstop

//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
 double x, y, z, a, b ,c, rez;
puts("\n\tx,y,z = ");		
scanf("%lf%lf%lf", &x, &y, &z);
a=pow(asin(z),2);
b=fabs(x-y);
c=pow(x,1/3.0)+pow(x,y+2);
rez=sqrt(10*c)*(a-b);
printf("\n x = %7.5lf\n y = %7.3lf\n z = %7.3lf\nRezult = %lf\n", x, y, z, rez);
puts("Press any key ... ");
getch();

        return 0;
}
//---------------------------------------------------------------------------
