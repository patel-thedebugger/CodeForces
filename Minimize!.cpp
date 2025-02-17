#include<iostream>
#include<fstream>

using namespace std ;

int main()
{
    int a , b , totalcase;
    ifstream fin("sample.txt");
    
    cin>>totalcase;
    int min[55] ;
    for(int i = 0 ; i < totalcase ; i++ )
    {
        cin>>a;
        cin>>b;
        //(c−a)+(b−c)
        int c = a ;
        min[i] = (c-a)+(b-c) ;
        for(c = a+1 ; c < b ; c++ )
        {
            if(min[i] < (c-a)+(b-c))
                min[i] = (c-a)+(b-c);
        }
    }
    for(int i = 0 ; i < totalcase ; i++ )
    {
        cout<<min[i]<<endl;
    }
 
}
