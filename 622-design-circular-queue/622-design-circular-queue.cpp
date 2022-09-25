class MyCircularQueue {
public:
    int capacity;
    int *arr;
    int front;
    int rear;
    MyCircularQueue(int k) {
        capacity=k;
        arr=new int[capacity];
        front=-1;
        rear=-1;
    }
    
    bool enQueue(int value) {
        if(front==(rear+1)%capacity)
        {
            return false;
        }
        else
        {
            if(front==-1)
                front=0;
            rear=(rear+1)%capacity;
            arr[rear]=value;
            return true;
        }
    }
    
    bool deQueue() {
        if(front==-1)
        {
            return false;
        }
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front=(front+1)%capacity;
        }
        return true;
    }
    
    int Front() {
        return front==-1?-1:arr[front];
    }
    
    int Rear() {
        return front==-1?-1:arr[rear];
    }
    
    bool isEmpty() {
        return front==-1?true:false;
    }
    
    bool isFull() {
        return front==(rear+1)%capacity?true:false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */