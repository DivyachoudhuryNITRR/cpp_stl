// #include <unordered_set>
// unordered_set :
/*
unordered_set<int>s;
unordered_set<string>str;


FUNCTIONS:
1.insert()
s.insert(1);

2.begin() -->first element
s.begin()

3.end()-->last element
s.end()


4.clear()-->delete all elements
s.clear()

5.find()-->to search an element
if(s.find(2)!=s.end()){
    return true;
}

6.erase()-->to delete a single element between a particualr range
s.erase()

7.size()-->length of the unordered_set
s.size()

8.empty()-->to check if it is empty or not
s.empty()

9.cbegin()-->first element

10.cend()-->last element

11.bucket_size()-->total number of elements present in a specific bucket in an unordered set

12.emplace()-->insert an element in set

13.max_size()-->maximum elements an unordered_set can hold

14.max_bucket_count()-->to check the maximum number of buckets an unordered set can hold


*/



#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int>s;
    for(int i=1;i<=10;i++){
        s.insert(i);
    }
    cout<<"Elements present in the unordered set: ";
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    int n=2;
    if(s.find(2)!=s.end()){
        cout<<n<<" is present in unordered set "<<endl;
    }

    s.erase(s.begin());
    cout<<"Elements after erasing : ";
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"The size of he unordered set is : "<<s.size()<<endl;
    if(s.empty()==false){
        cout<<"The unordered set is not empty()"<<endl;
    }
    else{
        cout<<"The unordered set is empty"<<endl;
    }
    s.clear();
    cout<<"Size of the unordered set after clearing all the elements :  "<<s.size();
}