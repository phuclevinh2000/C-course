#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <cstdlib>
#include <iomanip>

using namespace std;


int main(void) {
    int** p, ** q, ** res, i, j;
    //int c1, c2, r1, r2, k;
    //c1 = r2
    srand(time(0));
    int c1 = rand()%5 + 1;
    int r1 = rand()%5 + 1;
    int r2 = c1;
    int c2 = rand()%5 + 1;
    
    p = new int* [r1];
    for (i = 0; i < r1; i++) {
        p[i] = new int[c1];
    }
    for (i = 0; i < r1; i++) {
        for ( j = 0; j < c1 ; j++){
         p[i][j]=rand()%10;
        }
    }
    cout<<"The content of the first matrix "<<r1<<"X"<<c1<<endl;
    for(i=0; i<r1; i++) {
        
        for(j=0; j<c1; j++){
            cout<<p[i][j]<<"\t";
        }
        cout<< endl;
    }
    
    q = new int* [r2];
    for (i = 0; i < r2; i++) {
        q[i] = new int[c2];
    }
    for (i = 0; i < r2; i++) {
        for ( j = 0; j < c2 ; j++){
         q[i][j]=rand()%10;
        }
    }
    cout<<"The content of the second matrix "<<r2<<"X"<<c2<<endl;
    for(i=0; i<r2; i++) {
           
           for(j=0; j<c2; j++){
               cout<<q[i][j]<<"\t";
           }
           cout<<endl;
       }
    
    res = new int* [r1];
    for (i = 0; i < r1; i++) {
        res[i] = new int[c2];
    }
    cout << "\nANSWER" << endl;
       for (i = 0; i < r1; i++) {
           cout << "R" << i << " : ";
           for (j = 0; j < c2; j++) {
               res[i][j] = 0;
               for (int k = 0; k < r2; k++) {
                   res[i][j] = res[i][j] + p[i][k] * q[k][j];
               }
               cout << res[i][j] << " ";
           }
           cout << endl;
       }
    //p = [NULL];
    //q = [NULL];
    
    return 0;
}
