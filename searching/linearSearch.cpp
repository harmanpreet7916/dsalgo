#include <iostream>
using namespace std;
int linearSeach(int arr[],int key, int n )
{
   
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)

        {
            return i;
        }
        


    }
    return -1;

}
int main()
{
    int arr[]={2 ,34,1235,123,51,54,6,315,13,5,21};
    int num = sizeof(arr)/sizeof(int);
    int key = 4;
    int result =  linearSeach(arr,key,num);
    cout<<"----------------------------------------------"<<endl;
    cout<<"the result is "<<result<<endl;
    cout<<"----------------------------------------------"<<endl;


    return 0;
}