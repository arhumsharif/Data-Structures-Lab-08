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
//	int* arr;
//	const int s = 5;
//public:
//	Binary_Search_Tree()
//	{
//		root = NULL;
//		count = 0;
//	}
//	void intializing(int val)
//	{
//		arr = new int[val];
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
//	void insert_right(int val)
//	{
//		node* ptr = new node;
//		ptr->data = val;
//		if (root == NULL)
//		{
//			root = ptr;
//			cout << " Node Inserted on Root! " << endl;
//		}
//		else
//		{
//			node* temp1 = root;
//			while (temp1!= NULL)
//			{
//				if (temp1->data == ptr->data)
//				{
//					cout << " This Data Already Exists " << endl;
//					return;
//				}
//				temp1 = temp1->right;
//			}
//			 temp1 = root;
//			while (temp1 != NULL)
//			{
//				if (temp1->data == ptr->data)
//				{
//					cout << " This Data Already Exists " << endl;
//					return;
//				}
//				temp1 = temp1->left;
//			}
//			node* temp = root;
//			while (temp->right != NULL)
//			{
//				temp = temp->right;
//			}
//			temp->right = ptr;
//			cout << " Node Inserted to Right! " << endl;
//		}
//	}
//	void insert_left(int val)
//	{
//		node* ptr = new node;
//		ptr->data = val;
//		if (root == NULL)
//		{
//			root = ptr;
//			cout << " Node Inserted on Root! " << endl;
//		}
//		else
//		{
//			node* temp1 = root;
//			while (temp1!= NULL)
//			{
//				if (temp1->data == ptr->data)
//				{
//					cout << " This Data Already Exists " << endl;
//					return;
//				}
//				temp1 = temp1->left;
//			}
//			 temp1 = root;
//			while (temp1 != NULL)
//			{
//				if (temp1->data == ptr->data)
//				{
//					cout << " This Data Already Exists " << endl;
//					return;
//				}
//				temp1 = temp1->right;
//			}
//			node* temp = root;
//			while (temp->left != NULL)
//			{
//				temp = temp->left;
//			}
//			temp->left = ptr;
//			cout << " Node Inserted to left! " << endl;
//		}
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
//	void counter(node* r)
//	{
//		if (r == NULL)
//		{
//			return;
//		}
//		counter(r->left);
//		count++;
//		counter(r->right);
//	}
//	void traverse_inorder(node* r)
//	{
//		if (r == NULL)
//		{
//			return;
//		}
//		traverse_inorder(r->left);
//		arr[count] = r->data;
//		count++;
//		traverse_inorder(r->right);
//	}
//	void IsBst()
//	{
//		int read = 0;
//		for (int i = 0; i < count-1; i++)
//		{
//			for (int j = i + 1; j < count; j++)
//			{
//				if (arr[i] > arr[j])
//				{
//					read++;
//				}
//			}
//		}
//		if (read == 0)
//		{
//			cout << " Your Tree is a BST " << endl;
//		}
//		else
//		{
//			cout << " Your Tree is not a BST " << endl;
//		}
//	}
//};
//int main()
//{
//	Binary_Search_Tree b1;
//	int a = 0,val,spaces=5;
//	char choice;
//	cout << "        Enter BST " << endl;
//	while (a != -1)
//	{
//		cout << " 1. To Insert at Right " << endl;
//		cout << " 2. To Insert at Left " << endl;
//		cout << "Enter: ";
//		cin >> choice;
//		if (choice == '1')
//		{
//			cout << " Enter the Value to Insert: ";
//			cin >> val;
//			b1.insert_right(val);
//		}
//		else if (choice == '2')
//		{
//			cout << " Enter the Value to Insert: ";
//			cin >> val;
//			b1.insert_left(val);
//		}
//		else
//		{
//			cout << " Invalid Choice " << endl;
//		}
//		cout << " Enter -1 when Finish Inserting: ";
//		cin >> a;
//	}
//	cout << endl << "       BST is " << endl;
//	b1.Display(b1.get_root(), spaces);
//	b1.counter(b1.get_root());
//	b1.intializing(b1.get_count());
//	b1.set_count();
//	b1.traverse_inorder(b1.get_root());
//	cout << endl;
//	cout << "-------- ";
//	b1.IsBst();
//	cout << "-------- ";
//	return 0;
//}