#include<iostream>
using namespace std;
int main()
{

	int counter=0,counter2=0;
	unsigned int n;
	cin>>n;

	bool array[n][3];
	for(int x=0;x<n;x++)
	{
		for(int y=0;y<3;y++)
		{
			cin>>array[x][y];
		}
	}for(int x=0;x<n;x++)
	{
		for(int y=0;y<3;y++)
		{
			if(array[x][y]==1)
			{
				counter++;
			}
			
			
}
		int a[n];

a[n]=counter;
for(int z=0;z<n;z++){
cin>>a[z];
}
counter=0;
for(int z=0;z<n;z++){
if(counter>=2)
{
	counter2++;
}
cout<<counter2<<"\n";

}

}

}

	

