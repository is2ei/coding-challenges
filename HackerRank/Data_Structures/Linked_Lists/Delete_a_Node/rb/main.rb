#!/bin/ruby

require 'json'
require 'stringio'

class SinglyLinkedListNode
    attr_accessor :data, :next

    def initialize node_data
        @data = node_data
        @next = nil
    end
end

class SinglyLinkedList
    attr_accessor :head, :tail

    def initialize
        @head = nil
        @tail = nil
    end

    def insert_node node_data
        node = SinglyLinkedListNode.new node_data

        if not self.head
            self.head = node
        else
            self.tail.next = node
        end

        self.tail = node
    end
end

def print_singly_linked_list node, sep, fptr
    while node != nil
        fptr.write node.data

        node = node.next

        fptr.write sep if node != nil
    end
end

# Complete the deleteNode function below.

#
# For your reference:
#
# SinglyLinkedListNode
#     int data
#     SinglyLinkedListNode next
#
#
def deleteNode(llist, position)
    if position == 0
        return llist.next
    end
    node = llist
    while position > 1 do
        position -= 1
        node = node.next
    end
    node.next = node.next.next
    return llist
end

fptr = File.open(ENV['OUTPUT_PATH'], 'w')

llist = SinglyLinkedList.new

gets.to_i.times do
    llist_item = gets.to_i
    llist.insert_node llist_item
end

position = gets.to_i

llist1 = deleteNode llist.head, position

print_singly_linked_list llist1, " ", fptr
fptr.write "\n"

fptr.close()
