#include <iostream>
using namespace std;
struct Array
{
    int *A;
    int size;
    int length;
};
void Display(struct Array arr)
{
    int i;
    cout<<"\n Element are \n";
    for(i=0;i<arr.length;i++)
    {
        cout<<arr.A[i];
    }
}

int main() {
struct Array arr;
int n,i;
cout<<"Enter size of an Array";
cin>>arr.size;
arr.A=new int;
arr.length=0;
cout<<"Enter number of elements";
cin>>n;
cout<<"Enter all elements\n";
for(i=0;i<n;i++)
cin>>arr.A[i];
arr.length=n;
Display(arr);
	return 0;
}
