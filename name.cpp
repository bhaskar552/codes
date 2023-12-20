#include<iostream>
using namespace std;
int main() {
	int x,n,m,k=0;
	cout << "Enter the number of items for 1st array:" << "\n";
	cin >>n;
	cout << "Enter the number of items for 2nd array:" << "\n";
	cin >>m;
	int *merge = new int(m+n);
	int *arr = new int(n);
	cout << "Enter " << n << " items" << endl;
	for (x = 0; x < n; x++) {
		cin >> arr[x];
		merge[k]=arr[x];
		k++;
	}
	int *ar = new int(m);
	cout << "Enter " << m << " items" << endl;
	for (x = 0; x < m; x++) {
		cin >> ar[x];
		merge[k]=ar[x];
		k++;
	}
	cout<<"the merged array is \n";
	for(x=0;x<(m+n);x++)
	{
	    cout<<merge[x]<<" ";
	}

	return 0;
}
