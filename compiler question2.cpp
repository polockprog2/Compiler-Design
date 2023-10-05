#include<iostream>
using namespace std;

bool isarithmeticoperator(char c)
{
    return(c=='+'||c=='-'||c=='*'||c=='/'||c=='()'||c=='{}');
}

int main()
{
    string input;
    cout<<"Enter Your Operation"<<endl;
    cin>>input;

    bool containarithmeticoperator=false;
    for(char c:input)
    {
        if(isarithmeticoperator(c))
        {
            containarithmeticoperator = true;
            cout<<c<<endl;
        }
    }
    if(containarithmeticoperator)
    {
        cout<<"There's arithmetic operator."<<c<<endl;
    }
    else{
        cout<<"There's no arithmetic operator"<<endl;
    }
return 0;
}
