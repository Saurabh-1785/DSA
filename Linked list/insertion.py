class Node:
  def __init__(self, data):
    self.data = data
    self.next = None


def insert_at_beginning(head, val):
  new_node = Node(val)
  new_node.next = head
  return new_node
  
head = None
head = insert_at_beginning(head, 30)
head = insert_at_beginning(head, 20)
head = insert_at_beginning(head, 10)

#Print the linked list

Curr = head
while Curr:
  print(Curr.data, end=" -> ")
  Curr = Curr.next
print("None")  # To indicate the end of the linked list