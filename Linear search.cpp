#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter size of array:"<<endl;
    cin>>n;
    int arr[n];
   cout<<"enter " <<n<< " elements:"<<endl;
    for (int i = 0; i < n; i++) {
    cin >> arr[i];
   }
    int target;
    cout << "enter target: ";
    cin>> target;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
         cout << "found and index is " << i << endl;
            return 0;
        }
    }
    cout << "Not found" << endl;
    return 0;
}