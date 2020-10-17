//
//  findYourGift.cpp
//  C++
//
//  Created by Anish Mookherjee on 23/03/20.
//  Copyright © 2020 Anish Mookherjee. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int x = 0,y = 0;
        if(s[0] == 'L')
        x--;
        else if(s[0] == 'R')
        x++;
        else if(s[0] == 'U')
        y++;
        else
        y--;
        for(int i = 1;i<n;i++)
        {
            if((s[i] == 'R' && s[i-1] == 'U') || (s[i] == 'R' && s[i-1] == 'D'))
            x++;
            else if((s[i] == 'L' && s[i-1] == 'U')||(s[i] == 'L' && s[i-1] == 'D'))
            x--;
            else if((s[i] == 'U' && s[i-1] == 'L') || (s[i] == 'U' && s[i-1] == 'R'))
            y++;
            else if((s[i] == 'D' && s[i-1] == 'L') || (s[i] == 'D' && s[i-1] == 'R'))
            y--;
        }
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}
