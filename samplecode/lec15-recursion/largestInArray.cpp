//Largest element in an array
 
#include <iostream>
 
using namespace std;
 
int largest(const int list[], int lowerIndex, int upperIndex);

int main() 
{
    int intArray[10] = {23, 43, 35, 38, 67, 12, 76, 10, 34, 8};

    cout << "The largest element in intArray: "
         << largest(intArray, 0, 9);
    cout << endl;

    return 0; 
}

int largest(const int list[], int lowerIndex, int upperIndex)
{
    int max;

    if (lowerIndex == upperIndex) //size of the sublist is one
        return list[lowerIndex];
    else
    {
        max = largest(list, lowerIndex, upperIndex-1); 

        if (list[upperIndex] >= max)
            return list[upperIndex];
        else
            return max;
    }
}
