#include <iostream>
#include <ctime>
using namespace std;
void StaticArray();
void HeapArray(int n);
void StackArray(int n);
int main()
{
    unsigned int start, end;
    start = clock();
    for(int i=0;i<123456;i++)
    StaticArray();
    end = clock();
    cout<<"Static Array time: "<<(end - start)<<" ms"<<endl;        
    start = clock();
    for(int i=0;i<123456;i++)
    HeapArray(123456);
    end = clock();
    cout<<"Heap Array time: "<<(end - start)<<" ms"<<endl; 
    start = clock();
    for(int i=0;i<123456;i++)
    StackArray(123456);
    end = clock();
    cout<<"Stack Array time: "<<(end - start)<<" ms"<<endl;
}
void StaticArray()
{
static int array[123456];
}
void HeapArray(int n)
{
int *array = new int[n];
}
void StackArray(int n)
{
int array[n];
}
