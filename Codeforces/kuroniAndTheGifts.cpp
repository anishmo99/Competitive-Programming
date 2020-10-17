//
//  kuroniAndTheGifts.cpp
//  C++
//
//  Created by Anish Mookherjee on 31/03/20.
//  Copyright © 2020 Anish Mookherjee. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
        for(int i=0;i<n;i++)
            cout<<b[i]<<" ";
        cout<<endl;
    }
    return 0;
}
