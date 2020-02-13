typedef struct {
    int data[100];
    int size;
    int top;
} MyStack;

/** Initialize your data structure here. */

MyStack* myStackCreate() {
    MyStack* myStack = malloc(sizeof(MyStack));
    myStack->size = 0;
    
    return myStack;
}

/** Push element x onto stack. */
void myStackPush(MyStack* obj, int x) {
    obj->data[obj->size] = x;
    obj->size ++;
    obj->top = x;
}

/** Removes the element on top of the stack and returns that element. */
int myStackPop(MyStack* obj) {
    if(obj->size == 0) return -1;
    int tmp = obj->top;
    obj->size --;
    if(obj->size == 0) return tmp;
    else obj->top = obj->data[obj->size-1];
    
    return tmp;
}

/** Get the top element. */
int myStackTop(MyStack* obj) {
    if(obj->size == 0) return -1;
    return obj->top;
}

/** Returns whether the stack is empty. */
bool myStackEmpty(MyStack* obj) {
    return obj->size == 0;
}

void myStackFree(MyStack* obj) {
    
}

/**
 * Your MyStack struct will be instantiated and called as such:
 * MyStack* obj = myStackCreate();
 * myStackPush(obj, x);
 
 * int param_2 = myStackPop(obj);
 
 * int param_3 = myStackTop(obj);
 
 * bool param_4 = myStackEmpty(obj);
 
 * myStackFree(obj);
*/
