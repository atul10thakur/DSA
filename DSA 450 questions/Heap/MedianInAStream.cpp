#include <bits/stdc++.h>
using namespace std;
   priority_queue<int> maxheap;
    priority_queue<int, vector<int>> minheap;

    int lSize = maxheap.size();
    int rSize = minheap.size();

void InsertNumber(int num)
{
 
    if (lSize == 0)     // first time insertion in heap
    {
        maxheap.push(num);
    }
    else if (lSize == rSize)   // if heap have equal elements
    {
        if (num < minheap.top())       // right to element is greater we insert directly in left half 
        {
            maxheap.push(num);
        }
        else
        {                                   // if  right half top element is smaller than current element is
            int temp = minheap.top();          
            minheap.pop();
            maxheap.push(temp);
            minheap.push(num);
        }
    }
    else             // if left half have only one extra element tahn right 
    {
        if (minheap.size() == 0)               // if right half dont have any element 
        {
            if (num > maxheap.top())    // check left half is smaller or not
            {
                minheap.push(num);
            }
            else                     // check left half is greater  
            {
                int temp = maxheap.top();
                maxheap.pop();
                minheap.push(temp);
                maxheap.push(num);
            }
        }else if(num >= minheap.top()){
            minheap.push(num);
        }
        else{
              if(num < maxheap.top()){
                   int temp = maxheap.top();
                maxheap.pop();
                minheap.push(temp);
                maxheap.push(num);
              }
              else{
                  minheap.push(num);
              }
        }
    }
}


int main(){
    InsertNumber(4);
    if(lSize > rSize){
        cout<<"median is :"<<maxheap.top();
    }
    else{
        cout<<"median is"<<(maxheap.top() + minheap.top() ) / 2;
    }
    return 0;
}