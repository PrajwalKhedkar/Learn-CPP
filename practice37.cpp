
// TEMPLATE

#include<iostream>
using namespace std;
template <class T> // Declaring template
class vector
{   public:
    T *arr;
    int size;
    vector(int m)
    {
        size=m;
        arr=new T[size];
    }
    T dotproduct(vector &v)
    {
        T d=0;
        for(int i=0;i<size;i++)
        {
            d+=this->arr[i]*v.arr[i];
        }
        return d;
    }
};
int main()
{
    vector <float> v1(3); // setting data type
    v1.arr[0]=4.5;
    v1.arr[1]=4.5;
    v1.arr[2]=4.5;
    vector <float> v2(3);
    v2.arr[0]=3.5;
    v2.arr[1]=3.5;
    v2.arr[2]=3.5;

    float a=v1.dotproduct(v2);
    cout<<a<<endl;
    return 0;
}