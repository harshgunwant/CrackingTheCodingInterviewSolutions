There are a number of types of trees:
    1. Binary Tree
        Can have at most 2 children
        Divided further into Trees based on:
            
            Based on number of Children
                a. Full BT 
                    A BT with either 0 or 2 children node for each node.
                    Note: Read Binary tree theorem dervations(that relates leaves with nodes(total nodes/internal nodes))
                    eg. Maximum nodes in a FBT: 2^n -1 (n is the level)
                b. Degenerate BT
                    Each parent node will have only one child (either left or right) If every node has children on left - LEFT SKEWED TREE
                    on right - RIGHT SKEWED TREE. THese then behave as LL. 
            
            Based on Levels
                a. Complete BT
                    All levels filled except the lowest level nodes which are filled from as left as possible.
                    ****Terms to know:
                        Sibling - has same parent
                        Degree of a node - Number of children of a node
                        Internal/External Nodes - NonLeaf/leaf nodes
                        Level - count of the nodes to reach a destination node
                        Height - Number of edges to reach detination node. Root is at height 0. 
                b. Perfect BT 
                c. Balanced BT

    2. N-ary Tree
        Many children at every level (0 to n)
    3. Ternary Tree
        Can have at most 3 children(left, mid, right)
        Special Trie DS
        Trie has 26 pointers to children while this has only 3.

****** SPSECIAL TREES BASED ON THE VALUE OF THEIR NODES ******
1. BST
2. AVL Tree
3. Red-Black Tree
4. B-Tree
5. B+-Tree
6. Segment Tree

***** SPECIAL OF SPECIAL TREE ****
 
 FENWICK TREE