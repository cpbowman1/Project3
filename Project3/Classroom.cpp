#include <iostream>
#include Classroom.h
using namespace std;
{
	void addStudent(string id, string name, string major) //// AddStudent(…): Adds a new student to the list. 
														 //// The new student is placed based on the ALPHABETICAL ORDER of the names
	{
		student = *head;


	}
		void removeStudent(string id) //// : This functions will remove a student using the given id number.If the given id number is not in the list, it will give an error.
		void print() // Print all students in(alphabetical) order.id, name, and the major should be printed for each student.
		void print(string id) //Prints all information of a student for a given id
		Student at(int index) // Returns the student at given index
		int getSize() // // returns the number of students in the list
		bool isEmpty() //  returns true if list is empty, returns false otherwise
};
struct Node* head = NULL;
void insert(int new_data) {
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = head;
	head = new_node;
}


/** Node of a singly linked list of integers */
public class Node {
	private int element; // we assume elements are ints
	private Node next;
	/** Creates a node with the given element and next node. */
	public Node(Int s, Node n) {
		element = s;
		next = n;
	}
	/** Returns the element of this node. */
	public int getElement() { return element; }
	/** Returns the next node of this node. */
	public Node getNext() { return next; }
	// Modifier methods:
	/** Sets the element of this node. */
	public void setElement(int newElem) { element = newElem; }
	/** Sets the next node of this node. */
	public void setNext(Node newNext) { next = newNext; }
}
}




------------------
/** Node of a singly linked list of integers */
public class Node {
	private int element; // we assume elements are ints
	private Node next;
	/** Creates a node with the given element and next node. */
	public Node(Int s, Node n) {
		element = s;
		next = n;
	}
	/** Node of a singly linked list of integers */
	public class student Node {
		private int element; // we assume elements are ints
		private Node next;
		/** Creates a node with the given element and next node. */
		public Node(Int s, Node n) {
			element = s;
			next = n;
		}
