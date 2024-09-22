#include<iostream>
using namespace std;
/*int inputfirst(int arr1[3][3])
{
    
   for(int i=0; i<3; i++)
   {
    for(int j=0; j<3; j++)
    {
        cin>>arr1[i][j];
    }
   }
}
int printfirst(int arr1[3][3])
{
   for(int i=0; i<3; i++)
   {
    for(int j=0; j<3; j++)
    {
        cout<<arr1[i][j]<<" ";
    }
    cout<<" \n";
   }
}
int inputsecond(int arr2[3][3])
{
for(int i=0; i<3; i++)
   {
    for(int j=0; j<3; j++)
    {
        cin>>arr2[i][j];
    }
   }
}
int printsecond(int arr2[3][3])
{
   for(int i=0; i<3; i++)
   {
    for(int j=0; j<3; j++)
    {
        cout<<arr2[i][j]<<" ";
    }
    cout<<" \n";
   }
}
int main()
{
  int arr1[3][3];
  int arr2[3][3];
  inputfirst(arr1);
  inputsecond(arr2);
  printfirst(arr1);
  printsecond(arr2);
}*/
//#include<iostream>
//using namespace std; 
main() 
{  
      int  m1[5][5], m2[5][5], m3[5][5];
      int  i, j, r, c;
      
      cout<<"Enter the no.of rows of the matrices to be added(max 5):";
      cin>>r;
      cout<<"Enter the no.of columns of the matrices to be added(max 5):";
      cin>>c;
      
      cout<<"\n1st Matrix Input:\n";
	  for(i=0;i<r;i++)
	  {
	  	for(j=0;j<c;j++)
	  	{
	  		cout<<"\nmatrix1["<<i<<"]["<<j<<"]=  ";
	  		cin>>m1[i][j];
		}
	  } 
	  
	  cout<<"\n2nd Matrix Input:\n";
	  for(i=0;i<r;i++)
	  {
	  	for(j=0;j<c;j++)
	  	{
	  		cout<<"\nmatrix2["<<i<<"]["<<j<<"]=  ";
	  		cin>>m2[i][j];
		}
	  } 
	  
	  cout<<"\nAdding Matrices...\n";
	  
	  for(i=0;i<r;i++)
	  {
	  	for(j=0;j<c;j++)
	  	{
	  		m3[i][j]=m1[i][j]+m2[i][j];
		}
	  } 
	  
	  cout<<"\nThe resultant Matrix is:\n";

	  for(i=0;i<r;i++)
	  {
	  	for(j=0;j<c;j++)
	  	{
	  		cout<<"\t"<<m3[i][j];
		}
		cout<<endl;
	  } 
	  
}