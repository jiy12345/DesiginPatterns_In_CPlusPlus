#include "stdafx.h"
#include "Creator/Creator.h"
#include "ConcreteCreators/ConcreteCreator1.h"
#include "ConcreteCreators/ConcreteCreator2.h"

void ClientCode(const Creator& creator) {
    std::cout << "Client��: Creator Ŭ������ ���θ� ���� ���ص� ������ ���� ��� ����" << std::endl;
    std::cout << creator.SomeOperation() << std::endl;
}

int main() {
    std::cout << "=== ConcreteCreator1�� �̿��� ���ø����̼� ���� ===\n";
    Creator* creator = new ConcreteCreator1();
    ClientCode(*creator);
    std::cout << std::endl;
    std::cout << "=== ConcreteCreator2�� �̿��� ���ø����̼� ���� ===\n";
    Creator* creator2 = new ConcreteCreator2();
    ClientCode(*creator2);

    delete creator;
    delete creator2;
    return 0;
}