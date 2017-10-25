#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} point_t;

// TODO:
// Create a function that constructs a point
// It should take its x and y coordinate as parameter

int point1_construct(x1, x2);

// TODO:
// Create a function that takes 2 Points as a pointer and returns the distance between them

int point2_construct(y1, y2);
int point_distance(x1, x2, y1, y2);

int main()
{
    point_t coord1;
    point_t coord2;

    point1_construct(&coord1.x, &coord1.y);
    point2_construct(&coord2.x, &coord2.y);

    printf("The first point's coordinates are: %d, %d\nThe second point's coordinates are: %d, %d\n", coord1.x, coord1.y, coord2.x, coord2.y);

    point_distance(&coord1.x, &coord1.y, &coord2.x, &coord2.y);

    double distance = point_distance(distance);

    printf("The distance is %f", distance);

    return 0;
}

int point1_construct(x, y)
{
    printf("Enter the x and y coordinates for the first point:\n");
    scanf("%d%d", x, y);
}

int point2_construct(x, y)
{
    printf("Enter the x and y coordinates for the second point:\n");
    scanf("%d%d", x, y);
}

int point_distance(x1, x2, y1, y2)
{
    int powx = x2 - x1;
    int powy = y2 - y1;
    int sqrtxy = powx + powy;

    int distance = sqrt(sqrtxy);

    return distance;
}
