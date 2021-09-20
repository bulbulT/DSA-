class Node {
    	public :
    	int data;
    	Node *next;

    	Node(int data) {
        	this->data = data;
        	next = NULL;
    	}
	};


class MinStack {
    Node* head;
    int size;
   
public:
    /** initialize your data structure here. */
    MinStack() {
        head = NULL;
        size = 0;
        
        
    }
    
    void push(int val) {
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
        }
        else{
            Node* temp = head;
            head = newNode;
            newNode->next = temp;
        }
        size++;
        
    }
    
    void pop() {
        if(head == NULL){
            return;
        }
        head = head->next;
        size--;
        
    }
    
    int top() {
        return head->data;
    }
    
    int getMin() {
        Node* temp = head;
        int min = INT_MAX;
        while(temp != NULL){
            if(temp->data < min){
                min = temp->data;
            }
            temp = temp->next;
        }
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */