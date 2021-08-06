


/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int n;
  scanf ("%d", &n);

  int a[n][n], b[n * n]; // b[n*n] because 3*3 na 9 numbers irukum


  // getting elements
  for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
{
 scanf ("%d", &a[i][j]);
}
    }


  // 2d to 1d
  int k = 0;
  for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
{
 b[k] = a[i][j];
 k++;
}
    }

  // sort the 1D
  int c;
  for (int i = 0; i < n * n; i++)
    {
      for (int j = i + 1; j < n * n; j++)
{
 if (b[i] > b[j])
   {
     c = b[i];
     b[i] = b[j];
     b[j] = c;
   }
}
    }

  // 1D to 2D
  int l = 0;
  for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
{
 a[i][j] = b[l];
 l++;
}
    }

  //print
  for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
{
 printf ("%d", a[i][j]);
}
printf("\n");
    }


  return 0;
}

