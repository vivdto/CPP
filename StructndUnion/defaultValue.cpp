#include<stdio.h>

struct Point
{
  int x;
  int y;
};

int main()
{
    struct Point p = {.y = 10};
    struct Point t;
    printf("%d %d", t.x, p.x);
    return 0;
}