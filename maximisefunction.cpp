#include <bits/stdc++.h>
using namespace std;
string s,l;
int main() 
{
	int t,m1,m2,m3,n;
	cin>>t;
	while(t--)
	{
	int j=0;
	cin.ignore();
		getline(cin, s);
		if(s[6]=='A')
		{
		    int h1=(s[0]-'0')*10+(s[1]-'0');
			if(h1==12)
			{
				m1=(s[3]-'0')*10+(s[4]-'0');	
			}
			else if(h1!=12)
			{
			    m1=(h1)*60+(s[3]-'0')*10+(s[4]-'0');
			}
		}
	     if(s[6]=='P')
		{
		    int h1=(s[0]-'0')*10+(s[1]-'0');
			if(h1==12)
			{
				m1=12*60+(s[3]-'0')*10+(s[4]-'0');
			}
			else if(h1!=12)
			{
				m1=(12+h1)*60+(s[3]-'0')*10+(s[4]-'0');
			}
		}
	
	
		cin>>n;
		int c[n];
		for(int i=0;i<n;i++)
		{
			cin.ignore();
			getline(cin,l);
			if(l[6]=='A')
	     	{
		        int h1=(l[0]-'0')*10+(l[1]-'0');
			    if(h1==12)
			   {
			    	m2=(l[3]-'0')*10+(l[4]-'0');
		       }
			   else if(h1!=12)
			   {
			    	m2=(h1)*60+(l[3]-'0')*10+(l[4]-'0');
		     	}
			if(l[15]=='A')
			{
				int h1=(l[9]-'0')*10+(l[10]-'0');
			    if(h1==12)
			    {
				    m3=(l[12]-'0')*10+(l[13]-'0');
			    }
			    else
			    {
				    m3=(h1)*60+(l[12]-'0')*10+(l[13]-'0');
			    }
			}
		    else if(l[15]=='P')
			{
			    int h1=(l[9]-'0')*10+(l[10]-'0');
			    if(h1==12)
			    {
			     	m3=12*60+(l[12]-'0')*10+(l[13]-'0');
			    }
			    else
			    {
				    m3=(12+h1)*60+(l[12]-'0')*10+(l[13]-'0');
			    }
			}	
		    }
	    else if(l[6]=='P')
		    {
		        int h1=(l[0]-'0')*10+(l[1]-'0');
			    if(h1==12)
			    {
				   m2=12*60+(l[3]-'0')*10+(l[4]-'0');
			    }
			    else
		    	{
			    	m2=(12+h1)*60+(l[3]-'0')*10+(l[4]-'0');
		    	}
			    if(l[15]=='P')
		    	{
			       int h1=(l[9]-'0')*10+(l[10]-'0');
			        if(h1==12)
			       {
			          m3=12*60+(l[12]-'0')*10+(l[13]-'0');
			       }
			       else
			       {
				    m3=(12+h1)*60+(l[12]-'0')*10+(l[13]-'0');
			       }
			   }
	    	}
				if((m1>=m2)&&(m1<=m3)&&(m2<m3))
				   c[j]=1;
				else
				   c[j]=0;
				j++;
		}
		for(int i=0;i<n;i++)
		cout<<c[i];
		cout<<endl;
	}
	return 0;
}
	


