//
//  main.cpp
//  reg(P238)
//
//  Created by Zheng on 10/7/18.
//  Copyright © 2018 Monkey Coder Studio. All rights reserved.
//  Time Limit:1s
//  Memory Limit:64MBytes

#include <iostream>
#include <vector>
using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    union accounta {
        char id[18];
        long long qq;
    };
    struct account {
        char way;
        accounta acce;
    };
    vector<account> acc;
    int noa;
    cin>>noa;
    for(int i=0;i<noa;i++)
    {
        char a;
        cin>>a;
        if(a=='i')
        {
            account abuf;
            cin>>abuf.acce.id;
            abuf.way=a;
            acc.push_back(abuf);
        }
        else if(a=='q')
        {
            account abuf;
            cin>>abuf.acce.qq;
            abuf.way=a;
            acc.push_back(abuf);
        }
    }
    long long qqav=0,male=0,female=0,qqnm=0;
    for(int i=0;i<acc.size();i++)
    {
        if(acc[i].way=='i')
        {
            if(acc[i].acce.id[16]%2==0)
            {
                female++;
            }
            else
            {
                male++;
            }
        }
        else
        {
            qqav+=acc[i].acce.qq;
            qqnm++;
        }
    }
    qqav/=qqnm;
    cout<<male<<" "<<female<<" "<<qqav;
    return 0;
}
