
#include <iostream>
int main()

{

  using namespace std;

int a[] = {4,9,2,1,3,4,7,8,5,0,6};

 

    for (int i = 0; i < 10; i++)

{


 

  if (a[i+1] <  a[i])

   {

int x= a[i];

a[i] = a[i+1];

a[i+1] = x;


cout <<"i: " << i<<endl;

cout <<"i+1: " << i+1 <<endl;

  }

}

}

for (int k = 0; k < 11; k++)

{

cout<< a[k] << endl;

}

 
return 0;

 
}