#include <iostream>
#include <vector>
#include <string>
using namespace std;

//   Two ways of assigning a new value to a vector via
//   reference returning function
vector<double> d_vec = {2.5, 2.4, 5.3, 53.3, 7.5};

double &change_val(int i)
{
    return d_vec[i];
}

int &ch_v(vector<int> &v, int i)
{
    if (i >= v.size())
        throw "Index out of range";
    return v[i];
}
int main()
{
    vector<int> vec = {1, 2, 3, 4, 6};
    cout << "Old vector: " << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
    int to_repl;
    cin >> to_repl;
    try
    {
        ch_v(vec, to_repl) = 5; // changes the 3d element in the vector
        cout << "New vector: " << endl;
        for (int i = 0; i < vec.size(); i++)
        {
            cout << vec[i] << " ";
        }
    }
    catch (char const *str)
    {
        cout << endl;
        cout << str;
    }
}