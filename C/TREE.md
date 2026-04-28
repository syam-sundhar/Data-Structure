# **TREE**

&#x20;     :tree is a non linear data structure connected by edges and represents a hierarchal relationships.

EX:

&#x20;       A

&#x20;      / \\

&#x20;     B   c

&#x20;    / \\   \\

&#x20;   D   E   F

&#x20;  /   / \\

&#x20; G   H   I



* #### tree terminologies

node: it contains information or values or data.

root: the topmost node of a tree or the node has no parents.

parent node: the immediate predecessor of any node.

child node: the immediate successor of any node.

leaf node: the node does not have a child node. it is also called as external node.

non-leaf node :a node which is having at least one child. it is also called as internal node.

edge: connection between two nodes.

path: sequence of consecutive edges from root node to the given node.

ancestor: any node on the path of root node to given node.

descendant: any successor node on the path from given node to the leaf node.

siblings: child nodes with same parents.

subtree: a tree formed form any node to its descendance.

\-------

degree of node: the no.of children of that node. ex: B -> 2

degree of tree: max degree among all the nodes in the tree.  ex: 2 (B->2 ,E->2)

depth of node: no.of edges form root node to the given node. ex: F->2

depth of tree: maximum edges present from the root node to the leaf node.

height of node: no.of edges from the given node to the longest leaf node.

height of tree: same like depth of tree.

level of node: position of the node in the tree.





#### **BINARY TREE**

&#x20;   :it is  a type of tree data structure in it every node has at most two children.

ex:

&#x20;       A

&#x20;      / \\

&#x20;     B   c

&#x20;    / \\   \\

&#x20;   D   E   F



* ###### properties of binary tree:

&#x20; finding nodes

1. maximum number of nodes at level "l" are 2^l
2. the maximum number of nodes in the tree of height "h" is (2^(h+1))-1
3. the minimum nodes possible at height "h " is "h+1"

&#x20; finding from nodes

1. minimum height of tree with 'N' nodes is h=logbase2(n+1)
2. maximum height of tree with 'N' nodes is h=n-1



### **types of trees**

1. full binary tree: full binary tree is a type of binary tree which each node has either '0' or '2' children.

&#x09;leaf nodes- 0 children.

&#x09;internal nodes -must 2 children(not one).

2\. complete tree: it is a type of binary tree in which all the levels are filled except the last level and last level has nodes as left as possible.

&#x09;max no of nodes: 2^(h+1)-1

&#x09;min no of nodes:

3\. perfect binary tree: it is a type of binary tree all the internodes has exactly two children and all the leaf nodes are at same level.

&#x09;max no of nodes: 2^(h+1)-1

&#x09;min no of nodes: 2^(h+1)-1

4\. degenerated binary tree: it is a type of binary tree in which each internal node is having only single child.

&#x09;max no of nodes: h+1

&#x09;min no of nodes: h+1





* ##### **ARRAY REPRESENTATION:**

ONLY complete tree can be implemented using arrays

**\[A, B, C, D, E, F, G, H, I]**

**\[A, B, C, D, E, F, G, , , H, I]**

###### 

* ###### **BINARRY SEARCH TREE:**

&#x09;all the children on left side should be lesser than the root and the right side values should be grater than right.







# **GRAPHS**

Graph is a non linear data structure which is used to represent the relationship between

&#x09;				

\--> Graph terminologies :	  			

* Node/Vertices : Contains actual data. Represented by circles.
* Edges : Connection between the two nodes/vertices.
* Adjacent Nodes : Two vertices are called adjacents if they are connected by an edge.
* degree of a node: 
* size of a graph: total no of edges in a graph.





code is in: "C:\\Data Structure\\C\\tree.cpp"

#### TYPES OF GRAPHS:

1. Directional graph: 

imp: a-->b != b-->a

ex: a----->b

&#x20;          ^

&#x20;          |

&#x20;          |

&#x20;          c

2\. NON-Directional graph: it is also called as bidirectional graph.



ex:

&#x20;    a----------b

&#x20;               |

&#x20;               |

&#x20;               |

&#x20;               c

3\. weight graphs: in  this graphs has a weights.



ex:       10

&#x20;   a----------b

&#x20;              |

&#x20;              | 5

&#x20;              |

&#x20;              c

4\. unweighted graphs: the graphs has no weight.



5\. cyclic graphs: it is a type of graph that contains at least one cycle.



ex: A<----

&#x20;   |     |

&#x20;   |\_\_\_\_\_|    : even with a single node.

6\. acyclic graph: it is a type of graph it does not contains any loop.



7\. complete graph: a graph where every pair of vertices are connected.







