#include<iostream>
#include<string>
using namespace std;
int main()
{
    string input, output="";
    int count=0;
    cout<<"Enter the bit stream:";
    cin>>input;
    for(int i=0; i<input.length(); i++)
    {
        output+=input[i];
        if(input[i]=='1')
           count++;
        else
           count=0;
        if(count==5)
        {
            output+='0';
            count=0;
        }
    }
    cout<<"Bit stuffed Frame:"<<output<<endl;
}