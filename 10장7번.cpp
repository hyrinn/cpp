#include<iostream>
using namespace std;
template < class T >
T arr_plus(T arr[], int n){
    T sum=0;
    for(int i=0;i<n;i++)
         sum += arr[i];
    return sum;
}
int main(){
    int iarr[] = { 1,2,3,4,5 };
    double darr[] = { 1.1, 2.2, 3.3 };

    cout << "정수배열 합은" << arr_plus(iarr, 5) << endl;
    cout << "실수배열 합은" << arr_plus(darr,3) << endl;
}