#include<stdio.h>

struct Point
{
  int x;
  int y;
};

int main()
{
    struct Point p = {.y = 10, .x = 20};
    printf("%d %d", p.x, p.y);
    return 0;
}