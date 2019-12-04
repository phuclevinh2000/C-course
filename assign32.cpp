#include<iostream>
#include<new>

using namespace std;

int main(int argc, char* argv[]) {
    //asking interval and number to start
    int i;
    int* a;

    if (argc < 3) {
        cout << "Please give lower bound and upper bound numbers" << endl;
        return -1;
    }


    cout << "The prime numbers in interval from " << argv[1] << " to " << argv[2] << ": ";
    int high = atof(argv[1]);
    int low = atof(argv[2]);
    int size = high - low; //this case to interval from 0- a random number
    a = new int[(std::atof(argv[2]) - std::atof(argv[1]))]; //to interval from 2 random number
    //using std::atof to convert char into int

    //to check the prime number
    for (i = std::atof(argv[1]); i <= std::atof(argv[2]); i++) { //for the first number to the second number
        bool prime = true;//set every time loop start
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {    //if i is divisible for j, set value for prime
                prime = false;
            }
        }
        if (prime) { //if prime is true
            *a = i;
            cout << *a++ << " "; //print the *a and increase to the next

        }
    }
    a = NULL;
    delete[]a;
    return 0;

}
