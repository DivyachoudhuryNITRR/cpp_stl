/*#set-->stores unique element
avg case == O(1)
worst case==O(n)

set<int>s;

FUNCTIONS :-
1.insert()
2.begin()/cbegin()
3.end()/cend()-->theoritically element after last element
4.count()-->true / false based on element is ppresent in set or nnot
5.clear()-->deleted all elements in set
6.find()-->search an element in set
if(s.find(2)!=s.end())
cout<<"true"<<endl;

7.erase()
8.size()
9.empty()

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    for(int i=1;i<=10;i++){
        s.insert(i);
    }
    cout<<"Elements present in the set : ";
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    int n=2;
    if(s.find(2)!=s.end()){
        cout<<n<<" is present in set "<<endl;
    }
    s.erase(s.begin());
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    cout<<s.size()<<endl;

    if(s.empty()==false){
        cout<<"The set is not empty "<<endl;
    }
    else{
        cout<<"The set is empty"<<endl;
    }
    s.clear();
    cout<<s.size()<<endl;
}