#include<bits/stdc++.h>
using namespace std;


 int main()
 {


 	int t,n;
 	cin>>t;
 	while(t--)
 	{   
 		cin>>n;
                  
         char ch[n][n];
           int a[2],b[2],r=0;

         for(int i=0;i<n;i++)
         {
         	for(int j=0;j<n;j++)
         	{
         		cin>>ch[i][j];

         		if(ch[i][j]=='*')
         		{
         			if(r==0)
         			{
         			a[0]=i;
         			a[1]=j;
         			r++;
         		}
         		else
         		{
         			b[0]=i;
         			b[1]=j;

         		}
         		}
         	}
         }



         	if(a[0]!=b[0] && a[1]!=b[1])
         	{
         		ch[a[0]][b[1]]='*';
         		ch[b[0]][a[1]]='*';
         	}

         	else if(a[0]==b[0])
         	{
         		if(a[0]>0)
         		{
         			ch[a[0]-1][a[1]]='*';
         			ch[b[0]-1][b[1]]='*';
         		}

         		else
         		{
         			ch[a[0]+1][a[1]]='*';
         			ch[b[0]+1][b[1]]='*';
         		}
         	}
         	else
         	{
         		if(a[1]>0)
         		{
         			ch[a[0]][a[1]-1]='*';
         			ch[b[0]][b[1]-1]='*';
         		}
         		else
         		{
         			ch[a[0]][a[1]+1]='*';
         			ch[b[0]][b[1]+1]='*';
         		}
         	}
         
         for(int i=0;i<n;i++)
         {
         	for(int j=0;j<n;j++)cout<<ch[i][j];

         	cout<<'\n';
         }


 	}
 }
