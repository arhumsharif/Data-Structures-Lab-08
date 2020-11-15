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
//	int count;
//	const int s = 5;
//	Binary_Search_Tree()
//	{
//		root = NULL;
//		count = 0;
//	}
//	node* get_root()
//	{
//		return root;
//	}
//	void set_count()
//	{
//		count = 0;
//	}
//	int get_count()
//	{
//		return count;
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
//	node* Search(int num)
//	{
//		if (root == NULL)
//		{
//			cout << " Tree is Empty " << endl;
//			return NULL; 
//		}
//		else
//		{
//			node* temp = root;
//			node* ptr = NULL;
//			while (temp != NULL)
//			{
//				if (temp->data == num)
//				{
//					ptr = temp;
//					return ptr;
//				}
//				else if (num < temp->data)
//				{
//					temp = temp->left;
//				}
//				else if (num > temp->data)
//				{
//					temp = temp->right;
//				}
//			}
//			return ptr;
//		}
//	}
//	void number_of_nodes(node* r)
//	{
//		if (r == NULL)
//		{
//			return;
//		}
//		number_of_nodes(r->left);
//		count++;
//		number_of_nodes(r->right);
//	}
//};
//int main()
//{
//	Binary_Search_Tree b1;
//	int a = 0;
//	int val;
//	int spaces = 5;
//	cout << "      Enter BST     " << endl;
//	while (a != -1)
//	{
//		cout << " Enter the value to Insert: ";
//		cin >> val;
//		b1.insert(val);
//		cout << "Enter -1 to Quit when finish Inserting : ";
//		cin >> a;
//	}
//	a = 0;
//	while (a != -1)
//	{
//		cout << "       BST is:           " << endl;
//		b1.Display(b1.get_root(), spaces);
//		cout << endl;
//		b1.set_count();
//		cout << " Now Enter the Node at a Specific Height (From which you want to find Number of Nodes:) : ";
//		cin >> val;
//		if (b1.Search(val) == NULL)
//		{
//			cout << " Your Data is Not On Tree " << endl;
//		}
//		else
//		{
//			b1.number_of_nodes(b1.Search(val));
//			cout << " Number of Nodes from Height " << val << " is: " << b1.get_count()-1;
//		}
//		cout <<endl<< " Enter -1 to Quit: ";
//		cin >> a;
//	}
//	return 0;
//}