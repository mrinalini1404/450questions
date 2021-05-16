// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

/*
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        Node *head1=NULL;Node *tail1=NULL;
        
        Node *head2=NULL;Node *tail2=NULL;
        
        
        Node *temp=head;
        
        while(temp){
            
            if(temp->data%2==0){
                if(head1==NULL){
                    head1=tail1=new Node(temp->data);
                    
                }
                else{
                    tail1->next=new Node(temp->data);
                    tail1=tail1->next;
                }                

            }
            
            else{
                if(head2==NULL){
                    head2=tail2=new Node(temp->data);
                    
                }
                else{
                    tail2->next=new Node(temp->data);
                    tail2=tail2->next;
                }
            }
            temp=temp->next;
            
        }
        
        if(head1==NULL)return head2;
        
        tail1->next=head2;
        
        
        return head1;
        
        
    }
};

// { Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}
  // } Driver Code Ends
