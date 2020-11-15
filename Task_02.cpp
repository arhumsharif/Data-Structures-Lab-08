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
//	node* extra;
//	int count;
//	Binary_Search_Tree()
//	{
//		extra = NULL;
//		root = NULL;
//		count = 0;
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
//	void find(node* r)
//	{
//		if (r == NULL)
//		{
//			return;
//		}
//	     find(r->left);
//		if (r->left == NULL && r->right == NULL)
//		{
//			extra = r;
//		}
//		 find(r->right);
//	}
//	Binary_Search_Tree Merge_trees(Binary_Search_Tree &r,Binary_Search_Tree &r1)
//	{
//		node* temp = NULL;
//		node* delete_;
//		int result;
//		r1.counter(r1.get_root());
//		result = r1.count;
//		cout << "----------Merging the Trees--------- " << endl;
//		for (int i = 0; i < result; i++)
//		{
//		    r1.find(r1.get_root());
//			temp = r1.extra;
//			r.insert(temp->data);
//			delete_ = r1.Delete_node(r1.get_root(), temp->data);
//		}
//		return r;
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
//				node* temp = r->right;
//				delete r;
//				return temp;
//			}
//			else if (r->right == NULL)
//			{
//				node* temp = r->left;
//				delete r;
//				return temp;
//			}
//			else
//			{
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
//	int a = 0,val;
//	int spaces = 5;
//	Binary_Search_Tree b1;
//	Binary_Search_Tree b2;
//	cout << " Enter the 1st BST " << endl;
//	while (a != -1)
//	{
//		cout << " Enter the Value to Insert: ";
//		cin >> val;
//		b1.insert(val);
//		cout << endl;
//		cout << " Enter -1 When You Finishing Inserting " << endl;
//		cin >> a;
//	}
//	cout << " First BST is: " << endl;
//	b1.Display(b1.get_root(),spaces);
//	cout << endl;
//	cout << " Enter the 2nd BST " << endl;
//	a = 0;
//	while (a != -1)
//	{
//		cout << " Enter the Value to Insert: ";
//		cin >> val;
//		b2.insert(val);
//		cout << endl;
//		cout << " Enter -1 When You Finishing Inserting " << endl;
//		cin >> a;
//	}
//	cout << " Second BST is: " << endl;
//	b2.Display(b2.get_root(), spaces);
//	cout << endl;
//	cout << "-------------Now Merging------------- " << endl;
//	Binary_Search_Tree b3;
//	b3 = b3.Merge_trees(b1, b2);
//	cout << endl << "After merging the Trees " << endl;
//	b3.Display(b3.get_root(), spaces);
//	return 0;
//}