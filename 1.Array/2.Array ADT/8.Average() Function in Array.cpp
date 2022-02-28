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




int SumOfAllelements(struct Array arr)
{
    int sum=0;
    int i;
    for(i=0;i<arr.length;i++)
    {
        sum+=arr.A[i];
    }
    return sum;
}
float Avg(struct Array arr)
{
    int sum=0;
    int i;
    for(i=0;i<arr.length;i++)
    sum+=arr.A[i];
    return (sum/arr.length);

//return (float)sum(arr)/arr.length;
}
int main()
{
    struct Array arr={{1,2,3,4,5},10,5};
    Display(arr);
   
    
   cout<<"\nAverage is"<< Avg(arr);
  return 0;  
}