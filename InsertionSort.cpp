#include <iostream>
using namespace std;

void print(int t, int *a) {
	for(int i=0; i<t; ++i) {
		cout << "Elemento: " << i << " = " << a[i] << endl;
	}
	cout << "-----------------" << endl;
}

void insertion_sort(int t, int *a) {
	
   for(int j = 1; j < t; j++)
    {
      int key = a[j];
      int i = j-1;
      
      while(i >= 0 && a[i] > key)
      {
         a[i+1] = a[i];
         i--;
      }
      a[i+1] = key;
    }
   	
}

int main(int argc, char** argv)
{
	int v[8] = {26, 49, 38, 13, 58, 87, 34, 93};
	print(8, v);
	insertion_sort(8, v);
	print(8, v);
	
	return 0;
}
