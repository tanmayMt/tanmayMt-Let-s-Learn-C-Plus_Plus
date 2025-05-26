#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string name;
    int cost;
    bool flag;
    flag = true;
    char ans;
    ofstream fout("file1.txt");

    do
    {
        cout << "Enter Item Name: ";
        cin >> name;
        fout << name << "\n";

        cout << "Enter Cost: ";
        cin >> cost;
        fout << cost << "\n";

        cout << "Do you want to continue?(Y/N): ";
        cin >> ans;
    } while (ans == 'Y' || ans == 'y');

    fout.close();

    ifstream fin("file1.txt");
    fin >> name;
    fin >> cost;

    cout << "\nItem: " << name;
    cout << "\nCost:" << cost << endl;
    return (0);
}