#include <iostream>
using namespace std;
struct Array
{
  int A[10];
  int size;
  int length;
};
void
Display (struct Array arr)
{
  int i;
  cout << "\n Element are \n";
  for (i = 0; i < arr.length; i++)
    {
      cout << arr.A[i]<<" ";
    }
}

int LinearSearch(struct Array arr,int key)
{
    int i;
    
        for(i=0;i<arr.length;i++)
        {
            if(key==arr.A[i])
            return i;
        }
        
    return -1;
}


int main ()
{
  struct Array arr = { {2, 3, 4, 5, 6}, 10, 5 };
  
  Display (arr);
  cout<<"\n At Index  "<<LinearSearch(arr,6);
  return 0;
}
