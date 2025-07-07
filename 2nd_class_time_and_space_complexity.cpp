#include <iostream>
using namespace std;

void printFirstElement(int arr[],int n){
    cout<<arr[3]<< endl;
}
int main(){
    int arr[]={5,10,15,13};
    printFirstElement(arr, 15);
    return 0;
}
// hence there is only one command is running so its time complexity is O(1)


