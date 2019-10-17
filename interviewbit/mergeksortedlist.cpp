struct Data{
   //int row;
   ListNode* ptr;
   int val;
};

struct cmp{
 
    bool operator()(Data d1,Data d1){
        retun d1.val>d2.val;
   }
};
ListNode* mergeKLists(vector<ListNode*>& lists) {
        
     ListNode* head=NULL;

     if(lists.size()==0){
          return NULL;
     }
     int n=list.size();
     
     priority_queue<Data,vector<Data>,cmp> pq;
     for(int i=0;i<n;i++){
          Data d;
          d.val=lists[i]->val;
          //d.row=i;
          d.ptr=lists[i];
          pq.push(d);
     }
     Node* temp=head;

     while(!pq.empty()){
         Data d=pq.top();
         pq.pop();

         if(head==NULL){
            head=d.ptr;
         }else{
            temp->next=d.ptr;
            temp=temp->next;
         }
         
         if(d.ptr->next!=NULL){
              Data newd;
              //newd.row=d.row;
              newd.ptr=d.ptr->next;
              newd.val=d.ptr->val;
              pq.push(newd);
         }
     }

      return head;     
}
