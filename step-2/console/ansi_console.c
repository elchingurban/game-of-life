#include <stdio.h>
#include <stdlib.h>
#include "board_drawer.h"

void print(int *array[], int rows, int columns)
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      if (array[i][j] == 0)
        printf(BRED " %d ", array[i][j]);
      else
        printf(BBLU " %d ", array[i][j]);
    }
    printf(reset "\n");
  }
}