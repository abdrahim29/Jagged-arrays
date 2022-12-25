#include<iostream>
using namespace std;


int main(){

    int **darray;
    int size=5;

    int list[]={2,3,4,5,6};

    darray = new int*[size];

    for (int i=0;i<size;i++){

        darray[i]=new int[list[i]];

    }

    for(int i=0;i<size;i++){
        for (int j=0;j<list[i];j++){
        cout<<"Enter elements: ["<<i<<"]["<<j<<"]";
        cin>>darray[i][j];
    }}

    for(int i=0;i<size;i++){
        for (int j=0;j<list[i];j++){

            cout<<darray[i][j]<<" ";
        }
        cout<<endl;
    }

    


    return 0;
}