 #include <stdio.h>
  #include <stdlib.h>

  /* performs binary addition for the given values */
  int binaryAddition(int n1, int n2) {
        int carry;
        while (n2 != 0) {

                carry = (n1 & n2) << 1;
                n1 = n1 ^ n2;
                n2 = carry;
        }
        return n1;
  }

  /* performs binary subtraction for the given values */
  int binarySubtracton(int n1, int n2) {
        int carry;
        n2 = binaryAddition(~n2, 1);

        while (n2 != 0) {
                carry = (n1 & n2) << 1;
                n1 = n1 ^ n2;
                n2 = carry;
        }
        return n1;
  }

  /* performs binary multiplication for the given values */
  int binaryMultiplication(int n1, int n2) {
        int i, res = 0;
        for (i = 0; i < n2; i++) {
                res = binaryAddition(res, n1);
        }
        return res;
  }

  /* performs binary division for the given values */
  int binaryDivision(int n1, int n2) {
        int i, res, count = 0, twosComplement;
        if (n1 < n2) {
                printf("Division of %d and %d is %d\n", n1, n2, 0);
                return 0;
        }

        res = n1;
        twosComplement = binaryAddition(~n2, 1);
        for (i = 0; res > 0; i++) {
                res = binaryAddition(res, twosComplement);
                if (res <= 0) {
                        if (res == 0)
                                count = binaryAddition(count, 1);
                        break;
                } else {
                        count = binaryAddition(count, 1);
                }
        }
        return count;
  }


  int main() {
        int n1, n2, res, ch;
        while (1) {
                printf("1. Binary Addition\n");
                printf("2. Binary Subtraction\n");
                printf("3. Binary Multiplication\n");
                printf("4. Binary Division\n5. Exit\n");
                printf("Enter your choice:");
                scanf("%d", &ch);
                if (ch != 5) {
                        printf("Enter the value for n1 and n2:");
                        scanf("%d%d", &n1, &n2);
                }

                switch(ch) {
                        case 1:
                                /* binary addition */
                                res = binaryAddition(n1, n2);
                                break;
                        case 2:
                                /* binary subtraction */
                                res = binarySubtracton(n1, n2);
                                break;
                        case 3:
                                /* binary multiplication */
                                res = binaryMultiplication(n1, n2);
                                break;
                        case 4:
                                /* binary division */
                                res = binaryDivision(n1, n2);
                                break;
                        case 5:
                                exit(0);
                        default:
                                printf("Wrong option!!\n");
                                break;
                }
                printf("Result: %d\n\n", res);
        }
  }