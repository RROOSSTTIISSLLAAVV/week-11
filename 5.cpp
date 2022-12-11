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
    
    int index_arr[2];
    
    int index_m = 0;
    int index_n = 0;
    
	for (int i = 1; i < m; i++){
	    for (int j = 0; j < n; j++){
		    if (arr[i][j] > arr[index_m][index_n]){ 
		        index_m = i;
		        index_n = j;
		    }
	    }
	}
	index_arr[0] = index_m; 
	index_arr[1] = index_n;
    
    cout << arr[index_arr[0]][index_arr[1]] << endl;
    cout << "coor " << index_m + 1 << " " << index_n + 1;
    
	return 0;
}
