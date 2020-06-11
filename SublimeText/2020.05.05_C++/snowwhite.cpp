#include <iostream>
#include <vector>
#include <algorithm>
# define Max 9

using namespace std;


vector<int> snowwhites;
int sum = 0;

void snow(void){

	for(int i = 0; i< 9; i++){
		for (int j = i + 1; j < 9; j++){
			if(sum - snowwhites[i] - snowwhites[j] == 100)
			{
				for(int k; k< 9; k++;){
					if( k != i && k != j){
						cout << snowwhites[k] << endl;
					}
				}
				return ;
			}	

		}
	}


}




int main(void)
{	
	
	for(int i=0; i<Max; i++){
		int temp;
		cin << temp;
		snowwhites.push_back(temp);
		sum += temp;
	}
	sort(snowwhites.begin(), snowwhites.end());

	snow();

	return 0;
}