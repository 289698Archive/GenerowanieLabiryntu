#include "tempprint.h"

void printIntTab(int **adress, int w, int k)
{
    for (int i=0; i<w; i++)
    {
        for (int j=0; j<k; j++)
        {
            switch (adress[i][j])
            {
            case 1:
                cout << char(203);
                break;
            case 2:
                cout << char(202);
                break;
            case 3:
                cout << char(205);
                break;
            case 4:
                cout << char(204);
                break;
            case 5:
                cout << char(201);
                break;
            case 6:
                cout << char(200);
                break;
            case 8:
                cout << char(185);
                break;
            case 9:
                cout << char(187);
                break;
            case 10:
                cout << char(188);
                break;
            case 12:
                cout << char(186);
                break;
            case 7: case 11: case 13: case 14:
                cout << char(177);
                break;
            default:
                cout << adress[i][j];
            }
            cout << " ";
        }
        cout << endl;
    }
}
/*


*/