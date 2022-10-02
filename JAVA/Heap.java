import java.util.*;

class Heap {
    private int[] array;
    private int count;
    private int capacity;
    private int heap_type;

    // heap constructor
    public Heap(int capacity, int heap_type) {
        this.count = 0;
        this.heap_type = heap_type;
        this.capacity = capacity;
        this.array = new int[capacity];
    }

    // parent
    public int parent(int i) {
        if (i < 0 || i >= this.count) {
            return -1;
        }
        return (i - 1) / 2;
    }

    // leftchild
    public int leftChild(int i) {
        int left = 2 * i + 1;
        if (left >= this.count)
            return -1;
        return left;
    }

    // rightchild
    public int rightChild(int i) {
        int right = 2 * i + 2;
        if (right >= this.count)
            return -1;
        return right;
    }

    // getmaximum()
    public int getMaximum() {
        if (this.count == 0)
            return -1;
        return this.array[0];
    }

    // percolate down-heapifying the element at location i
    public void percolateDown(int i) {
        int l, r, max, temp;
        l = leftChild(i);
        r = rightChild(i);
        if (l != -1 && this.array[l] > this.array[i])
            max = l;
        else
            max = i;
        if (r != -1 && this.array[r] > this.array[i])
            max = r;
        if (max != i) {
            // swap the array[i] with array[max]
            temp = array[i];
            array[i] = array[max];
            array[max] = array[i];
        }
    }

    // deleting largest element from heap
    public int deleteMax() {
        if (this.count == 0)
            return -1;
        int data = this.array[0];
        this.array[0] = this.array[count - 1];
        this.count--;
        percolateDown(0);
        return data;
    }

    public void insert(int data) {
        int i;
        if (this.count == this.capacity)
            ResizeHeap();
        this.count++;
        i = this.count - 1;
        while (i > 0 && data > this.array[(i - 1) / 2]) {
            this.array[i] = this.array[(i - 1) / 2];
            i = (i - 1) / 2;
        }
        this.array[i] = data;
    }

    public void ResizeHeap() {
        int[] array_old = new int[this.capacity];
        // System.arraycopy(this.array, 0, array_old, this.count - 1);
        for (int i = 0; i < array.length; i++) {
            array_old[i] = array[i];
        }
        this.array = new int[this.capacity * 2];
        if (this.array == null) {
            System.out.println("Out of memory");
            return;
        }
        for (int i = 0; i < this.capacity; i++) {
            this.array[i] = array_old[i];
        }
        this.capacity *= 2;
        array_old = null;
    }

    // deleting heap
    public void destroyHeap() {
        this.capacity = 0;
        this.array = null;
    }

    // display heap
    public void display() {
        for (int i = 0; i < this.count; i++) {
            System.out.println(this.array[i]);
        }
    }

    public static void main(String[] args) {
        System.out.println("**********Heap data structure*********\n");
        Scanner sc = new Scanner(System.in);
        Heap h = new Heap(10, 1);
        int n = 0;
        while (n != 7) {
            System.out.println("*************MENU DRIVEN************\n");
            System.out.println(
                    "Choose the Operation: \n1.Insert \n2.Delete \n3.Display() \n4.Destroy Heap \n5.Get Maximum Element \n6.Exit\n");
            n = sc.nextInt();
            switch (n) {
                case 1:
                    System.out.println("Enter the elements to be inserted into Heap:");
                    int item = sc.nextInt();
                    h.insert(item);
                    break;

                case 2:
                    System.out.println("Element Deleted:" + h.deleteMax());
                    break;
                case 3:
                    System.out.println("Elements of the Heap:\n");
                    h.display();
                    break;
                case 4:
                    h.destroyHeap();
                    System.out.println("Heap deleted!!");
                    break;
                case 5:
                    System.out.println("Maximum Element of Heap:");
                    h.getMaximum();
                    break;
                case 6:
                    n = 6;
                    break;
                default:
                    System.out.println("Please enter digit between (1-6):");
                    break;
            }
        }
    }
}