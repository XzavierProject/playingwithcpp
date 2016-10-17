#include<iostream>
using namespace std;

void func_one();
void func_two();

inc cnt;

int main(){

int i;
 for(i=0; i<10; i++){
 cnt = i*2;
 func_one();
 }
 
 return 0;
}

void func_two(){
  cout << "count:" << cnt;
  cout << '\n';
  func_two();
 }
 
 void func_two(){
   int cnt;
    for(cnt=0; cnt<3; cnt++){
    cout << '.';
    }
}
