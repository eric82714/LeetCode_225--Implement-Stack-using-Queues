from queue import Queue

class MyStack:

    def __init__(self):
        """
        Initialize your data structure here.
        """
        self.q = Queue()
        self.tmp = Queue()
        
        self.size = 0

    def push(self, x: int) -> None:
        """
        Push element x onto stack.
        """
        self.q.put(x)
        self.size += 1

    def pop(self) -> int:
        """
        Removes the element on top of the stack and returns that element.
        """
        if self.q.empty(): return
        
        top_element = self.q.queue[self.size-1]
        for i in range(self.size-1):
            self.tmp.put(self.q.queue[i])
        self.q = self.tmp       
        self.size -= 1
        self.tmp = Queue()
        
        return top_element
        
    def top(self) -> int:
        """
        Get the top element.
        """
        if self.q.empty(): return
        return self.q.queue[self.size-1]
        
    def empty(self) -> bool:
        """
        Returns whether the stack is empty.
        """
        return self.q.empty()
        

# Your MyStack object will be instantiated and called as such:
# obj = MyStack()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.top()
# param_4 = obj.empty()
