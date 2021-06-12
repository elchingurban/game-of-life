#include "colours.h"
#include "game.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void create(int *array[], int rows, int columns)
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      array[i][j] = 0;
    }
  }
}

void random_cells(int *array[], int rows, int columns)
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {

      array[i][j] = rand() % 2;
    }
  }
}
