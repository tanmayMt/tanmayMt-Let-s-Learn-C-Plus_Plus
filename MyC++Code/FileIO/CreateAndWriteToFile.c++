#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string name;
    int cost;
    ofstream fout("file1.txt");

    cout << "Enter Item Name: ";
    cin >> name;
    cout << "Enter Cost: ";
    cin >> cost;

    fout << name << "\n";
    fout << cost << "\n";

    fout.close();

    ifstream fin("file1.txt");
    fin >> name;
    fin >> cost;

    cout << "\nItem: " << name;
    cout << "\nCost:" << cost << endl;
    return (0);
}