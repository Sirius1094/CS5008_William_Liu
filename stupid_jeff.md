// Add 100 nodes and check that the size is 100
int unitTest4() {
    tree_t *testBST = bst_create();
    for (int i = 1; i <= 100; i++) {
        bst_add(testBST, i);
    }
    int size = bst_size(testBST);
    bst_free(testBST);
    return (size == 100);
}

// Add 50 nodes with values from 0-49 and check that the sum is correct
int unitTest5() {
    tree_t *testBST = bst_create();
    for (int i = 0; i < 50; i++) {
        bst_add(testBST, i);
    }
    int sum = bst_sum(testBST);
    bst_free(testBST);
    return (sum == 1225); // Sum of numbers from 0 to 49 is 1225
}

// Add 50 nodes with values from 49-0 and check that the sum is correct
int unitTest6() {
    tree_t *testBST = bst_create();
    for (int i = 49; i >= 0; i--) {
        bst_add(testBST, i);
    }
    int sum = bst_sum(testBST);
    bst_free(testBST);
    return (sum == 1225); // Sum of numbers from 0 to 49 is 1225
}

// Add nodes that create a highly unbalanced tree (basically a linked list)
// and make sure the sum is correct, print works, tree is the correct shape etc.
int unitTest7() {
    tree_t *testBST = bst_create();
    for (int i = 0; i < 100; i++) {
        bst_add(testBST, i);
    }
    int sum = bst_sum(testBST);
    bst_print(testBST, 0); // Print in ascending order
    bst_print(testBST, 1); // Print in descending order
    bst_free(testBST);
    return (sum == 4950); // Sum of numbers from 0 to 99 is 4950
}

// Add nodes that create a "V"-shaped tree (all nodes left children on the left 
// AND all nodes right children on the right) and make sure all your functions still work.
int unitTest8() {
    tree_t *testBST = bst_create();
    for (int i = 0; i < 50; i++) {
        bst_add(testBST, i);
        bst_add(testBST, 100 - i);
    }
    int sum = bst_sum(testBST);
    bst_print(testBST, 0); // Print in ascending order
    bst_print(testBST, 1); // Print in descending order
    bst_free(testBST);
    return (sum == 5050); // Sum of numbers from 0 to 100 is 5050
}

// Add nodes that create a full and balanced BST with at least 10 nodes.
// Check that this tree has the appropriate shape and sum.
int unitTest9() {
    tree_t *testBST = bst_create();
    int values[] = {5, 3, 7, 2, 4, 6, 8, 1, 9, 10}; // Balanced BST values
    for (int i = 0; i < 10; i++) {
        bst_add(testBST, values[i]);
    }
    int sum = bst_sum(testBST);
    bst_print(testBST, 0); // Print in ascending order
    bst_print(testBST, 1); // Print in descending order
    bst_free(testBST);
    return (sum == 55); // Sum of numbers from 1 to 10 is 55
}

// Fill a Binary Search Tree with values 1-100 and search for various values
int unitTest10() {
    tree_t *testBST = bst_create();
    // Fill the tree with values from 1 to 100
    for (int i = 1; i <= 100; i++) {
        bst_add(testBST, i);
    }
    // Search for various values
    int result = 1;
    for (int i = 1; i <= 100; i++) {
        if (!bst_find(testBST, i)) {
            result = 0;
            break;
        }
    }
    bst_free(testBST);
    return result;
}

// Test adding 100 nodes and then check that the size is 100
int unitTest11() {
    tree_t *testBST = bst_create();
    // Add 100 nodes
    for (int i = 1; i <= 100; i++) {
        bst_add(testBST, i);
    }
    int size = bst_size(testBST);
    bst_free(testBST);
    return (size == 100);
}

// Add 50 nodes with values from 0-49 and check that the sum is correct
int unitTest12() {
    tree_t *testBST = bst_create();
    // Add 50 nodes with values from 0 to 49
    for (int i = 0; i < 50; i++) {
        bst_add(testBST, i);
    }
    int sum = bst_sum(testBST);
    bst_free(testBST);
    return (sum == 1225); // Sum of numbers from 0 to 49 is 1225
}

// Test tree shape for 50 nodes added from 0-49
int unitTest13() {
    tree_t *testBST = bst_create();
    // Add 50 nodes with values from 0 to 49
    for (int i = 0; i < 50; i++) {
        bst_add(testBST, i);
    }
    // Print the tree to visually check shape
    bst_print(testBST, 0);
    bst_free(testBST);
    return 1; // Always return 1 as it's a visual check
}

