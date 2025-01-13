#include <iostream>

using namespace std;

class node
{
public:
int key;
node *left;
node *right;

node(int val)
{
key=val;
right=left=0;
}
};

class BST
{
private:
node *root;
public:
BST()
{
root=0;
}
bool isempty()
{
if(root==0)
return 1;
else
return 0;
}
void insert(int val)
{
if(isempty())
{
root=new node(val);
return;
}
node *p=new node(val);
node *temp=root,*prev;
while (temp!=NULL)
{
      
prev=temp;

 if(temp->key>p->key)
 temp=temp->left;
 else
 temp=temp->right;
}

 if(prev->key>p->key)
 prev->left=p;
 else
 prev->right=p;
 }
 
void infix(node *t)
{
if(t!=0)
{
infix(t->left);
cout<<t->key<<" ";
infix(t->right);
}
}

node* getroot()
{
return root;
}

void prefix(node *t)
{
if(t!=0)
{
cout<<t->key<<" ";
prefix(t->left);
prefix(t->right);
        
}
     
}

void Postorder(node *t)
{
if(t!=0)
{
Postorder(t->left);
Postorder(t->right);
cout<<t->key<<" ";
        
}     
}

};


int main()
{
BST my;



my.insert(40);
my.insert(35);
my.insert(50);
my.insert(25);
my.insert(60);

node *s=my.getroot();

cout<<"Inorder : ";
my.infix(s);
cout<<endl;


cout<<"Preorder : ";
my.prefix(s);
cout<<endl;


cout<<"Postorder : ";
my.Postorder(s);

cout<<endl<<endl;
system("pause");
return 0;
}
