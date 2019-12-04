#include <iostream>
using namespace std;

struct cus {
    char name[30];
    int id;
    int pur;
  };

void read(cus* , int);
void sort(cus* , int);
void print(cus* , int);

int main(void){
    int i;
    cout<<"How many customers you research? \n";
    cin>>i;
    cus cust[i];

    // read function, read the characters then store in array c[]
    read(cust, i);
    // sort descending
    sort(cust, i);
    // print function
    print(cust, i);

    return 0;
}
void read(cus* c, int i){
    int j;
    for(j = 0; j < i; j++){
        cout<<(j+1)<<": ";
        cout<<"\tname: ";
        cin>>c[j].name;
        cout<<"\tid: ";
        cin>>c[j].id;
        cout<<"\tnumber of purchase: ";
        cin>>c[j].pur;
    }
}
void sort(cus* c, int i) {
    int j, k;
    float swap;
    for(j=0; j<(i-1); j++)
        for(k=j+1; k<i; k++){
            if(c[j].pur<c[k].pur) {
            swap = c[j].pur;
            c[j].pur = c[k].pur;
            c[k].pur = swap;
        }
    }

  }
void print(cus* c, int i) {
   for(int j=0; j<i; j++)
    cout<<"name: "<<c[j].name<<",id: "<<c[j].id<<",purchase: "<<c[j].pur<<endl;
  }
