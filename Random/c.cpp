#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[102][102];
ll count_s(int n)
{
	ll sum = 0;
	int x = n/2;
	int i=0,j=0;

	while(j<n)
	{
		sum += a[i][j];
		i++;
		j++;
	}

	i = 0, j = n-1;
	while(j>-1)
	{
		sum += a[i][j];
		i++;
		j--;
	}

	x = n/2, i = 0;
	while(i<n)
	{
		sum += a[i][x];
		i++;
	}

	x = n/2, j = 0;
	while(j<n)
	{
		sum += a[x][j];
		j++;
	}

	return sum - 3*a[x][x];
}
int main(){

    int n;

    cin>>n;

    for(int i=0; i<n; i++)
    {
    	for(int j=0; j<n; j++)
    	{
    		cin>>a[i][j];
    	}
    }

    ll sum = count_s(n);

    cout<<sum<<endl;


    //2010006
    return 0;
}
