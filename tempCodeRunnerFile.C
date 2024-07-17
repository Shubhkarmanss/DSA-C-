
#include<iostream>
using namespace std;

void printelements(vector<int> &array, int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }
}
int main()
{
    int length, element;
    vector<int> array;
    cout << "Enter the length of array" << endl;
    cin >> length;
    for (int i = 0; i < length; i++)
    {
        cout << "Enter the " << i + 1 << " element in array" << endl;
        cin >> element;
        array.push_back(element);
    }
    printelements(array, length);
    cout << "Applying Selection sort we get" << endl;
}