#include <iostream>
#include <list>
#include<map>
using namespace std;

int main()
{
    list<int> List;
    List.push_back(1);
    //    List.push_back(1);
    List.push_back(3);
    List.push_back(1);
    List.push_back(1);
    List.push_back(5);
    List.push_back(1);
    List.push_back(1);
    for (list<int>::iterator i = List.begin(); i != List.end(); )
    {

        if (*i == 1)
        {
            i = List.erase(i);
            cout << "i:" << *i << " ";
        }else {
            ++i;
        }
    }
    cout<<endl;
    map <int,int> a;
    a.insert(map<int,int>::value_type(8,9));
    cout<<1+2-4/4*5;
}