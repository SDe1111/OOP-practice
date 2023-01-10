// #include <iostream>
// using namespace std;

// int linearSearch(int array[], int size, int userVal){

//     for(int i = 0; i < size; i++)
//     {
//         if(array[i] == userVal)
//         {
//             return i;
//         }
//     }
//     return -1;

// }

// int main()
// {

//     int ins;
//     int a[] = {0,1,2,3,4,5,6};

//     cout << " entering linear search number" << endl;
//     cin >> ins;

//     int result = linearSearch(a,7,ins);

//     if(result >= 0)
//     {
//         cout << " linear search found " << a[result] << " at index: " << result << endl;
//     }
//     else
//     {
//         cout << " num not found " << result << endl;
//     }

//     return 0;
// }

#include <iostream>

using namespace std;


int linearSearch(int array[],int size, int userVal)
{
    for(int i = 0; i < size; i++) {
        if(array[i] == userVal){
            return i;
        }
    }
    return -1;
}

int main()
{
    int in;
    int ar[] = {1,2,3,4,5,6};
    
    cout << "enter num: " << endl;
    cin >> in;

    int result = linearSearch(ar,6,in);

    if(result >= 0){
        cout << "num: " << ar[result] << " found at index: " << result << endl;
    }
    else{
        cout << "num not found " << endl;
    }

    return 0;
}