//
// Created by genri on 21.01.2023.
//

#ifndef INC_4_IDZ_OOP_SOURCE_H
#define INC_4_IDZ_OOP_SOURCE_H

#include <iostream>

struct Node;
struct Buff;
Buff* init(int size);
void addNode(Buff* buffer, int value);
void print(Buff* buffer, std::ostream &os);
#endif //INC_4_IDZ_OOP_SOURCE_H
