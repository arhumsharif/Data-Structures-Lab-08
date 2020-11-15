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
//	const int s=5;
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
//	node* nodeOnRight(node* r)
//	{
//		node* temp = r;
//		while (temp->left != NULL)
//		{
//			temp = temp->left;
//		}
//		return temp;
//	}
//	node* Delete_node(node* r, int val)
//	{
//		if (r == NULL)
//		{
//			return r;
//		}
//		else if (val < r->data)
//		{
//			r->left = Delete_node(r->left, val);
//		}
//		else if (val > r->data)
//		{
//			r->right = Delete_node(r->right, val);
//		}
//		else
//		{
//			if (r->left == NULL)
//			{
//				count++;
//				node* temp = r->right;
//				delete r;
//				return temp;
//			}
//			else if (r->right == NULL)
//			{
//				count++;
//				node* temp = r->left;
//				delete r;
//				return temp;
//			}
//			else
//			{
//				count++;
//				node* ptr = nodeOnRight(r->right);
//				r->data = ptr->data;
//				r->right = Delete_node(r->right, ptr->data);
//			}
//		}
//		return r;
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
//	char choice;
//	int spaces = 5;
//	int a = 0;
//	int val;
//	Binary_Search_Tree b1;
//	cout << " Enter the BST " << endl;
//	while (a != -1)
//	{
//		cout << "1 . Insert " << endl;
//		cout << "2 . Delete " << endl;
//		cout << "3 . Display " << endl;
//		cout << "Enter: ";
//		cin >> choice;
//		if (choice == '1')
//		{
//			cout << " Enter the Value to Insert: ";
//			cin >> val;
//			b1.insert(val);
//		}
//		else if (choice == '2')
//		{
//			b1.set_count();
//			cout << " Enter the Value to Delete: ";
//			cin >> val;
//			b1.Delete_node(b1.get_root(),val);
//			if (b1.get_count() > 0)
//			{
//				cout << " Your Data has been Deleted " << endl;
//			}
//			else
//			{
//				cout << " Your Data Does Not Found " << endl;
//			}
//		}
//		else if (choice == '3')
//		{
//			b1.Display(b1.get_root(), spaces);
//		}
//		else
//		{
//			cout << "Invalid " << endl;
//		}
//		cout << endl;
//		cout << " Enter -1 to Quit: " << endl;
//		cin >> a;
//	}
//	cout << endl;
//}