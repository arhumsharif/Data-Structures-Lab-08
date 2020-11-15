//#include<iostream>
//using namespace std;
//class Stack
//{
//	int size;
//	int top;
//	int* arr;
//public:
//	Stack(int n)
//	{
//		size = n;
//		top = -1;
//		arr = new int[size];
//	}
//	bool IsFull()
//	{
//		if (top == size)
//		{
//			return true;
//		}
//		else
//			return false;
//	}
//	bool IsEmpty()
//	{
//		if (top == -1)
//		{
//			return true;
//		}
//		else
//			return false;
//	}
//	void push(int a)
//	{
//		if (IsFull() == true)
//		{
//			cout << " Stack is Full " << endl;
//			return;
//		}
//		else
//		{
//			top++;
//			arr[top] = a;
//		}
//	}
//	int pop()
//	{
//		if (IsEmpty() == true)
//		{
//			cout << " Stack is Empty " << endl;
//			return 0;
//		}
//		else
//		{
//			int val;
//			val = arr[top];
//			top--;
//			return val;
//		}
//	}
//	int Top()
//	{
//		return arr[top];
//	}
//};
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
//	void Traverse_PostOrder()
//	{
//		int a;
//		if (root == NULL)
//		{
//			cout << " Tree is Empty! " << endl;
//			return;
//		}
//		counter(root);
//		node* temp = root;
//		Stack s(count);
//		do
//		{
//			while (temp != NULL)
//			{
//				if (temp->right != NULL)
//				{
//					s.push(temp->right->data);
//					s.push(temp->data);
//					temp = temp->left;
//				}
//				else
//				{
//					s.push(temp->data);
//					temp = temp->left;
//				}
//			}
//			a = s.pop();
//			temp = Search(a);
//			if (temp->right!=NULL && temp->right->data==s.Top())
//			{
//				a = s.pop();
//				s.push(temp->data);
//				temp = Search(a);
//			}
//			else
//			{
//				cout << temp->data << " ";
//				temp = NULL;
//			}
//		}
//		while (s.IsEmpty() != true);
//	}
//	void Traverse_PreOrder()
//	{
//		node* temp = root;
//		int a;
//		counter(root);
//		Stack s1(count);
//		s1.push(temp->data);
//		while (s1.IsEmpty() != true)
//		{
//			a = s1.pop();
//			cout << a << " ";
//			temp = Search(a);
//			if (temp->right != NULL)
//			{
//				s1.push(temp->right->data);
//			}
//			if (temp->left != NULL)
//			{
//				s1.push(temp->left->data);
//			}
//		}
//	}
//};
//int main()
//{
//	Binary_Search_Tree b1;
//	int a = 0, spaces = 5, val;
//	while (a != -1)
//	{
//		cout << " Enter Value: ";
//		cin >> val;
//		b1.insert(val);
//		cout << " Enter -1 when Finish Inserting: ";
//		cin >> a;
//	}
//	cout << endl;
//	b1.Display(b1.get_root(), spaces);
//	cout << endl;
//	cout << " Post_Order Traverse is: ";
//	b1.Traverse_PostOrder();
//	cout << endl << endl;
//	cout << " Pre Order Traverse is: ";
//	b1.Traverse_PreOrder();
//	return 0;
//}