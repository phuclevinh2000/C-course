#include <iostream>
using namespace std;
void read(int*, int);
int* findmax(int*, int);
int* findmin(int*, int);
void print(int*, int);
int main(void)
{
    cout << " how many numbers you want to enter \n";
    int i;
    cin >> i;

    int* numbers = new int[i];


    read(numbers, i);
    print(numbers, i);
    cout << "\n This is the min of that array: ";
    cout << *findmin(numbers, i);
    cout << "\n This is the max of that array: ";
    cout << *findmax(numbers, i);
    cout << "\n";
}

void read(int* num, int i) {
    for (int j = 0; j < i; j++) {
        cin >> num[j];
    }
}

void print(int* num, int i) {
    cout << "this is the array \n";
    for (int k = 0; k < i; k++) {
        cout << num[k] << "\n";
    }

}


int* findmin(int* num, int i) {
    int j;
    int* small = num;
    for (j = 1; j < i; j++)
    {
        if (*small > num[j])
            small = &num[j];
    }

    return small;
}

int* findmax(int* num, int i) {
    int j;
    int* max = num;
    for (j = 1; j < i; j++)
    {
        if (*max < num[j])
            max = &num[j];
    }
    return max;
}

