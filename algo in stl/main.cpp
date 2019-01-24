#include <iostream>
#include <algorithm>
using namespace std;
 //all_of(,,)
int main()
{
    int ar[6] =  {1, -2, 3, 4, 5, 6};

    // Checking if all elements are positive
    all_of(ar, ar+1, [](int x) { return x>0; })?
          cout << "All are positive elements" :
          cout << "All are not positive elements";

    return 0;
}

//iota
int main()
{
    // Initializing array with 0 values
    int ar[6] =  {0};

    // Using iota() to assign values
    iota(ar, ar+6, 20);

    // Displaying the new array
    cout << "The new array after assigning values is : ";
    for (int i=0; i<6 ; i++)
       cout << ar[i] << " ";

    return 0;

}

//copy_n
int main()
{
    // Initializing array
    int ar[6] =  {1, 2, 3, 4, 5, 6};

    // Declaring second array
    int ar1[6];

    // Using copy_n() to copy contents
    copy_n(ar, 6, ar1);

    // Displaying the copied array
    cout << "The new array after copying is : ";
    for (int i=0; i<6 ; i++)
       cout << ar1[i] << " ";

    return 0;

}

//none_of()
int main()
{
    // Initializing array
    int ar[6] =  {1, 2, 3, 4, 5, 6};

    // Checking if no element is negative
    none_of(ar, ar+6, [](int x){ return x<0; })?
          cout << "No negative elements" :
          cout << "There are negative elements";

    return 0;
}

//any_of()
int main()
{
    // Initializing array
    int ar[6] =  {1, 2, 3, 4, 5, -6};

    // Checking if any element is negative
    any_of(ar, ar+6, [](int x){ return x<0; })?
          cout << "There exists a negative element" :
          cout << "All are positive elements";

    return 0;

}
