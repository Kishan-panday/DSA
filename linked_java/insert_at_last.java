// package linked_java;

public class insert_at_last {
    class Node{
        int data;
        Node next;
        Node(int data){
            this.data=data;
            this.next=null;
        }}
        Node head = null;
        public void insert(int data){
            Node newNode = new Node(data);
            if (head==null) {
                head=newNode;
                return;
            } 
            Node temp=head;
            while (temp.next!=null) {
                temp = temp.next;
            }
            temp.next= newNode;
            // newnNode.next=null;
        }
    
    public void print(){
         Node temp=head;
            while (temp!=null) {
                System.out.print(temp.data+"->");
                temp = temp.next;
            }
        System.out.println("null");
    }
            
            

    public static void main(String[] args) {
         insert_at_last list = new insert_at_last();
        list.insert(10);
        list.insert(30);
        list.insert(40);
        list.print();
    }
}
