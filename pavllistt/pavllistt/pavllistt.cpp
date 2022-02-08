#include <iostream>
#include <string>

namespace flight {


	struct Plane
	{
		int id;
		char name[32];
		char dest[32];
		int num;
		Plane* next;
		Plane(int id, char const* name) {
			this->id = id;
			strcpy_s(this->name, name);
		}
		char* to_str() {
			return (char*)(char(id) + name);
		}

	};

	struct NodeList
	{
	private:
		struct Node
		{
			Plane* data;
			Node* next;
			Node(Plane& st) {
				data = &st;
			}
		};
		Node* head = nullptr;
		Node* tail = nullptr;
		

	public:
		void addFirst(Plane& data) {
			Node* node = new Node(data);
			if (head == nullptr) {
				head = node;
				tail = node;
			}
			else {
				node->next = head;
				head = node;
			}

		};
		void addLast(Plane* data);
		void viewList(Plane* ebeg);

	};
	void NodeList::addLast(Plane* data) {
		Node* node = new Node(*data);
		if (head == nullptr) {
			head = node;
			tail = node;
		}
		else {
			tail->next = node;
			tail = node;
		}
	}
	void viewList(Plane* ebeg) {
		Plane* enew = ebeg;
		while (enew) {
			printf(" Zayvka nomer %d\n", enew->num);
			printf(" Punkt naznocheniy: %s\n", enew->dest);
			printf(" FIO pasagira: %s\n", enew->name);
			printf(" Nomer reisa: %d\n", enew->id);
			printf(" Data veleta: %d/%d/%d\n\n", enew->num);
			if (enew->next) printf("\n");
			enew = enew->next;
		}
		return;
	}
}


int main()
{



}

