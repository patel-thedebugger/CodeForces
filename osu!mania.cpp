#include<iostream>
#include<fstream>

using namespace std ;

int main()
{
    ifstream fin("sample.txt");
    int totalcase , row;
    cin>>totalcase;
    char *str[500];
    
    for(int i = 0 ; i < totalcase ; i++)
    {
        cin>>row;

        for(int j = 0 ; j < row ; j++)
        {
            str[j] = new char[4] ;
            cin>>str[j];
        }
        for(int j = row-1 ; j >= 0 ; j--)
        {
            for(int k = 0 ; k < 4 ; k++)
            {
                if(str[j][k] == '#')
                    cout<<k+1<<" ";
            }
        }
        cout<<endl;
        
    }

    return 0 ;
}
