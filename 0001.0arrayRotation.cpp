/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int l = sizeof(arr)/sizeof(int);
    //shift arr by 4 to the right
    int d = 10;
    cout<<"printing the array beffore shifting : \n";
    for(int j = 0; j < l; j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    for(int i = 0; i < d; i++){
        int temp = arr[0];
        for(int j = 0; j < l-1; j++){
            arr[j]=arr[j+1];
        }
        arr[l-1] = temp;
    }
    cout<<"printing the array after the shifting by "<< d <<"unit to the left : \n";
    for(int j = 0; j < l; j++){
        cout<<arr[j]<<" ";
    }
    return 0;
        
}
