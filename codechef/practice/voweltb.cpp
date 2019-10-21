#include<iostream>
using namespace std;
int main()
{
    char test;
    cin>>test;
    if( int(test) >= 65 && int(test) <= 90 )
    {
        if(test == 'A' || test == 'E' || test == 'I' || test == 'O' || test == 'U')
            cout<<"Vowel"<<endl;
        else
            cout<<"Consonant"<<endl;
    }
    return 0;
}
