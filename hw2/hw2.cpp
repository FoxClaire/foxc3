#include <iostream>
#include <string>
#include <string.h>



#include <vector>
 

int main()

{

  using namespace std;

  string bn1;

  string bn2;

  cout << "Please enter your number:"<< endl;

  cin >> bn1;

 

  cout << "Please enter your number:"<< endl;

  cin >> bn2;

 
int n = bn1.length();

char char1_array[n+1];
 

strcpy (char1_array, bn1.c_str());

 

int m = bn2.length();

char char2_array[m+1];

vector <int> v;


strcpy (char2_array, bn2.c_str());

int carry = 0;

for (int i = n- 1; i >= 0; i--) {




int c = (int)char1_array[i] + (int)char2_array[i] - 96 + carry;

int e = c%10;

int d = c /10; // one digit numbers added cant be more than 10

 

carry = d;

cout << e <<endl;

 

v.push_back (e);

}

if (carry == 1) {

 

v.push_back (carry);

 

}


for (int i= v.size() - 1; i >= 0; i--)

{


cout << v[i];

 

}

cout<<  endl;



return 0;

}

