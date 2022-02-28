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
int get(struct Array arr,int index)
{
    if(index>=0 && index<=arr.length)
    return arr.A[index];
    
    return -1;
}
int main()
{
    struct Array arr={{1,2,3,4,5},10,5};
    Display(arr);
    cout<<" \nElement is "<<get(arr,10);
  return 0;  
}