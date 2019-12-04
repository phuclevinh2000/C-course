#include <iostream>
#include <string.h>
using namespace std;

const int MAX = 30;

void swap(char arr[][MAX], int j);
void sort(char arr[][MAX], int n);
void print(char arr[][MAX], int n);
void read(char arr[][MAX], int n);

int main(void){
    //description
    cout << "** This program asks for n and takes in n names" << endl;
    cout << "** And prints out the names in ascending order\n" << endl;

    //input n
    int n;
    cout << "How many names you want to take in: ";
    cin >> n;
    char arr[n][MAX];

    //read and print out
    read(arr, n);
    sort(arr, n);
    print(arr, n);

    return 0;
}

void read(char arr[][MAX], int n){
    int i;
    for(i = 0; i < n; i++){
        cout << "Input name " << i+1 << ": ";
        cin >> arr[i];
    }
}

void sort(char arr[][MAX], int n){
    int i, j;
    for(i = 0; i < n; i++)
        for(j = 0; j < n-1; j++)
            if(arr[j][0] > arr[j+1][0])
                swap(arr, j);
}

void swap(char arr[][MAX], int j){
    char temp[MAX];
    strcpy(temp, arr[j]);
    strcpy(arr[j], arr[j+1]);
    strcpy(arr[j+1], temp);
}

void print(char arr[][MAX], int n){
    int i;
    for(i = 0; i < n; i++)
        cout << "Name " << i+1 << ": " << arr[i] << endl;
}
