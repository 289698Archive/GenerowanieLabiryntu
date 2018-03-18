#ifndef MAZECLASS_H
#define MAZECLASS_H

#include <iostream>
#include "mazegen.h"
#include "tempprint.h"

using namespace std;

class MazeClass
{
public:

    MazeClass();
    ~MazeClass();

protected:

    int mazeHeight;
    int mazeWidth;
    int **mazeTab;

    void reserveIntMemory (int **&adress, int w, int k);
    void clearIntMemory (int **&adress, int w);
    int getIntValue();

private:

    MazeGen *generating;

};

#endif // MAZECLASS_H
