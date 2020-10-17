#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    string word;
    cin>>word;
    int len=word.length();
    int ucount=0,lcount=0;
    for(int i=0;i<len;i++)
    {
        if(isupper(word[i]))
            ucount++;
        else
            lcount++;
    }
    if(lcount>=ucount)
        for(int i=0;i<len;i++)
            putchar(tolower(word[i]));
    else
        for(int i=0;i<len;i++)
            putchar(toupper(word[i]));
}


/*#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string word;
    cin>>word;
    int len=word.length();
    int ucount=0,lcount=0;
    for(int i=0;i<len;i++)
    {
        if(isupper(word[i]))
            ucount++;
        else
            lcount++;
    }
    if(lcount>=ucount)
        transform(word.begin(),word.end(),word.begin(), ::tolower);
    else
        transform(word.begin(),word.end(),word.begin(), ::toupper);
    cout<<word;
}
*/