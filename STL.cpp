#include<iostream>
#include<cmath>
#include<cstring>
#include<vector>

using namespace std; 

int main()
{
    vector<int>v,t;
    v.push_back(1);
    v.push_back(5);
    v.push_back(2);
    v.push_back(4);
    
    vector<int>::iterator it = v.begin();
    v.insert(it+2,0);
    for(int i=0;i<v.size();i++) cout<<v[i]<<endl;
    
    
    return 0;
}

