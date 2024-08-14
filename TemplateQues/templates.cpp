#include<string>
#include<iostream>
using namespace std;

template <typename T>
T arraySum(const T *arr, T arrSize){
     T sum=0;
    for (int i =0;i<arrSize;i++){
        sum += arr[i];
    }
return sum;    
}
int main(){
    int num;
    cout << "ENTER NUMBER OF ELEMNTS: " << endl;
    cin >> num;
        int *arr = new int[num];

        cout << "ENTER ELEMNTS: " << endl;
    for(int i=0;i<num;i++){
        cin >> arr[i];
    }
    int ans  = arraySum(arr, num);
    cout << "Sum is: " << ans << endl;
    return 0;
}