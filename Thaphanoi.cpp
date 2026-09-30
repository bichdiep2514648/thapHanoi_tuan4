#include<iostream>
using namespace std;
void Thn(int n, char O, char M, char D){
    int count =0;
    if(n==1){ 
        
        cout<<"Move disk 1 from "<<O<<" to "<<D<<endl;
    } else {
        Thn(n-1,O,D,M); count++;
        cout<<"Move disk "<<n<<" from "<<O<<" to "<<D<<endl;
        Thn(n-1,M,O,D); count++;
    }
    
}
int main(){
    int count=0;
    Thn(3,'A','B','C');
    cout<<"%i,"<<count;
    return 0;
}

