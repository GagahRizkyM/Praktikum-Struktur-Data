//Nama	: Gagah Rizky Mulyawan
//Nim	: 20051397045
//Kelas	: D4 2020 MiA

#include <cstdlib>
#include <iostream>
 
using namespace std;
 
void balik(char *s){
     if(*s !='\0'){
           balik(&s[1]);
           cout<<s[0];
           }
           }
int main(){
    char *kata="ataD rutkurtS";
    balik(kata);
    cout<<endl;
    system("PAUSE");
    return 0;
}

