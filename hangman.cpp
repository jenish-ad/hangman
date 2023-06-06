#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cstring>
using namespace std;
int main()
{
    //hangman patterns
    int b=0,d;
    char a,g='_';
    string x="_";
    string list[5] = {"apple","bat","elephant"};
    srand(time(0));
    int random = (rand()%3);
    string s = list[random];
    int c = s.length();
    cout<<s.at(0);
    string patt[6]={" 0","\n/","|","\\","\n/"," \\"};


    goto abc;
    patt:
    cout<<"============"<<endl;
    for (int i = 0;i<=b;i++)
    {
        cout<<patt[i];
    }
    abc:


    for(int i = 1;i<c;i++)
    {
       x=x+"_";
    }
    re:
cout<<x<<endl;
    
    for(int i = 0;i<c;i++)
    {
        if(g==x.at(i))
        {
            b++;
        }
    }
     if(b==0){
            return 0;
        }
    cout<<"Enter your word";
    cin>>a;
    for(int i = 1;i<c;i++)
    {
        if(a==x.at(i))
        {
            x.at(i) = a;
            goto re;
        }
        else
        {
            b++;
            goto patt;
        }
    }









}