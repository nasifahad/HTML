#include <stdio.h>
int main()
{
      double x;
      scanf("%lf", &x);

     int y = x;

      printf("NOTAS: \n");

      int a = x/100;
      printf("%d nota(s) de R$ 100.00\n", a);

      int b = (x - (a*100))/50;
      printf("%d nota(s) de R$ 50.00\n", b);

      int c = (x - (a * 100) - (b * 50))/20;
      printf("%d nota(s) de R$ 20.00\n", c);

      int d = (x - (a * 100) - (b * 50) - (c * 20))/10;
      printf("%d nota(s) de R$ 10.00\n", d);

      int e = (x - (a * 100) - (b * 50) - (c * 20) - (d * 10))/5;
      printf("%d nota(s) de R$ 5.00\n", e);

      int f = (x - (a * 100) - (b * 50) - (c * 20) - (d * 10) - (e * 5))/2;
      printf("%d nota(s) de R$ 2.00\n", f);

      double z = x - y;
      printf("MOEDAS: \n");

      int g = (x - (a * 100) - (b * 50) - (c * 20) - (d * 10) - (e * 5) - (f * 2))/1;
      printf("%d moeda(s) de R$ 1.00\n", g);

      int p = z / 0.50;
      printf("%d moeda(s) de R$ 0.50\n", p);

      int q = (z - (p*0.50))/0.25;
      printf("%d moeda(s) de R$ 0.25\n", q);

      int r = (z - (p * 0.50) - (q * 0.25))/0.10;
      printf("%d moeda(s) de R$ 0.10\n", r);

      int s = (z - (p * 0.50) - (q * 0.25) - (r * 0.10))/0.05;
      printf("%d moeda(s) de R$ 0.05\n", s);

      int t = (z - (p * 0.50) - (q * 0.25) - (r * 0.10) - (s * 0.05))/0.01;
      printf("%d moeda(s) de R$ 0.01\n", t);

      return 0;
}
