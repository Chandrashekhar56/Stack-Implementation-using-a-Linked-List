#include <bits/stdc++.h>
using namespace std;
class use_for_stack{
public:
	int data_part;
	use_for_stack* next_part;
};
use_for_stack* position_of_top=NULL;

void push(int item)
{
    use_for_stack* ptr=new use_for_stack();
    if(position_of_top==NULL)
    {
            ptr->data_part = item;
            ptr->next_part = NULL;
            position_of_top = ptr;
            cout << "Element inserted in the stack :"<< ptr->data_part<<endl;
    }
    else
    {

        ptr->data_part = item;
        ptr->next_part = position_of_top;
        position_of_top = ptr;
        cout << "Element inserted in the stack :"<< ptr->data_part<<endl;
    }
}

void pop()
{   int popped=0;
	if (position_of_top==NULL)
    {
            cout<<"There are no node created"<<endl;
    }
    else
    {
        use_for_stack* temporary_pointer = position_of_top;
        position_of_top = position_of_top->next_part;
        popped = temporary_pointer->data_part;
        free(temporary_pointer);
        cout<<"Popped element from stack: "<<popped<<endl;
    }

}

void peek()
{
	if (position_of_top==NULL)
    {
        cout<<"There are no node created"<<endl;
    }
    else
    {
        cout << "position_of_top element in the stack: "<<position_of_top->data_part<<endl;
    }
}

void display()
{
    if(position_of_top==NULL)
    {
            cout<<"There are no node created"<<endl;
    }
    else
    {
              cout<<"Elements in the stack : ";
              use_for_stack *temporary_pointer=position_of_top;
              while(temporary_pointer!=NULL)
              {
                     cout<<temporary_pointer->data_part<<" ";
                     temporary_pointer=temporary_pointer->next_part;
              }
              cout<<"\n";

    }
}
int main()
{

	push(20);
	push(21);
	push(22);
    push(23);
	push(24);
	push(25);
    push(26);
	push(27);
	push(28);
    push(29);
	push(30);
	cout<<endl;
	pop();
	pop();
	pop();
	cout<<endl;
	peek();
	cout<<endl;
	display();
	return 0;
}
