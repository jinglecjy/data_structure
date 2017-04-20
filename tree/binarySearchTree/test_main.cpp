#include <iostream>
#include "BinarySearchTree.h"
using namespace std;

void testBinarySearchTree(){
	BinarySearchTree bst;
	bst.insert(2);
	bst.insert(1);
	bst.insert(3);
	bst.insert(5);
	bst.insert(0);
 	cout << "ǰ�������"; bst.pre_order_traversal1(bst.getRoot()); cout << endl;
 	cout << "���������"; bst.in_order_traversal1(bst.getRoot()); cout << endl;
 	cout << "���������"; bst.post_order_traversal1(bst.getRoot()); cout << endl; 
 	cout << "��α�����"; bst.level_traversal(bst.getRoot()); cout << endl;
 	cout << "value = 3�Ľڵ��Ƿ���ڣ� " << ((bst.search_for_node1(bst.getRoot(), 3)==NULL)?"NO":"YES") << endl;
 	cout << "�Ƴ�value = 3�Ľڵ�..." << endl;
 	bst.remove_node(3); 
 	cout << "ǰ�������"; bst.pre_order_traversal1(bst.getRoot()); cout << endl;
	cout << "value = 3�Ľڵ��Ƿ���ڣ� " << ((bst.search_for_node1(bst.getRoot(), 3)==NULL)?"NO":"YES") << endl;
}

int main(){
	testBinarySearchTree();
	
	return 0;
} 
