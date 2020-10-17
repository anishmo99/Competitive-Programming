//
//  LittleElephantAndCandies.cpp
//  C++
//
//  Created by Anish Mookherjee on 24/03/20.
//  Copyright © 2020 Anish Mookherjee. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        long n, candies;
        cin >> n >> candies;
        for (long i = 0; i < n; i++)
        {
            long elephant;
            cin >> elephant;
            candies -= elephant;
        }
        if (candies >= 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}

/*
 #include <iostream>
 using namespace std;

 int main()
 {
  int cases;
  cin>>cases;
  while(cases--)
  {
     int long long n,candies,sum=0;
     cin>>n>>candies;
     int elephant[n],i;
     for(i=0;i<n;i++)
     {
         cin>>elephant[i];
         sum+=elephant[i];
     }
     if(sum<=candies)
         cout<<"Yes"<<endl;
     else
         cout<<"No"<<endl;
  }
  return 0;
 }

 */
