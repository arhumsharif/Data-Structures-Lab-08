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
//	node* root;
//	int count;
//	const int s = 5;
//public:
//	Binary_Search_Tree()
//	{
//		root = NULL;
//		count = 0;
//	}
//	node* get_root()
//	{
//		return root;
//	}
//	int get_count()
//	{
//		return count;
//	}
//	void set_count()
//	{
//		count = 0;
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
//	void Leaf_nodes_count(node* r)
//	{
//		if (r == NULL)
//		{
//			return;
//		}
//		Leaf_nodes_count(r->left);
//		if (r->left == NULL && r->right == NULL)
//		{
//			count++;
//		}
//		Leaf_nodes_count(r->right);
//	}
//};
//int main()
//{
//	Binary_Search_Tree b1;
//	int a=0, val, spaces = 5;
//	char choice;
//	while (a != -1)
//	{
//		cout << "1. Insert " << endl;
//		cout << "2. Display " << endl;
//		cout << "3. Count Leaf Nodes " << endl;
//		cout << "Enter: ";
//		cin >> choice;
//		if (choice == '1')
//		{
//			cout << " Enter Value To Insert: ";
//			cin >> val;
//			b1.insert(val);
//		}
//		else if (choice == '2')
//		{
//			b1.Display(b1.get_root(), spaces);
//		}
//		else if (choice == '3')
//		{
//			b1.set_count();
//			b1.Leaf_nodes_count(b1.get_root());
//			cout << " Number of Leaf Nodes are " << b1.get_count()<<endl;
//		}
//		else
//		{
//			cout << " Invalid " << endl;
//		}
//		cout <<endl<< "Enter -1 to Quit: ";
//		cin >> a;
//	}
//}