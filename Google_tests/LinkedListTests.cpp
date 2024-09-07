#include "gtest/gtest.h"
#include "../LinkedList_Lib/List.h"
#include<cstdlib>

bool ListIsOrdered(List* l, bool printValues = false) {
    if (l->GetHead() == nullptr) return false;
    bool isOrdered = true;
    Node* tmp = l->GetHead();
    int previousValue = tmp->GetValue();

    while (tmp != nullptr && isOrdered) {
        if(printValues)
            std::cout << tmp->GetValue() << std::endl;
        if(previousValue > tmp->GetValue())
            isOrdered = false;
        previousValue = tmp->GetValue();
        tmp = tmp->GetNext();
    }

    return isOrdered;
}

TEST(LINKED_LIST_TEST_SUITE, InsertIntoEmptyList) {
    List* list = new List();

    list->Insert(10);

    EXPECT_EQ(list->GetHead()->GetValue(), 10);
    EXPECT_EQ(list->GetSize(), 1);

    delete list;
}

TEST(LINKED_LIST_TEST_SUITE, InsertMultipleElementsInAscendingOrder) {
    List* list = new List();

    list->Insert(-1);
    list->Insert(5);
    list->Insert(10);
    list->Insert(12);
    list->Insert(15);

    EXPECT_TRUE(ListIsOrdered(list));

    delete list;
}

TEST(LINKED_LIST_TEST_SUITE, InsertMultipleElementsInDescendingOrder) {
    List* list = new List();

    list->Insert(15);
    list->Insert(12);
    list->Insert(10);
    list->Insert(5);
    list->Insert(-100);

    EXPECT_TRUE(ListIsOrdered(list));

    delete list;
}

TEST(LINKED_LIST_TEST_SUITE, InsertDuplicateValues) {
    List* list = new List();

    list->Insert(10);
    list->Insert(10);
    list->Insert(5);

    EXPECT_EQ(list->GetHead()->GetValue(), 5);
    EXPECT_TRUE(ListIsOrdered(list));
    EXPECT_EQ(list->GetHead()->GetNext()->GetValue(), 10);

    delete list;
}

TEST(LINKED_LIST_TEST_SUITE, InsertNegativeValues) {
    List* list = new List();

    list->Insert(20);
    list->Insert(-10);
    list->Insert(-100);
    list->Insert(15);

    EXPECT_TRUE(ListIsOrdered(list));

    delete list;
}

TEST(LINKED_LIST_TEST_SUITE, InsertALotOfRandomNumbers) {
    auto seed = time(nullptr);
    srand((unsigned) seed);

    List* list = new List();

    for(int i = 0; i < 100000; ++i)
        list->Insert(rand());

    std::cout << "Seed for LINKED_LIST_TEST_SUITE: " << seed << std::endl;
    EXPECT_TRUE(ListIsOrdered(list));

    delete list;
}
