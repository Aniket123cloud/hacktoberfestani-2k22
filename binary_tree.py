class Node:
	def __init__(self,value):
		self.head=value
		self.left=None
		self.right=None
		
class Tree:
	def __init__(self,root):
		self.root=Node(root)
		
	def inorder(self,start,string):
		if start:
			string+=str(start.head)+'-->'
			string=str(self.inorder(start.left,string))
			string=str(self.inorder(start.right,string))
		return string
		
		
tree = Tree(1)
tree.root.left = Node(2)
tree.root.right = Node(3)
tree.root.left.left = Node(4)
tree.root.left.right = Node(5)
tree.root.right.left = Node(6)
tree.root.right.right = Node(7)

print(tree.inorder(tree.root,''))