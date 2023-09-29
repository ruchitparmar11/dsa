# include<iostream>
using namespace std;

class Queue {
    
    int size;
    int arr[10];
    int qfront;
    int rear; 
    
public:
    Queue() {
        size = 10;
        qfront = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(qfront == rear) {
            return true;
        }
        else
        {
            return false;
        }
    }

    void enqueue(int data) {
        if(rear == size)
            cout << "Queue is Full" << endl;
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        if(isEmpty()==true) {
            cout<<endl<<"Queue is Empty."<<endl;
        }
        else
        {	int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront==rear){
                qfront = 0;
                rear = 0;
            }
         return ans;
        }
    }

    int front() {
        if(qfront == rear) {
            return -1;
        }
        else
        {
            return arr[qfront];
        }
    }
    void display(){
        for(int i=qfront; i<rear; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main (){
    Queue Q;
    
    cout<<Q.isEmpty()<<endl;
    Q.enqueue(10);
    Q.enqueue(2);
    Q.enqueue(3);
    Q.enqueue(4);
    Q.display();
    // Q.dequeue();
    cout<<Q.front()<<endl;
    
    return 0;
}