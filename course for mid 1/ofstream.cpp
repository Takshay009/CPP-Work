#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    ofstream file; // only declaration
    ofstream file("file.txt");
    ofstream file1("file2.txt");

    // declaration and initialization
    // here ofstream is class and file is object of that class so if we want import multiple file at a time then we have to change the object name
    // for each file or we have to use different object name for each file
    if (file.is_open())
    {
        cout << "File got found" << endl;
        file << "Hello World!" << endl;
    }
    else
    {
        cout << "Error opening file" << endl;
    }

    file.close();
    return 0;
}