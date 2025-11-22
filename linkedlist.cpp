#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct Student{
    int roll;
    Student *next;
    Student(int roll){
        this->roll=roll;
        this->next=nullptr;
    }
};
void insert(Student *&node){
    cout<<"How many student you insert"<<endl;
    int n;cin>>n;
    while(n--){
        cout<<"Enter student roll"<<endl;
        int roll;cin>>roll;
        Student *newStudent= new Student(roll);
        if(node==nullptr){
            node=newStudent;
        }else{
            Student *temp = node;
            while(temp->next!=nullptr){
                temp=temp->next;
            }
            temp->next=newStudent;
        }
        
        cout<<"Done"<<endl;
    }


}
void display(Student *node){
    cout<<"Displaying the Linked List"<<endl;
    while (node!=nullptr)
    {
        cout<<node->roll<<",";
        node=node->next;
    }
    cout<<endl;
    
}
void size(Student *node,int& sise,bool a){
    int s=0;

    while (node!=nullptr)
    {
        s++;
        node=node->next;
    }
    sise=s;
    if(a){
        cout<<"The size of the linked list is :"<<s<<endl;
    }
    
    
}
void insertAtEnd(Student *&node){
    if(node!=nullptr){
    cout<<"inter the roll of student\n";
    int roll;
    cin>>roll;
    Student *temp2=new Student(roll);
    Student *temp=node;
    while (temp->next!=nullptr)
    {
        temp=temp->next;
    }
    temp->next=temp2;
    cout<<"Successfull *-*\n";
    }
    else{
        insertAtFirst(node);
    }
    
}
void insertAtFirst(Student *&node){
    cout<<"Enter the roll :";
    int roll;
    cin>>roll;
    Student *temp=new Student(roll);
    temp->next = node;
    node = temp;
    cout << "insertion is successfull\n";
}
void insertAt(Student *&node){
    cout<<"Give the index value where want to add";
    int idx;cin>>idx;
    int s;
    size(node,s,false);
    if(idx==1){
        insertAtFirst(node);
    }else if(s+1==idx){
        insertAtEnd(node);
    }else if(idx<1 || s>idx){
        cout<<"index is out of bound"<<endl;
    }
    else{
        cout<<"\ninput the roll";
        int roll;cin>>roll;
        Student *temp1=new Student(roll);
        Student *temp=node,*temp2;
        for(int i=1;i<idx-1;i++){
            temp=temp->next;
        }
        temp2=temp->next;
        temp->next=temp1;
        temp1->next=temp2;
        cout<<"Successfully insert at index "<<idx<<endl;
    }
    


}
void deleteEnd(Student *&node){
    Student *temp=node;
    if(node==nullptr){
        cout<<"list is empty\n";
        return;
    }else if(node->next==nullptr){
        node=nullptr;
    }else{
    while (temp->next->next!=nullptr)
    {
        /* code */
        temp=temp->next;
    }
    temp->next=nullptr;
    }
    cout<<"sucessfull\n";
    

}
void deleteFirst(Student *&node,bool f,int &ch){
    if(node==nullptr){
        cout<<"list have no roll"<<endl;
    }else{
        node=node->next; 
        cout<<"Successfull\n"<<endl;
    }
    
    if(f==true){
        ch=1;
    }
   
}
void deleteAt(Student*& node){
    int idx;
    cout<<"Enter the index you want to delete:";
    cin>>idx;
    int s;
    size(node,s,false);
    if(idx==1){
        int c;
        deleteFirst(node,true,c);
    }else if(idx==s){
        deleteEnd(node);
    }
    else if(idx<1 || idx>s){
        cout<<"index is out of bound"<<endl;
    }
    else{
        Student *temp = node, *temp2;
        for (int i = 1; i < idx - 1; i++)
        {
            temp = temp->next;
        }
        temp2 = temp->next->next;
        temp->next = temp2;
        cout<<"successfull\n";
    }

}
void menu(Student *&node){
    bool check=true;
    while (check)
    {
        
        cout << R"(
        welcome to ManageSystem
        *******Menu*******
        1.display
        2.insert 
        3.size 
        4.insert at end
        5.insert at first
        6.insert at given index
        7.delete at end
        8.delete at first
        9.delete at given index
        10.exit(or type exit)
        enter your choice:
    )";
        int sise;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            display(node);
            break;
        case 2:
            insert(node);
            break;
        case 3:
            size(node,sise,true);
            break;
        case 4:
            insertAtEnd(node);
            break;
        case 5:
            insertAtFirst(node);
            break;
        case 6:
            insertAt(node);
            break;
        case 7:
            deleteEnd(node);
            break;
        case 8:
            int c;
            deleteFirst(node,false,c);
            break;
        case 9:
            deleteAt(node);
            break;
        case 10:
            check=false;
            break;
        default:
            cout << "please input right input" << endl;
            break;
        }
    }
}
int main(){
    
    Student *node=nullptr;
    insert(node);
    menu(node);
    
}