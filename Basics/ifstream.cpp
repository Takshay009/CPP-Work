#include <iostream>
#include <fstream>

using namespace std;  
int main()
{
    // ifstream file;             // only declaration

    ifstream file("file.txt"); // declaration and initialization // ifstream for reading and ofstream for writing
    string str;
    while (getline(file, str))
    {
        cout << str << endl;
    }
    file.close();
    return 0;
}