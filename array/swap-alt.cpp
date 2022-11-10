#include <iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    for (int i = 0; i < 5; i +=2)
    {
        if (i + 1 < 5)
        {
            /* code */
        swap(arr[i] ,arr[i + 1]);
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout << arr[i] << endl;
    }
    
}