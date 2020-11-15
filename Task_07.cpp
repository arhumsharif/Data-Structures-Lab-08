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
//	int count;
//	node* root;
//	int* array;
//	const int s = 5;
//	Binary_Search_Tree()
//	{
//		root = NULL;
//		count = 0;
//	}
//	void make_intializing(int val)
//	{
//		array = new int[val];
//	}
//	void set_count()
//	{
//		count = 0;
//	}
//	int get_count()
//	{
//		return count;
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
//	void Array_Implementation(node* r)
//	{
//		if (r == NULL)
//		{
//			return;
//		}
//		array[count] = r->data;
//		count++;
//		Array_Implementation(r->left);
//		Array_Implementation(r->right);
//	}
//	void showing_Array()
//	{
//		cout << " Converted Array From BST is: ";
//		for (int i = 0; i < count; i++)
//		{
//			cout << array[i] << " ";
//		}
//		cout << endl;
//	}
//};
//int main()
//{
//	Binary_Search_Tree b1;
//	int a=0,spaces=5,val;
//	while (a != -1)
//	{
//		cout << "Enter Value to Insert: ";
//		cin >> val;
//		b1.insertion(val);
//		cout << " Enter -1 when You Finish Inserting: ";
//		cin >> a;
//	}
//	cout << endl;
//	cout << "        BST is:         " << endl;
//	b1.Display(b1.get_root(), spaces);
//	cout << endl;
//	b1.counter(b1.get_root());
//	b1.make_intializing(b1.get_count());
//	b1.set_count();
//	b1.Array_Implementation(b1.get_root());
//	cout << "      ------------ Array Converted from BST is ------------ " << endl;
//	b1.showing_Array();
//	return 0;
//}