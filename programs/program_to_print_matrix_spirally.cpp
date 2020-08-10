#include<iostream>
using namespace std;
void printSpiral(int a[][11],int m,int n){

	int count = m*n;
	int i = 0;
	int j = 0;
	int startRow = 0;
	int startColumn = 0;
	int endRow  = m;
	int endColumn = n;

	while(count){
        //print first row
		if(i == startRow && j== startColumn){
			while(j<endColumn){
				cout<<a[i][j]<<" ";
				j+=1;
				count-=1;
			}
		} 
		//print last column
		 else if(i == startRow && j == endColumn){

			i+=1;
			j-=1;
			
			while(i<endRow){
				cout<<a[i][j]<<" ";
				i+=1;
				count-=1;
			}
		}
		//print last row
		else if( i == endRow && j == endColumn-1){
			j-=1;
			i-=1;
			
			while(j>=startColumn){
				cout<<a[i][j]<<" ";
				j-=1;
				count-=1;
			}

		} 
		//print first column 
		else if(i == endRow-1 && j<startRow){
			j+=1;
			i-=1;
			while(i-startRow){
				cout<<a[i][j]<<" ";
				i-=1;
				count-=1;
			}
			i+=1;
			
			startRow = i;
			startColumn = j+1;
			endRow -=1;
			endColumn -=1;
			i  = startRow;
			j = startColumn;
		
		}
	}

}

int main()
 {
	int test,m,n;
	int a[11][11];

	cin>>test;
	while(test--){
	    cin>>m;
	    cin>>n;
	    for(int i = 0;i<m;i++){
	        for(int j = 0;j<n;j++){
	            cin>>a[i][j];
	        }
	    }
	   
	    printSpiral(a,m,n);
	    cout<<endl;
	}
	return 0;
}
