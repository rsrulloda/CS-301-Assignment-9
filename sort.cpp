//
//
//
#include <fstream>
#include <iostream>


using namespace std::chrono;
using namespace std;
int main()
{
    ifstream inFile;
    int rows;
    inFile.open("input.txt");
    inFile >> rows;
    cout<<"rows is " <<rows << " ";
    int arr[rows];
    for (int a = 0; a < rows; a++)
        inFile >> arr[a];

    int n = sizeof(arr)/sizeof(arr[0]);

    int insertionarr[rows];
    int selectionarr[rows];
    int merge[rows];
    int bubble[rows];
    int quick[rows];
    for (int a = 0; a < rows; a++)
    {
        insertionarr[a] = arr[a];
        selectionarr[a] = arr[a];
        merge[a] = arr[a];
        bubble[a] = arr[a];
        quick[a] = arr[a];
    }

    return 0;
}