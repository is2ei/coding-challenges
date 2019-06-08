import java.io._
import java.math._
import java.security._
import java.text._
import java.util._
import java.util.concurrent._
import java.util.function._
import java.util.regex._
import java.util.stream._

object Solution {

    class SinglyLinkedListNode(var data: Int, var next: SinglyLinkedListNode = null) {
    }

    class SinglyLinkedList(var head: SinglyLinkedListNode = null, var tail: SinglyLinkedListNode = null) {
        def insertNode(nodeData: Int) = {
            val node = new SinglyLinkedListNode(nodeData)

            if (this.head == null) {
                this.head = node
            } else {
                this.tail.next = node
            }

            this.tail = node
        }
    }

    def printSinglyLinkedList(head: SinglyLinkedListNode, sep: String, printWriter: PrintWriter) = {
        var node = head

        while (node != null) {
            printWriter.print(node.data)

            node = node.next

            if (node != null) {
                printWriter.print(sep)
            }
        }
    }

// Complete the deleteNode function below.

    /*
     * For your reference:
     *
     * SinglyLinkedListNode {
     *     data: Int
     *     next: SinglyLinkedListNode
     * }
     *
     */
    def deleteNode(llist: SinglyLinkedListNode, position: Int): SinglyLinkedListNode = {

        if (position == 0) {
            return llist.next
        }

        var node = llist
        for (_ <- 1 until position) {
            node = node.next
        }

        node.next = node.next.next

        llist
    }

    def main(args: Array[String]) {
        val stdin = scala.io.StdIn

        val printWriter = new PrintWriter(sys.env("OUTPUT_PATH"))

        val llist = new SinglyLinkedList()

        val llistCount = stdin.readLine.trim.toInt

        for (_ <- 0 until llistCount) {
            val llistItem = stdin.readLine.trim.toInt
            llist.insertNode(llistItem)
        }

        val position = stdin.readLine.trim.toInt

        val llist1 = deleteNode(llist.head, position)

        printSinglyLinkedList(llist1, " ", printWriter)
        printWriter.println()

        printWriter.close()
    }
}
