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
      cout << arr.A[i];
    }
}

void Insert(struct Array *arr,int index,int x)
{
    int i;
    if(index>=0 && index<=arr->length)
    {
        for(i=arr->length;i>index;i--)
        arr->A[i]=arr->A[i-1];
        arr->A[index]=x;
        arr->length++;
    }
}


int main ()
{
  struct Array arr = { {2, 3, 4, 5, 6}, 10, 5 };
  Insert(&arr,0,10);
  Display (arr);
  return 0;
}
