"""
Detect a cycle in a linked list. Note that the head pointer may be 'None' if the list is empty.

A Node is defined as: 
 
    class Node(object):
        def __init__(self, data = None, next_node = None):
            self.data = data
            self.next = next_node
"""


def has_cycle(head):
    
    if head is None or head.next is None:
        return False
    
    first = head
    second = head.next
    while second is not None and second.next is not None:
        if first is second:
            return True

        first = first.next
        second = second.next.next
    
    return False
