import java.util.*;

class Node
{
	int data;
	Node left, right;

	Node(int d)
	{
		data = d;
		left = right = null;
	}
}

class deletionBST
{

	static Node delete(Node root, int val)
	{
		if(root == null)
			return root;
		if(val < root.data)
		{
			root.left = delete(root.left, val);
		}
		else if(val > root.data)
		{
			root.right = delete(root.right, val);
		}
		else
		{
			if(root.left == null)
			{
				Node t = root.right;
				root = null;
				return t;
			}
			else if(root.right == null)
			{
				Node t = root.left;
				root = null;
				return t;
			}
			Node inorderSuc = successor(root.right);
			root.data = inorderSuc.data;
			root.right = delete(root.right, inorderSuc.data);
		}

		return root;
	}

	static Node successor(Node n)
	{
		while(n.left != null)
			n = n.left;

		return n; 
	}

	static void inorder(Node r)
	{
		if(r == null)
			return;
		inorder(r.left);
		System.out.println(r.data);
		inorder(r.right);
	}


    public static void main(String args[])
    {
        Node root = new Node(7);
        root.left = new Node(3);
        root.right = new Node(10);
        root.left.left = new Node(2);
        root.left.right = new Node(4);
        root.right.left = new Node(8);

        root = delete(root, 3);
        inorder(root);
    }
}