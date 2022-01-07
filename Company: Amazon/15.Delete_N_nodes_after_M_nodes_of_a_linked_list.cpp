//15. Delete N nodes after M nodes of a linked list 
//https://practice.geeksforgeeks.org/problems/delete-n-nodes-after-m-nodes-of-a-linked-list/1

class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        //Add code here  
        int n=1,m=N;
        Node* t = head;
        while(t){
            if(n==M){
                Node* p=t;
                while(p && m-- > 0){
                    p=p->next;
                }
                if(p) {
                    t->next = p->next;
                }
                else {
                    t->next = p;
                }
                n=0;
                m=N;
            }
            n++;
            t = t->next;
        }
    }
};
