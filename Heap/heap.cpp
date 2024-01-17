#include<bits/stdc++.h>
using namespace std;

class heap
{
    public:
    int size;
    int arr[1000];

    heap()
    {
        size = 0;
        arr[0] = -1;
    }

    void insert(int d)
    {
        size = size + 1;
        int ind = size;
        arr[ind] = d;

        int p = ind/2;

        while(ind > 1)
        {
            if(arr[p] < d)
            {
                ind = p;
            }
            else      return;
        }
    }

    void show()
    {
        for(auto i : arr)
        cout<<i<<endl;
    }
};

int main()
{
    heap h;
    h.insert(20);
    h.insert(10);
    h.insert(30);
    h.insert(5);
    h.insert(9);
    h.show();
    return 0;
}