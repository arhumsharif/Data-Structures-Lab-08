//#include<iostream>
//using namespace std;
//const int s = 5;
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
//	Binary_Search_Tree()
//	{
//		root = NULL;
//	}
//	node* get_root()
//	{
//		return root;
//	}
//	void insertion(int val)
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
//	node* Search(int num)
//	{
//		cout << "-----------Searching---------- " << endl;
//		int count = 0;
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
//					cout << " Data Found on " << count << " Iteration " << endl;
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
//				count++;
//			}
//			return ptr;
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
//	void Ancestors(node* r, int d)
//	{
//		int count = 0;
//		if (r == NULL)
//		{
//			return;
//		}
//		node* temp = root;
//		cout << " Anscestors of " << d << " Are: " << endl;
//		while (temp->data != d)
//		{
//			count++;
//			cout << temp->data << endl;
//			if (d < temp->data)
//			{
//				temp = temp->left;
//			}
//			else if (d > temp->data)
//			{
//				temp = temp->right;
//			}
//		}
//		if (count == 0)
//		{
//			cout << " No Anscestor of " << d << endl;
//		}
//	}
//};
//int main()
//{
//	Binary_Search_Tree b1;
//	int a = 0, val;
//	int spaces = 5;
//	char choice;
//	while (a != -1)
//	{
//		cout << "1. Insert " << endl;
//		cout << "2. Search " << endl;
//		cout << "3. Display " << endl;
//		cout << "4. Find Anscestors " << endl;
//		cout << "Enter: ";
//		cin >> choice;
//		if (choice == '1')
//		{
//			cout << " Enter Value to Insert: ";
//			cin >> val;
//			b1.insertion(val);
//		}
//		else if (choice == '2')
//		{
//			node* temp = NULL;
//			cout << " Enter Value to Search: ";
//			cin >> val;
//			temp=b1.Search(val);
//			if (temp == NULL)
//			{
//				cout << " Data Does Not Found on Tree " << endl;
//			}
//		}
//		else if (choice == '3')
//		{
//			b1.Display(b1.get_root(), spaces);
//		}
//		else if (choice == '4')
//		{
//
//			cout << " Enter the Data You want to find the Anscestor of: ";
//			cin >> val;
//			if (b1.Search(val) == NULL)
//			{
//				cout << " Data is Not on Tree " << endl;
//			}
//			else
//			{
//				b1.Ancestors(b1.get_root(), val);
//			}
//		}
//		else
//		{
//			cout << " Invalid OPtion " << endl;
//		}
//		cout << "Enter -1 to Quit: ";
//		cin >> a;
//	}
//	return 0;
//}