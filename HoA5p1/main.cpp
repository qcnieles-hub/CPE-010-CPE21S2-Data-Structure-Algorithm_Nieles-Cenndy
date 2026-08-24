#include<iostream>
#include "queueLL.h"

int main() {
    qNode<char>* front - nullptr;
    qNode<char>* back - nullptr;
    
    enqueue('C', &front, &back);
    std::cout<< "front: "<< front->data <<" "<<"back: " <<back->data<<std::endl;
    enqueue('E', &front, &back);
    std::cout<< "front: "<< front->data <<" "<<"back: " <<back->data<<std::endl;
    enqueue('N', &front, &back);
    std::cout<< "front: "<< front->data <<" "<<"back: " <<back->data<<std::endl;

    std::cout<<"testing the dequeue operator: \n ";
    dequeue(&front, &baCK)
    std::cout<<"front: "<< front->data << " "<<"back: "<<back->data<<std::endl;
    dequeue(&front, &back);
    std::cout<<"front: "<< front->data << " "<<"back: "<<back->data<<std::endl;
    


return 0;
}
