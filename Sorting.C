// SELECTION SORT

// #include <iostream>
// #include <vector>
// #include <utility> //used this or use #include<algorithm> to use inbuilt swap function
// using namespace std;

// void selectionsort(vector<int> &array, int length)
// {
//     for (int i = 0; i < length - 1; i++)
//     {
//         int minimum = i;
//         for (int j = i + 1; j < length; j++)
//         {
//             if (array[j] < array[minimum])
//             {
//                 minimum = j;
//             }
//         }
//         swap(array[i], array[minimum]);
//     }
// }
// void printelements(vector<int> &array, int length)
// {
//     for (int i = 0; i < length; i++)
//     {
//         cout << array[i] << " ";
//     }
// }
// int main()
// {
//     int length, element;
//     vector<int> array;
//     cout << "Enter the length of array" << endl;
//     cin >> length;
//     for (int i = 0; i < length; i++)
//     {
//         cout << "Enter the " << i + 1 << " element in array" << endl;
//         cin >> element;
//         array.push_back(element);
//     }
//     printelements(array, length);
//     cout << "Applying Selection sort we get" << endl;
//     selectionsort(array, length);
//     printelements(array, length);

//     return 0;
// }

// Bubble Sort

// #include <iostream>
// #include <vector>
// #include <utility>
// #include<algorithm>
// using namespace std;

// void Bubblesort(vector<int> &array, int length)

// {
//     for (int i = 0; i < length - 1; i++)
//     {
//         bool swapped = false; //now here we did optimised
//         for (int j = 0; j < length - i - 1; j++)
//         {
//             if (array[j] > array[j + 1])
//             {
//                 swap(array[j], array[j + 1]);
//                  swapped =true;
//             }
//         }
//         if (swapped==false)
//         {
//             break;
//         }
        
//     }
// }
// void printelements(vector<int> &array, int length)
// {
//     for (int i = 0; i < length; i++)
//     {
//         cout << array[i] << " ";
//     }
// }
// int main()
// {
//     int length, element;
//     vector<int> array;
//     cout << "Enter the length of array" << endl;
//     cin >> length;
//     for (int i = 0; i < length; i++)
//     {
//         cout << "Enter the " << i + 1 << " element in array" << endl;
//         cin >> element;
//         array.push_back(element);
//     }
//     cout << endl;
//     printelements(array, length);
//     cout << "Applying Bubble sort we get" << endl;
//     Bubblesort(array, length);
//     printelements(array, length);
//     return 0;
// }

// Insertion Sort


// #include <iostream>
// #include <vector>
// #include <utility>
// #include<algorithm>
// using namespace std;

// void Insertionsort(vector<int> &array, int length)

// {
//     for (int i = 1; i < length; i++)
//     {
//         int temp=array[i];
//         int j = i-1;
//         for (; j >= 0; j--)
//         {
//             if (array[j] > temp)
//             {
                
//                 array[j+1]=array[j];
                
//             }
//             else
//             {
//                 break;
//             }
            
//         }
//         array[j+1]=temp;
        
        
//     }
// }
// void printelements(vector<int> &array, int length)
// {
//     for (int i = 0; i < length; i++)
//     {
//         cout << array[i] << " ";
//     }
// }
// int main()
// {
//     int length, element;
//     vector<int> array;
//     cout << "Enter the length of array" << endl;
//     cin >> length;
//     for (int i = 0; i < length; i++)
//     {
//         cout << "Enter the " << i + 1 << " element in array" << endl;
//         cin >> element;
//         array.push_back(element);
//     }
//     cout << endl;
//     printelements(array, length);
//     cout << "Applying Insertion sort we get" << endl;
//     Insertionsort(array, length);
//     printelements(array, length);
//     return 0;
// }


