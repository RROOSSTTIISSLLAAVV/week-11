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
    
    int count;
    
    for (int i = 0; i < m; i++){
        count = 0;
        for(int j = 0; j < n; j++) if (arr[i][j] % 2 == 0) count++;
        cout << i + 1 << " line: " << count << endl;
    }
    
	return 0;
}
