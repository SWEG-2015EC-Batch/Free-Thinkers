    Type of pointers:
        int* p1: Pointer to an integer.
        const int* p2: Pointer to a constant integer.
        int* const p3: Constant pointer to an integer.
        const int* const p4: Constant pointer to a constant integer.

    Invalid statements:
        int* p1 = 20;: This is attempting to assign an integer (20) to a pointer, which is invalid.
        *p2 = 50;: This is attempting to modify the value pointed to by a pointer to a constant integer, which is invalid.
        p3 = &y;: This is attempting to modify a constant pointer, which is invalid.
        p4 = &y;: This is attempting to modify a constant pointer, which is invalid.
        *p4 = 90;: This is attempting to modify the value pointed to by a pointer to a constant integer, which is invalid.
