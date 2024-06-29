#include<bits/stdc++.h>
using namespace std;

#define INF  (int)1e9;

const int adjR[4] = {-1,0,1,0};
const int adjC[4] = {0,-1,0,1};

vector<int>rowInt;
vector<vector<int>>weight;
int row,col;

int dijkstra()
{
    priority_queue<pair<int,pair<int,int>>,vector<int>,greater<int>>pq;
    vector<vector<int>>dist;

    dist.clear();

    

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,w;      cin>>t;

    while(t--)
    {
        cin>>row>>col;
        weight.clear();

        for(int i=0; i<row; i++)
        {
            for(int j=0; i<col; i++)
            {
                cin>>w;
                rowInt.push_back(w);
            }
            weight.push_back(rowInt);
        }

        cout<<dijkstra()<<"\n";
    }

    
}