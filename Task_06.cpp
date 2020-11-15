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
//	void Largest()
//	{
//		if (root == NULL)
//		{
//			return;
//		}
//		node* temp = root;
//		while (temp->right != NULL)
//		{
//			temp = temp->right;
//		}
//		cout << temp->data << " is the Largest data in BST " << endl;
//	}
//	void Smallest()
//	{
//		if (root == NULL)
//		{
//			return;
//		}
//		node* temp = root;
//		while (temp->left != NULL)
//		{
//			temp = temp->left;
//		}
//		cout << temp->data << " is the Smallest data in BST " << endl;
//	}
//};
//int main()
//{
//	int val, spaces = 5;
//	Binary_Search_Tree b1;
//	int a = 0;
//	cout << "          Enter BST " << endl;
//	while (a != -1)
//	{
//		cout << " Enter the Value To Insert: ";
//		cin >> val;
//		b1.insert(val);
//		cout << " Enter -1 when Finish Inserting: ";
//		cin >> a;
//	}
//	cout << " BST is : " << endl;
//	b1.Display(b1.get_root(), spaces);
//	cout << endl << "--------------Finding the Largest Value in BST-------------- " << endl;
//	b1.Largest();
//	cout << endl << "--------------Finding the Smallest Value in BST-------------- " << endl;
//	b1.Smallest();
//	return 0;
//}