int count = 0;
    while(head != NULL){
        cout<<head->Data<<" -> ";
        head = head->next;
        count++;
    }
    cout<<"\nThe Number of Elements in Linked List is "<<count<<endl;
    int middle = count/2+1;