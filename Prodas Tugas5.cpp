/* Rizka Nurul Septiani Hakim 20051397026 2020B */
/* Tugas 5 Membuat Program Menghitung Jumlah Deret */

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    int a=0, b, c, jumlah=0, i, n;
     
    cout<<"MENGHITUNG JUMLAH DERET BILANGAN" << endl ;
    cout<<"----------------------------------------" << endl ;
    cout<<"Masukkan bilangan awal : " << endl ;
    cin>>a;
    cout<<"Masukkan beda : " << endl ;
    cin>>b;
    cout<<"Masukkan jumlah sampai deret ke-n : " << endl ;
    cin>>n;
     
    cout<<"Deret ke-"<<n<<" : ";
    cout<<a<<",";
    jumlah=jumlah+a; 
    for(i=0; i<n-1; i++){
             c=a+b;
             a=c;
             cout<<c<<",";
             jumlah=jumlah+c;                      
    }
     
    cout<<"\nJumlah deret ke-"<<n<<" : ";
    cout<<jumlah; 
     
    getch();
    return 0;    
}
