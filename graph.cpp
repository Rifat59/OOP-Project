#include<iostream>

using namespace std;

int main()
{
    int ara[20][20] = {0};
    int node1,node2;
    for(int i =1; i <=7 ; i++){
        cin>>node1>>node2;
        ara[node1][node2] = 1;
    }
    
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <=5; j++) cout<<ara[i][j]<<' ';
        cout<<endl;
    }
}
