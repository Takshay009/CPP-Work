#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream file("output.txt");

    if (!file.is_open())
    {
        cout << "File not found" << endl;
        return 0;
    }

    string data;

    while (getline(file, data))
    {
        cout << data << endl;
    }

    file.close();

    return 0;
}



