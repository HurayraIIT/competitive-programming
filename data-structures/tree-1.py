class TreeNode:
  def __init__(self, data) -> None:
    self.data = data
    self.children = []
    self.parent = None
  
  def add_child(self, child):
    child.parent = self
    self.children.append(child)

def build_product_tree():
  root = TreeNode("Electronics")
  laptop = TreeNode("Laptop")
  root.add_child(laptop)
  return root

if __name__ == "__main__":
  root = build_product_tree()
  pass