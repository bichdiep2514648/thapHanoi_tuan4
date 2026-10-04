#include<iostream>
using namespace std;
void Thn(int n, char O, char M, char D){
    if(n==1){ 
         cout<<"Move disk 1 from "<<O<<" to "<<D<<endl;
    } else {
        Thn(n-1,O,D,M); 
        cout<<"Move disk "<<n<<" from "<<O<<" to "<<D<<endl;
        Thn(n-1,M,O,D); 
    }
}
int main(){
    int n;
    cout<<"Numbers of disks : ";
    cin >>n;
    Thn(n,'A','B','C');
    return 0;
}

