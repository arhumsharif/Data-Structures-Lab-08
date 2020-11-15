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
//	void set_count(int a)
//	{
//		count = a;
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
//	void height(node* r)
//	{
//		if (r == NULL)
//		{
//			return;
//		}
//		height(r->left);
//		count++;
//		height(r->right);
//	}
//};
//int main()
//{
//	cout << "----------------- Monk Is Watching--------------- " << endl;
//	cout << endl;
//	Binary_Search_Tree b1;
//	int a = 0, val, spaces = 5;
//	cout << "             --Tree: What is Your Size Array --" << endl;
//	cout << " Array: ";
//	cin >> val;
//	int* arr = new int[val];
//	cout << endl << "              Tree: Tell me Your Values?     " << endl;
//	for (int i = 0; i < val; i++)
//	{
//		cin >> arr[i];
//		cout << endl << "        Array: Value No. " << i + 1 << " is: " << arr[i]<<endl;
//	}
//	cout << endl << "          Tree: I am Converting to You in A Binary Search Tree   " << endl;
//	for (int i = 0; i < val; i++)
//	{
//		b1.insert(arr[i]);
//	}
//	cout << endl;
//	cout << "                    Now BST is:  " << endl;
//	b1.Display(b1.get_root(), spaces);
//	cout << endl;
//	cout << "                       Monk: What is the Height of Tree now " << endl;
//	cout << "                                     Helping the Monk" << endl;
//	cout << " The Formula is: 1 <= " << val << " <= 10^3 " << endl;
//	if (val == 0)
//	{
//		b1.set_count(val+1);
//	}
//	else if (val == 1)
//	{
//		b1.set_count(val + 1);
//	}
//	else
//	{
//		b1.height(b1.get_root());
//	}
//	cout << " The Height of BST is: "<<b1.get_count()-1;
//	return 0;
//}