#include <iostream>
using namespace std;

/*int main()
{
   int x =20;
   
   int* ptr =&x;                                           <-------pointer
     
    *ptr=25;
    
   cout<<*ptr;*/
    
   /*int* ptr = new int (20);
   cout << * ptr;*/
   /*------------------------------------------------------------------------------------------------------*/
       
                                        /*struct*/        
 
 /*  struct book 
   {
       string name ;
       string aothor;
       int pages;
       double price;
      
   };
   
 int main()
 {  
   
 book b1;
 b1.name="sayed";
 b1.aothor="mohmed";
 b1.pages=300;
 b1.price=500;
 
 cout<<b1.name;
book    books[10];                                <--------array
books[0].name="book1";
cout<<books[0].name;
-----------------------------------------------------------------------------------------------------------*/    

/* structure
                                    
struct numbers 
{

    int x =10;  x=10    
    int y =20;  y=20   <------{input}
    int z =30;  z=30
};
-----------------------------------------------------------------------------------------------------------
                                                    union
union numbers
{
   int x =10;  x=30    
   int y =20;  y=30   <------{output}
   int z =30;  z=30
  
بيخزن اخر حاجه دخلت عشان كدا كل المتغيرات بقت  =30    
يعني بيحجز مكان ةاحد في الميموري
  عكس ال بيحجز مكان لكل المتغيراتSTRUCTURE   
};

union box
{
  double weight;
  double height;
};

int main()                      <-----------{output= 30}
{
box b1;
b1.weight =20;
b1.height=30;
 cout<< b1.weight<<endl;
 cout<< b1.height<<endl;

    return 0;
}
--------------------------------------------------------------------------------------------------------*/
                                    /* linked list vs array*/


/*{linked list 

flexible size
سهولة اضاقة وحذف العناصر وليس بالضروره حجز اماكن متتاليه في الذاكره
}*/

/*{array
    fixied size
    صعوبة اضافة وحذف العناصر ولابد من حجز اماكن متتاليه في الذاكره
}*/
/*--------------------------------------------------------------------------------------------------------*/
/*struct node {
    int data;
    node* next;
};

node* head = NULL;

void insertnode(int value);
void display();
void deletenode(int value);
void insertbeg(int value);

int main() {
    insertnode(10);                                              //add node
    insertnode(15);
    display();                                                  //function desplay
    deletenode(15);                                            //function delete    
    display();
    insertbeg(5);                                             //function beginning
    display();
    return 0;
}

void insertnode(int value) {
    node* new_node = new node;
    new_node->data = value;

    if (head == NULL) {
        head = new_node;
        new_node->next = NULL;
    } else {
        node* last = head;
        while (last->next != NULL) {
            last = last->next;
        }
        last->next = new_node;
        new_node->next = NULL;
    }
}

void display() {
    node* current_node;
    if (head == NULL) {
        cout << "Linked list is empty." << endl;
    } else {
        current_node = head;
        while (current_node != NULL) {
            cout << current_node->data << "\t";
            current_node = current_node->next;
        }
        cout << endl;
    }
}

void deletenode(int value) {
    if (head == NULL) {
        cout << "Linked list is empty. Cannot delete." << endl;
        return;
    }

    node* current = head;
    node* previous = nullptr;

    // If the node to be deleted is the head
    if (current->data == value) {
        head = current->next;
        delete current;
        return;
    }

    // Search for the node to be deleted
    while (current != NULL && current->data != value) {
        previous = current;
        current = current->next;
    }

    // If the node is not found
    if (current == NULL) {
        cout << "Node with value " << value << " not found." << endl;
        return;
    }

    // Update the next pointer of the previous node
    previous->next = current->next;

    // Free the memory of the deleted node
    delete current;
}

void insertbeg(int value) {
    node* new_node = new node;
    new_node->data = value;
    new_node->next = head;
    head = new_node;
}*/
/*---------------------------------------------------------------------------------------------------------*/    
                                             /*queue*/
                                             
/*const int size = 5;
int queue[size];
int front = -1, rear = -1;

void enqueue(int value);
void dequeue();
int peek();
void display(); // Corrected the function name

int main() {
    enqueue(5);
    enqueue(10);
    enqueue(15);
    display();
    dequeue();
    display();
    cout << "peek=" << peek();

    return 0;
}

void enqueue(int value) {
    if (rear != size - 1) {
        if (front == -1 && rear == -1)
            front++;
        queue[++rear] = value;
    } else {
        cout << "queue is full." << endl;
    }
}

void dequeue() {
    if (front != -1 && rear != -1 && front <= rear) {
        front++;
    } else {
        cout << "queue is empty.." << endl;
    }
}

int peek() {
    if (front != -1 && rear != -1 && front <= rear) {
        return queue[front];
    } else {
        cout << "queue is empty.." << endl;
        return -1; // Added a semicolon at the end
    }
}

void display() {
    if (front != -1 && rear != -1 && front <= rear) {
        for (int i = front; i <= rear; i++) { // Changed i<+rear to i <= rear
            cout << queue[i] << "\t"; // Added a semicolon at the end
        }
        cout << endl;
    } else {
        cout << "queue is empty.." << endl;
    }
}*/
/*------------------------------------------------------------------------------------------------------*/                                                
                                          
     
   class array {
private:
    int size;
    int length;
    int* items;

public:
    array(int arrSize) {
        size = arrSize;
        length = 0;
        items = new int[arrSize];
    }

    void fill() {
        int no_of_items;
        cout << "How many items do you want to fill?\n ";
        cin >> no_of_items;
        if (no_of_items > size) {
            cout << "You cannot exceed the array size\n";
            return;
        } else {
            for (int i = 0; i < no_of_items; i++) {
                cout << "Enter your item\n";
                cin >> items[i];
                length++;
            }
        }
    }
    void display(){
      cout<<"display array content \n";
        for (int i = 0; i < length; i++){
            cout<<items[i]<<"\t";
            
        }
        cout<<endl;
    }
    int getsize(){
        return size;
    }
    int getlength(){
        return length;
    }
};
   int main()
   {
     cout <<"hello this is array adt demo\n";  
     int arrSize;
    cout << "Enter the array size: ";
    cin >> arrSize;

    array myarray(arrSize);
    myarray.fill();
    myarray.display();
    cout << "Length of array: " << myarray.getlength() << endl;
    cout << "Size of array: " << myarray.getsize() << endl;

       return 0;
   }
     
     
     
     
     

     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
    
    
    
    
    
    
    
    
    