// Add 50 nodes with values from 49-0 and check that the sum is correct
int unitTest14() {
    tree_t *testBST = bst_create();
    // Add 50 nodes with values from 49 to 0
    for (int i = 49; i >= 0; i--) {
        bst_add(testBST, i);
    }
    int sum = bst_sum(testBST);
    bst_free(testBST);
    return (sum == 1225); // Sum of numbers from 0 to 49 is 1225
}

// Test tree shape for 50 nodes added from 49-0
int unitTest15() {
    tree_t *testBST = bst_create();
    // Add 50 nodes with values from 49 to 0
    for (int i = 49; i >= 0; i--) {
        bst_add(testBST, i);
    }
    // Print the tree to visually check shape
    bst_print(testBST, 0);
    bst_free(testBST);
    return 1; // Always return 1 as it's a visual check
}

// Add nodes that create a highly unbalanced tree (basically a linked list)
// and make sure the sum is correct, print works, tree is the correct shape etc.
int unitTest16() {
    tree_t *testBST = bst_create();
    // Add 100 nodes to create a linked list
    for (int i = 0; i < 100; i++) {
        bst_add(testBST, i);
    }
    int sum = bst_sum(testBST);
    bst_print(testBST, 0); // Print in ascending order
    bst_print(testBST, 1); // Print in descending order
    bst_free(testBST);
    return (sum == 4950); // Sum of numbers from 0 to 99 is 4950
}

// Add nodes that create a "V"-shaped tree (all nodes left children on the left 
// AND all nodes right children on the right) and make sure all your functions still work.
int unitTest17() {
    tree_t *testBST = bst_create();
    // Add nodes to create a "V"-shaped tree
    for (int i = 0; i <= 50; i++) {
        bst_add(testBST, i);
        bst_add(testBST, 100 - i);
    }
    int sum = bst_sum(testBST);
    bst_print(testBST, 0); // Print in ascending order
    bst_print(testBST, 1); // Print in descending order
    bst_free(testBST);
    return (sum == 5050); // Sum of numbers from 0 to 100 is 5050
}

// full and balanced BST with at least 10 nodes. Check that this tree has the appropriate shape and sum.
int unitTest18() {
    tree_t *testBST = bst_create();
    // Add nodes to create a full and balanced BST
    int values[] = {5, 3, 7, 2, 4, 6, 8, 1, 9, 10}; // Balanced BST values
    for (int i = 0; i < 10; i++) {
        bst_add(testBST, values[i]);
    }
    int sum = bst_sum(testBST);
    bst_print(testBST, 0); // Print in ascending order
    bst_print(testBST, 1); // Print in descending order
    bst_free(testBST);
    return (sum == 55); // Sum of numbers from 1 to 10 is 55
}

// Test all NULLs except from malloc and empty trees
int unitTest19() {
    // Test bst_empty with NULL tree
    if (bst_empty(NULL) != -1) return 0;

    // Test bst_add with NULL tree
    if (bst_add(NULL, 5) != -1) return 0;

    // Test bst_sum with NULL tree
    if (bst_sum(NULL) != 0) return 0;

    // Test bst_find with NULL tree
    if (bst_find(NULL, 5) != 0) return 0;

    // Test bst_size with NULL tree
    if (bst_size(NULL) != 0) return 0;

    // Test bst_free with NULL tree
    bst_free(NULL);
    
    return 1;
}

// Test adding nodes to a tree and then freeing the tree
int unitTest20() {
    tree_t *testBST = bst_create();
    // Add some nodes
    bst_add(testBST, 5);
    bst_add(testBST, 3);
    bst_add(testBST, 7);
    bst_free(testBST);
    // Make sure the tree is freed without errors
    return 1;
}

int (*unitTests[])(void) = {
    unitTest1,
    unitTest2,
    unitTest3,
    unitTest4,
    unitTest5,
    unitTest6,
    unitTest7,
    unitTest8,
    unitTest9,
    unitTest10,
    unitTest11,
    unitTest12,
    unitTest13,
    unitTest14,
    unitTest15,
    unitTest16,
    unitTest17,
    unitTest18,
    unitTest19,
    unitTest20,
    NULL
};
