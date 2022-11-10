#include <iostream>
using namespace std;
bool search(int arr[], int size, int key){
    for (int i = 0; i < size; i++)
    {
     if (arr[i] == key)
     {
        /* code */
        return 1;
     }
     
    }
    return 0;
}

int main(){
    int arr[5] = {2,4,6,7,8};
    int key;
    cin >> key;
    bool found = search(arr, 5, key);
    if (found)
    {
     cout << key << " is present";   /* code */
    } else cout << key << " is not present";
    

}