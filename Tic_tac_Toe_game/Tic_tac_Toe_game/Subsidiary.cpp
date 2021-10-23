#include "Subsidiary.h"

void todo()
{
  Beep(300, 300);
}

int randNum()
{
  srand(time(NULL));
  return rand() % 2 + 1;
}

int randNumFrom1To4()
{
  //srand(time(NULL));
  return rand() % 4 + 1;
}