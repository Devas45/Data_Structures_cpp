#include <iostream>
#include <vector>

using namespace std;
int main()
{
	  int m,n;
      cin>>m>>n;
	  int A[m][n];
	  int *aux[m];
	  int **ptr2;
      ptr2 = (int **)aux;
      for (int i = 0 ; i < m ; i++) aux[i] = (int *)A+ i * n ;
      for (int i = 0; i < m; i++) {for (int j = 0; j < n; j++) cin>>*(*(ptr2+j)+i);}
      for (int i = 0; i < m; i++) {for (int j = 0; j < n; j++) cout<<*(*(ptr2+j)+i)<<" ";cout<<endl;}
}
