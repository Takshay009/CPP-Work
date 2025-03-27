#include <bits/stdc++.h> // This will include all standard libraries

using namespace std;
int main()
{
    int arr[8];
    int *ptr = new int[8];
    arr[1] = 10;
    int a = 10;
    int b = 20;


    // swap(a, b);
    // cout << a << " " << b << endl;   // for swap two values


    cout << min(a, b) << endl;    // for minimum value
    cout << max(a, b) << endl;     // for maximum value
    

    vector<int> v1;   // vector intialization , v1 is a vector of integer type
    v1.push_back(10);   // push_back is used to insert the element in the vector
    v1.push_back(40);
    v1.push_back(30);
    v1.push_back(50);
    v1.push_back(20);

    // cout << v1.size() << endl;
    // cout << v1[0] << endl;
    // cout << v1.at(1) << endl;

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }

    // sort(v1.begin(), v1.end()); // ascending order

    sort(v1.begin(), v1.end()); // decending order
    reverse(v1.begin(), v1.end()); // reverse the vector+
    cout << endl;

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }

    return 0;
}