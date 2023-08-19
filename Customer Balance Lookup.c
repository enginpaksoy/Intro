#include <stdio.h>

int main(){
    int counter;
    int idSearch;
    int found = 0;
    int custID[10] = {313, 453, 502, 101, 892,
                      475, 792, 912, 343, 633};
    float custBal[10] = {0.00, 45.43, 71.23, 301.56, 9.08,
                         192.41, 389.00, 229.67, 18.31, 59.54};
    printf("*** Customer Balance Lookup ***\n");
    printf("What customer number do you need to check?\n");
    scanf("%d", &idSearch);
    for (counter = 0; counter < 10; ++counter) {
        if(idSearch == custID[counter]){
            found = 1;
            break;
        }
    }
    if(found){
        if(custBal[counter] > 100.00){
            printf("Customer's balance is %.2f dolars.\n", custBal[counter]);
        }
        else if(custBal[counter] < 100.00){
            printf("Customer's balance is under 100.00 dolars.\n");
        }
    }
    else{
        printf("You have typed an incorrect customer ID.\n");
        printf("ID %3d was not found in list.", idSearch);
    }
}
