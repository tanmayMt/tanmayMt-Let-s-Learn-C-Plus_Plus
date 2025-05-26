#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string name;
    int cost;

    ifstream fin("file1.txt");
    fin >> name;
    fin >> cost;

    cout << "\nItem: " << name;
    cout << "\nCost:" << cost << endl;

    fin.close();
    return (0);
}