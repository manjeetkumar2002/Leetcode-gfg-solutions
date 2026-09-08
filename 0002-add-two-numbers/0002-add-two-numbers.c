/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *ptr1,*ptr2,*temp,*head=0,*new;
    int sum=0,carry=0;
    ptr1=l1;
    ptr2=l2;
    while(ptr1!=NULL && ptr2!=NULL){
        int result= ptr1->val+ptr2->val+carry;
        sum=result%10;
        carry=result/10;
        new=(struct ListNode *)malloc(sizeof(struct ListNode));
        new->val=sum;
        new->next=0;
        if(head==0){
            head=temp=new;
        }
        else
        {
            temp->next=new;
            temp=new;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    while(ptr1!=0){
        new=(struct ListNode *)malloc(sizeof(struct ListNode));
        sum=(ptr1->val+carry)%10;
        carry=(ptr1->val+carry)/10;
        new->val=sum;
        new->next=0;
        temp->next=new;
        temp=new;
        ptr1=ptr1->next;
    }
    while(ptr2!=0){
        new=(struct ListNode *)malloc(sizeof(struct ListNode));
        sum=(ptr2->val+carry)%10;
        carry=(ptr2->val+carry)/10;
        new->val=sum;
        new->next=0;
        temp->next=new;
        temp=new;
        ptr2=ptr2->next;
    }
    if(carry!=0){
        new=(struct ListNode *)malloc(sizeof(struct ListNode));
        new->val=carry;
        new->next=0;
        temp->next=new;
    }
    return head;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna