class CreateNode:
	def __init__(self,item):
		self.data_part = item
		self.next_part = None

class Stack:

	def __init__(self):
		self.position_of_top= None

	def push(self,item):

		if self.position_of_top == None:
			self.position_of_top=CreateNode(item)
			print("Element inserted in the stack: ",self.position_of_top.data_part)

		else:
			newnode =CreateNode(item)
			newnode.next_part = self.position_of_top
			self.position_of_top = newnode
			print("Element inserted in the stack: ",self.position_of_top.data_part)
	def pop(self):

		if self.position_of_top==None:
			print("Stack is empty: ")
		else:
			poppednode = self.position_of_top
			self.position_of_top = self.position_of_top.next_part
			poppednode.next_part = None
			print("Popped Element form stack: ",poppednode.data_part)

	def peek(self):

		if self.position_of_top==None:
			print("Stack is empty: ")
		else:
			print("Top Element in the stack: ",self.position_of_top.data_part)


	def display(self):

		if self.position_of_top==None:
			print("Stack is empty: ")
		else:
			print("Present Elements in the stack: ")
			temp=self.position_of_top
			while temp!=None:
				print(temp.data_part," ")
				temp=temp.next_part
s= Stack()
s.push(20);
s.push(21);
s.push(22);
s.push(23);
s.push(24);
s.push(25);
s.push(26);
s.push(27);
s.push(28);
s.push(29);
s.push(30);
print(" ")
s.pop();
s.pop();
s.pop();
print(" ")
s.peek();
print(" ")
s.display();
