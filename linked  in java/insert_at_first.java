public class insert_at_first{
    class Node{
        int data;
        Node next;
        Node(int data){
            this.data=data;
            this.next=null;
        }
    }
     Node head = null;
    public void addFirst(int data){
        Node newnNode= new Node(data);
        if(head==null) {
            head=newnNode;
            return;
        }
        newnNode.next =head;
        head = newnNode;
    }
    public void print(){
        Node temp = head;
        while (temp!=null) {
            System.out.print(temp.data+"->");
            temp = temp.next;
        }
        System.out.println("null");
    }
    public static void main(String[] args) {
        insert_at_first list = new insert_at_first();
        list.addFirst(10);
        list.addFirst(20);
        list.addFirst(30);
        list.print();
    }
}