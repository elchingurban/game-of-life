#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "./game/game.h"
#include "./console/board_drawer.h"

int main(int argc, char *argv[])

{
  srand(time(0));
  int rows, columns;

  rows = atoi(argv[1]);

  if (rows <= 0)
  {
    printf("Row count must be greater than zero");
    return -1;
  }

  columns = atoi(argv[2]);

  if (columns <= 0)
  {
    printf("Column count must be greater than zero");
    return -1;
  }

  int *arr[rows];
  for (int i = 0; i <= rows; i++)
  {
    arr[i] = (int *)malloc(columns * sizeof(int));
  }

  create(arr, rows, columns);
  random_cells(arr, rows, columns);
  print(arr, rows, columns);

  for (int i = 0; i < rows; i++)
  {
    free(arr[i]);
  }

  return 0;
}