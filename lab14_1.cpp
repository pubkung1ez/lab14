#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T arr[],int N){
    for(int x = 1 ; x < N;x++){
        T datax = arr[x];
        int y = x-1;
        do{
            T datay = arr[y];
            if(datax > datay){
                arr[y+1] = datay;
                y -= 1;
            }else{
                break;
            }
        }while(y >= 0);
        arr[y+1] = datax;
        
        cout << "Pass "<< x << ":";
        for(int i =0; i<10 ;i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
}