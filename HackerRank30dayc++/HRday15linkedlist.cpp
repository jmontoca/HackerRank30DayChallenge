#include <iostream>
#include <cstddef>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:
      
      //section that was implemented in this hacker rank challenge
      Node* insert(Node *head,int data)
      {
          Node* dataNode = new Node(data);

          //Complete this method
          //case1:
          //    empty list
          //case2:
          //    traverse the list to the end and add there
          if(head == NULL) {
              return dataNode;
          }
          else {
              Node* prev = head;
              while(prev->next != NULL) {
                  prev = prev->next;
              }
              prev->next = dataNode;
              return head;
          }
      }

      void display(Node *head)
      {
          Node *start=head;
          while(start)
          {
              cout<<start->data<<" ";
              start=start->next;
          }
      }
};
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
	mylist.display(head);
		
}