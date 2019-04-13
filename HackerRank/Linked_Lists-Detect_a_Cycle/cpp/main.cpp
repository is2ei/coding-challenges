bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    int max_len = 100;
    while(max_len-- && head != nullptr) {
        head = head->next;        
    }
    
    if (max_len > 0) {
        return false;
    } else {
        return true;
    }
}
