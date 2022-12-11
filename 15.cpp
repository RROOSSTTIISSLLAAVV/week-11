#include <iostream>
using namespace std;

int main(void) {
    
	int m;
	cout << "Enter m: ";
	cin >> m;
	
	int n;
	cout << "Enter n: ";
	cin >> n;

	int arr[m][n];

    for (int i = 0; i < m; i++){
    	cout << "Enter " << i + 1 <<  " line array elements: ";
    	for (int j = 0; j < n; j++) cin >> arr[i][j];
    }
    
    int sum = 0;
    
    for (int i = 0; i < m; i++) for(int j = 0; j < n; j++) if(i == j) sum+=arr[i][j];
    
    cout << sum << endl;

    
	return 0;
}
