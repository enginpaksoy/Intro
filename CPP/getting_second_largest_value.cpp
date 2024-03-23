#include <iostream>
using namespace std;

int main() {
    int array[10] = {6, 2 , 9, 10, 7, 8, 5, 4, 1, 3 };
    int length = sizeof(array) / sizeof(array[0]);
    int high1 = 0;
    int high2 = 0;
    for(int i = 0; i < length; i++){
        if(array[i] > high1){
            high2 = high1;
            high1 = array[i];
        }
        else if(array[i] > high2 && array[i] != high1){
            high2 = array[i];
        }
    }
    
    cout << high2 << "\n";
    return 0;
}
