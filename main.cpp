#include <iostream>
#include <fstream>
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
using namespace std;

int main(){

    string tab[100];

    ifstream plik;
    string dis;
    int x=0;
    
	 plik.open( "C:\\a.txt" , ios::in);

    if(plik.good()==false)
    {
    cout<<"Plik nie istnieje ";
        exit(0);
    }
     if(plik.good())
       while(!plik.eof())
            {
            	getline(plik, dis);
                plik>>tab[x];
                x++;
            }
    plik.close();

    for(int j=0; j<x; j++)
        cout<<tab[j]<<endl;

return 0;
}
