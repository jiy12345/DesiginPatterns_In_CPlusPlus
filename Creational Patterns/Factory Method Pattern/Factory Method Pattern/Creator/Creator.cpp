#include "stdafx.h"
#include "Creator.h"

std::string Creator::SomeOperation() const {
    Product* product = this->FactoryMethod();
    std::string result = "Creator�� operation �Լ�: " + product->Operation() + "�� �Լ� ȣ��!";
    delete product;
    return result;
}
