#include<iostream>
#include<string>
using namespace std;
int main()
{
    string input, output="";
    int count=0;
    cout<<"Enter the stuffed bit stream:";
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
            i++;
            count=0;
    
        }

    }
    cout<<"Original Frame:"<<output<<endl;
    return 0;
}