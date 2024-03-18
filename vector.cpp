/*#VECTOR :

vectors are dynamic arrays that has the ability to 
change the size whenever elements are added or deleted from them. vector elements can be easily
accessed and traversed using iterators.A vector stores elements in contigous memory locations.

vector<object_type>variable_name;
example : vector<int>v1;
          vector<char>v2;
          vector<string>v3;



Functions : 
1.begin()/cbegin()/rend()-->first element of the vector
auto iterator=itr;
itr=v1.begin();


crend()-->element before the first element

max_size()-->maximum size of vector can hold;
capacity()-->current capacity of the  vector

end()/cend()--> last element-->rbegin()/crbegin()
auto iterator=itr;
itr=v1.end();


push_back()-->inserted at end
v1.push_back(1);
v1.push_back(2);

insert()-->insert at the specified position
auto it=v1.begin();
v1.insert(it,5);-->insert 5 at beginning


erase()-->delete a specific element
vector<int>v1;
auto it=s1.begin();
v1.erase(it)-->erase the first element


pop_back()-->deletes the last element & returns it to the calling function

front()-->reference first element of vector
v1.front();

back()-->last elements 
v1.back();

clear()-->deletes all elements from the vector
v1.clear();

empty()-->to check if vector is empty or not
v1.empty();


size()--> return size of the vector


*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    for(int i=0;i<10;i++){
        v.push_back(i);
    }
    cout<<"the elements in the vector : ";
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<"\nThe front element of the vector : "<<v.front();
    cout<<"\nThe last element of the vector : "<<v.back();
    cout<<"\nThe size()of the vector: "<<v.size();
    cout<<"\n Deleting element from the end: "<<v[v.size()-1];
    v.pop_back();


    //insert 5 at beginning
    v.insert(v.begin(),5);

    cout<<v[0]<<endl;
    v.erase(v.end());
    cout<<v[0]<<endl;
    if(v.empty()){
        cout<<"\nvector is empty";
    }
    else{
        cout<<"\nvector is not empty"<<endl;
    }
    v.clear();
    cout<<v.size()<<endl;
}



