#define quiz1

#ifdef quiz1
/*
    { 30, 60, 20, 50, 40, 10 }      // before selection sort
      **                  **        // swap(30, 10)
    { 10, 60, 20, 50, 40, 30 }
          **  **                    // swap(60, 20)
    { 10, 20, 60, 50, 40, 30 }
              **          **        // swap(60, 30)
    { 10, 20, 30, 50, 40, 60 }
                  **  **            // swap(50, 40)
    { 10, 20, 30, 40, 50, 60 }
                      **            // swap(50, 50) (self swap)
    { 10, 20, 30, 40, 50, 60 }
                          **        // swap(60, 60) (self swap)
    { 10, 20, 30, 40, 50, 60 }      // after selection sort
*/
#endif // quiz1
