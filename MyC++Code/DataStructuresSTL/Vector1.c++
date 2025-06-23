#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{
    int v_size = v.size();
    for (size_t i = 0; i < v_size; i++)
    {
        // cout << v[i] << " ";
        cout << v.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vi;
    int x;

    // cout << "Enter five integers: ";
    // for (size_t i = 0; i < 5; i++)
    // {
    //     cin >> x;
    //     vi.push_back(x);
    // }
    // display(vi);
    // vi.push_back(6.8);
    // // Change an element in a vector at index position 2 :
    // vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    // cars.at(2) = "Toyota";
    // for (string car : cars)
    // {
    //     cout << car << " ";
    // }

    //// Change the last element in a vector :
    // vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    // cars.back() = "Toyota";
    // for (string car : cars)
    // {
    //     cout << car << " ";
    // }
    // cout << "cars.back(): " << cars.back() << endl;

    // vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    //  vector<string>::iterator it = cars.begin();
    //  cout << *it;

    // The end() function returns an iterator pointing to the end of a vector.
    // Note : In C++,
    // the "end" of a vector is actually one position after the last element.
    // To access the last element, use vector.end() - 1.
    // vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    // vector<string>::iterator it = cars.end() - 1;
    // cout << *it;

    // //Remove an element from a vector
    // vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    // cars.erase(cars.begin() + 1, cars.end() - 1);
    // for (string car : cars)
    //     cout << car << " ";

    // // Access the memory block used by the vector at specified index position
    // vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    // string *data = cars.data();
    // cout << data[3];

    // // Insert an element into a vector
    // vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    // cars.insert(cars.begin() + 2, "Toyota");
    // for (string car : cars)
    //     cout << car << " ";

    // // Insert a value multiple times:
    // vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    // cars.insert(cars.begin() + 2, 3, "Toyota");
    // Insert a value 3 times
    // for (string car : cars)
    //     cout << car << " ";

    // // Change the size of a vector :
    // vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    // cars.resize(2);
    // for (string car : cars)
    //     cout << car << " ";

    // //Swap the contents of two vectors
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    vector<string> fruits = {"Apple", "Banana", "Cherry", "Orange"};
    cars.swap(fruits);
    cout << "Cars: ";
    for (string car : cars)
        cout << car << " ";

    cout << "\nFruits: ";
    for (string fruit : fruits)
        cout << fruit << " ";

    return 0;
}