#include<iostream>
using namespace std;
struct Array
{
    int A[10];
    int size;
    int length;
    
};
void Display(struct Array arr)
{
    int i;
    cout<<"Elements are";
    for(i=0;i<arr.length;i++)
    {
        cout<<endl<<arr.A[i];
    }
}

void set(struct Array *arr,int index,int x)
{
    if(index>=0 && index<arr->length)
    arr->A[index]=x;
    
}
int main()
{
    struct Array arr={{1,2,3,4,5},10,5};
    Display(arr);
   
    set(&arr,10,50);
    Display(arr);
  return 0;  
}