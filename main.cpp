#include <iostream>
using namespace std;
int main()
{
   
int baslangıcrezervi = 1000;
int gunluktuketim = 250 ;
int gunlukyagmur = 20;
int gunlukbuharlasma = 3;
 int gunluknettuketim = gunluktuketim - gunlukyagmur + (baslangıcrezervi*gunlukbuharlasma);
    int sudayanmasuresi = baslangıcrezervi/gunluknettuketim;
    if(baslangıcrezervi>700){
        cout<<"su tüketimi normal";
 }
    else if(baslangıcrezervi<700&&baslangıcrezervi>300){
    cout<<"su tüketimi tasarruf";
    }
    else{
   cout<< "su tüketimi acil";
    }
    
    return 0;
}
