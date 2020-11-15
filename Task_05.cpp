//#include<iostream>
//using namespace std;
//class node
//{
//public:
//	int data;
//	node* right;
//	node* left;
//	node()
//	{
//		data = 0;
//		right = NULL;
//		left = NULL;
//	}
//};
//class Binary_Search_Tree
//{
//public:
//	node* root;
//	const int s = 5;
//	Binary_Search_Tree()
//	{
//		root = NULL;
//	}
//	node* get_root()
//	{
//		return root;
//	}
//	void insert(int val)
//	{
//		node* ptr = new node;
//		ptr->data = val;
//		if (root == NULL)
//		{
//			root = ptr;
//			cout << " Node Inserted on Root " << endl;
//			return;
//		}
//		else
//		{
//			node* temp = root;
//			while (temp != NULL)
//			{
//				if (temp->data == ptr->data)
//				{
//					cout << " This Data already Exists! " << endl;
//					return;
//				}
//				else if (ptr->data < temp->data && temp->left == NULL)
//				{
//					temp->left = ptr;
//					cout << " Node inserted to the Left! " << endl;
//					return;
//				}
//				else if (ptr->data < temp->data)
//				{
//					temp = temp->left;
//				}
//				else if (ptr->data > temp->data && temp->right == NULL)
//				{
//					temp->right = ptr;
//					cout << " Node inserted to the Right! " << endl;
//					return;
//				}
//				else if (ptr->data > temp->data)
//				{
//					temp = temp->right;
//				}
//			}
//		}
//	}
//	void Traverse_Inorder(node* r)
//	{
//		if (r == NULL)
//		{
//			return;
//		}
//		Traverse_Inorder(r->left);
//		cout << r->data << "__ ";
//		Traverse_Inorder(r->right);
//	}
//	void Traverse_PreOrder(node* r)
//	{
//		if (r == NULL)
//		{
//			return;
//		}
//		cout << r->data << "__";
//		Traverse_PreOrder(r->left);
//		Traverse_PreOrder(r->right);
//	}
//	void Traverse_PostOrder(node* r)
//	{
//		if (r == NULL)
//		{
//			return;
//		}
//		Traverse_PostOrder(r->left);
//		Traverse_PostOrder(r->right);
//		cout << r->data << "__ ";
//	}
//	void Display(node* r, int space)
//	{
//		if (r == NULL)
//		{
//			return;
//		}
//		space = space + s;
//		Display(r->right, space);
//		cout << endl;
//		for (int i = s; i < space; i++)
//		{
//			cout << " ";
//		}
//		cout << r->data << endl;
//		Display(r->left, space);
//	}
//};
//int main()
//{
//	int spaces = 5;
//	int val;
//	Binary_Search_Tree b1;
//	int a = 0;
//	cout << " Enter the BST " << endl;
//	while (a != -1)
//	{
//		cout << " Enter the Value to Insert: ";
//		cin >> val;
//		b1.insert(val);
//		cout << endl;
//		cout << " Enter -1 When You Finishing Inserting " << endl;
//		cin >> a;
//	}
//	cout << " BST is: " << endl;
//	b1.Display(b1.get_root(), spaces);
//	cout << endl;
//	char choice;
//	a = 0;
//	while (a != -1)
//	{
//		cout << "1. In-Order Traversal " << endl;
//		cout << "2. Post-Order Traversal " << endl;
//		cout << "3. Pre-Order Traversal " << endl;
//		cout << "Enter: ";
//		cin >> choice;
//		if (choice == '1')
//		{
//			b1.Traverse_Inorder(b1.get_root());
//		}
//		else if(choice == '2')
//		{
//			b1.Traverse_PostOrder(b1.get_root());
//		}
//		else if(choice == '3')
//		{
//			b1.Traverse_PreOrder(b1.get_root());
//		}
//		else
//		{
//			cout << " Invalid " << endl;
//		}
//		cout <<endl<< " Enter -1 to Quit: ";
//		cin >> a;
//	}
//	return 0;
//}