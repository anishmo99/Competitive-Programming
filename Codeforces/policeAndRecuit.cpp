//
//  policeAndRecuit.cpp
//  C++
//
//  Created by Anish Mookherjee on 29/03/20.
//  Copyright © 2020 Anish Mookherjee. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,police=0,crime=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x!=-1)
            police+=x;
        else if(x==-1 && police>0)
            police--;
        else
            crime++;
    }
    cout<<crime<<endl;
    return 0;
}
