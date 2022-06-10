#include <stdio.h>
#define N_BLOCKS 10
#define MATRIX_SIZE 7
// function to display the matrix
void display3D(int result[N_BLOCKS][MATRIX_SIZE][MATRIX_SIZE]){

   printf("\nOutput 3D:\n");
    for(int m = 0; m < N_BLOCKS; m++){
        for (int i = 0; i < MATRIX_SIZE; ++i) {
            for (int j = 0; j < MATRIX_SIZE; ++j) {
                printf("%d  ", result[m][i][j]);
                if (j == MATRIX_SIZE-1)
                    printf("\n");
            }
        }
        printf("\n");
    }
}

void multiply(int a[N_BLOCKS][MATRIX_SIZE][MATRIX_SIZE], int b[N_BLOCKS][MATRIX_SIZE][MATRIX_SIZE], int c[N_BLOCKS][MATRIX_SIZE][MATRIX_SIZE]){;
    for (int m = 0; m < N_BLOCKS; m++){
        int (*pa)[MATRIX_SIZE] = a[m];
        int (*pb)[MATRIX_SIZE] = b[m];
        int (*pc)[MATRIX_SIZE] = c[m];
        for (int i = 0; i < MATRIX_SIZE; ++i) {
            for (int j = 0; j < MATRIX_SIZE; ++j) {
                int sum = 0;
                for (int k = 0; k < MATRIX_SIZE; ++k) {
                    sum += pa[i][k] * pb[k][j];
                }
            pc[i][j] = sum;
            c[m][i][j] = sum;
            }
        }
    }
    display3D(c);
}

// function to display the matrix
void display(int result[MATRIX_SIZE][MATRIX_SIZE]){

   printf("\nOutput Matrix:\n");
   for (int i = 0; i < MATRIX_SIZE; ++i) {
      for (int j = 0; j < MATRIX_SIZE; ++j) {
         printf("%d  ", result[i][j]);
         if (j == MATRIX_SIZE-1)
            printf("\n");
      }
   }
}

void compare(int correct_matrix[N_BLOCKS][MATRIX_SIZE][MATRIX_SIZE], int test_matrix[N_BLOCKS][MATRIX_SIZE][MATRIX_SIZE]){
    for (int m = 0; m < N_BLOCKS; m++){
        for (int i = 0; i < MATRIX_SIZE; ++i) {
            for (int j = 0; j < MATRIX_SIZE; ++j) {
                if (correct_matrix[m][i][j] != test_matrix[m][i][j]){
                        printf("Incorrect resulting matrix");
                        return;
                }
            }
        }
    }  
    printf("Correct matrices for all tests\n");
}

int main(){
    int my_a[N_BLOCKS][MATRIX_SIZE][MATRIX_SIZE] = {
                        {{1, 1, 2, 1, 3, 4, 4},
                        {1, 4, 5, 3, 5, 6, 7},
                        {2, 6, 1, 2, 5, 7, 8},
                        {5, 2, 1, 3, 4, 4, 6},
                        {1, 4, 5, 3, 5, 6, 7},
                        {2, 6, 1, 2, 5, 7, 8},
                        {5, 2, 1, 3, 4, 4, 6}},
                         {{1, 1, 2, 1, 3, 4, 4},
                        {1, 4, 5, 3, 5, 6, 7},
                        {2, 6, 1, 2, 5, 7, 8},
                        {5, 2, 1, 3, 4, 4, 6},
                        {1, 4, 5, 3, 5, 6, 7},
                        {2, 6, 1, 2, 5, 7, 8},
                        {5, 2, 1, 3, 4, 4, 6}},
                         {{1, 1, 2, 1, 3, 4, 4},
                        {1, 4, 5, 3, 5, 6, 7},
                        {2, 6, 1, 2, 5, 7, 8},
                        {5, 2, 1, 3, 4, 4, 6},
                        {1, 4, 5, 3, 5, 6, 7},
                        {2, 6, 1, 2, 5, 7, 8},
                        {5, 2, 1, 3, 4, 4, 6}},
                         {{1, 1, 2, 1, 3, 4, 4},
                        {1, 4, 5, 3, 5, 6, 7},
                        {2, 6, 1, 2, 5, 7, 8},
                        {5, 2, 1, 3, 4, 4, 6},
                        {1, 4, 5, 3, 5, 6, 7},
                        {2, 6, 1, 2, 5, 7, 8},
                        {5, 2, 1, 3, 4, 4, 6}},
                         {{1, 1, 2, 1, 3, 4, 4},
                        {1, 4, 5, 3, 5, 6, 7},
                        {2, 6, 1, 2, 5, 7, 8},
                        {5, 2, 1, 3, 4, 4, 6},
                        {1, 4, 5, 3, 5, 6, 7},
                        {2, 6, 1, 2, 5, 7, 8},
                        {5, 2, 1, 3, 4, 4, 6}},
                         {{1, 1, 2, 1, 3, 4, 4},
                        {1, 4, 5, 3, 5, 6, 7},
                        {2, 6, 1, 2, 5, 7, 8},
                        {5, 2, 1, 3, 4, 4, 6},
                        {1, 4, 5, 3, 5, 6, 7},
                        {2, 6, 1, 2, 5, 7, 8},
                        {5, 2, 1, 3, 4, 4, 6}},
                         {{1, 1, 2, 1, 3, 4, 4},
                        {1, 4, 5, 3, 5, 6, 7},
                        {2, 6, 1, 2, 5, 7, 8},
                        {5, 2, 1, 3, 4, 4, 6},
                        {1, 4, 5, 3, 5, 6, 7},
                        {2, 6, 1, 2, 5, 7, 8},
                        {5, 2, 1, 3, 4, 4, 6}},
                         {{1, 1, 2, 1, 3, 4, 4},
                        {1, 4, 5, 3, 5, 6, 7},
                        {2, 6, 1, 2, 5, 7, 8},
                        {5, 2, 1, 3, 4, 4, 6},
                        {1, 4, 5, 3, 5, 6, 7},
                        {2, 6, 1, 2, 5, 7, 8},
                        {5, 2, 1, 3, 4, 4, 6}},
                         {{1, 1, 2, 1, 3, 4, 4},
                        {1, 4, 5, 3, 5, 6, 7},
                        {2, 6, 1, 2, 5, 7, 8},
                        {5, 2, 1, 3, 4, 4, 6},
                        {1, 4, 5, 3, 5, 6, 7},
                        {2, 6, 1, 2, 5, 7, 8},
                        {5, 2, 1, 3, 4, 4, 6}},
                         {{1, 1, 2, 1, 3, 4, 4},
                        {1, 4, 5, 3, 5, 6, 7},
                        {2, 6, 1, 2, 5, 7, 8},
                        {5, 2, 1, 3, 4, 4, 6},
                        {1, 4, 5, 3, 5, 6, 7},
                        {2, 6, 1, 2, 5, 7, 8},
                        {5, 2, 1, 3, 4, 4, 6}}
    };
    int my_b[N_BLOCKS][MATRIX_SIZE][MATRIX_SIZE] = {
                        {{1, 1, 2, 1, 3, 4, 4},
                        {1, 4, 5, 3, 5, 6, 7},
                        {2, 6, 1, 2, 5, 7, 8},
                        {5, 2, 1, 3, 4, 4, 6},
                        {1, 4, 5, 3, 5, 6, 7},
                        {2, 6, 1, 2, 5, 7, 8},
                        {5, 2, 1, 3, 4, 4, 6}},
                         {{1, 1, 2, 1, 3, 4, 4},
                        {1, 4, 5, 3, 5, 6, 7},
                        {2, 6, 1, 2, 5, 7, 8},
                        {5, 2, 1, 3, 4, 4, 6},
                        {1, 4, 5, 3, 5, 6, 7},
                        {2, 6, 1, 2, 5, 7, 8},
                        {5, 2, 1, 3, 4, 4, 6}},
                         {{1, 1, 2, 1, 3, 4, 4},
                        {1, 4, 5, 3, 5, 6, 7},
                        {2, 6, 1, 2, 5, 7, 8},
                        {5, 2, 1, 3, 4, 4, 6},
                        {1, 4, 5, 3, 5, 6, 7},
                        {2, 6, 1, 2, 5, 7, 8},
                        {5, 2, 1, 3, 4, 4, 6}},
                         {{1, 1, 2, 1, 3, 4, 4},
                        {1, 4, 5, 3, 5, 6, 7},
                        {2, 6, 1, 2, 5, 7, 8},
                        {5, 2, 1, 3, 4, 4, 6},
                        {1, 4, 5, 3, 5, 6, 7},
                        {2, 6, 1, 2, 5, 7, 8},
                        {5, 2, 1, 3, 4, 4, 6}},
                         {{1, 1, 2, 1, 3, 4, 4},
                        {1, 4, 5, 3, 5, 6, 7},
                        {2, 6, 1, 2, 5, 7, 8},
                        {5, 2, 1, 3, 4, 4, 6},
                        {1, 4, 5, 3, 5, 6, 7},
                        {2, 6, 1, 2, 5, 7, 8},
                        {5, 2, 1, 3, 4, 4, 6}},
                         {{1, 1, 2, 1, 3, 4, 4},
                        {1, 4, 5, 3, 5, 6, 7},
                        {2, 6, 1, 2, 5, 7, 8},
                        {5, 2, 1, 3, 4, 4, 6},
                        {1, 4, 5, 3, 5, 6, 7},
                        {2, 6, 1, 2, 5, 7, 8},
                        {5, 2, 1, 3, 4, 4, 6}},
                         {{1, 1, 2, 1, 3, 4, 4},
                        {1, 4, 5, 3, 5, 6, 7},
                        {2, 6, 1, 2, 5, 7, 8},
                        {5, 2, 1, 3, 4, 4, 6},
                        {1, 4, 5, 3, 5, 6, 7},
                        {2, 6, 1, 2, 5, 7, 8},
                        {5, 2, 1, 3, 4, 4, 6}},
                         {{1, 1, 2, 1, 3, 4, 4},
                        {1, 4, 5, 3, 5, 6, 7},
                        {2, 6, 1, 2, 5, 7, 8},
                        {5, 2, 1, 3, 4, 4, 6},
                        {1, 4, 5, 3, 5, 6, 7},
                        {2, 6, 1, 2, 5, 7, 8},
                        {5, 2, 1, 3, 4, 4, 6}},
                         {{1, 1, 2, 1, 3, 4, 4},
                        {1, 4, 5, 3, 5, 6, 7},
                        {2, 6, 1, 2, 5, 7, 8},
                        {5, 2, 1, 3, 4, 4, 6},
                        {1, 4, 5, 3, 5, 6, 7},
                        {2, 6, 1, 2, 5, 7, 8},
                        {5, 2, 1, 3, 4, 4, 6}},
                         {{1, 1, 2, 1, 3, 4, 4},
                        {1, 4, 5, 3, 5, 6, 7},
                        {2, 6, 1, 2, 5, 7, 8},
                        {5, 2, 1, 3, 4, 4, 6},
                        {1, 4, 5, 3, 5, 6, 7},
                        {2, 6, 1, 2, 5, 7, 8},
                        {5, 2, 1, 3, 4, 4, 6}}
    };
    int correct_matrix[N_BLOCKS][MATRIX_SIZE][MATRIX_SIZE] = {
                        {{42, 63, 33, 40, 73, 90, 110},
                        {82, 123, 68, 80, 143, 175, 215},
                        {79, 114, 77, 81, 141, 170, 209},
                        {66, 77, 54, 60, 106, 127, 156},
                        {82, 123, 68, 80, 143, 175, 215},
                        {79, 114, 77, 81, 141, 170, 209},
                        {66, 77, 54, 60, 106, 127, 156}},
                        {{42, 63, 33, 40, 73, 90, 110},
                        {82, 123, 68, 80, 143, 175, 215},
                        {79, 114, 77, 81, 141, 170, 209},
                        {66, 77, 54, 60, 106, 127, 156},
                        {82, 123, 68, 80, 143, 175, 215},
                        {79, 114, 77, 81, 141, 170, 209},
                        {66, 77, 54, 60, 106, 127, 156}}, 
                         {{42, 63, 33, 40, 73, 90, 110},
                        {82, 123, 68, 80, 143, 175, 215},
                        {79, 114, 77, 81, 141, 170, 209},
                        {66, 77, 54, 60, 106, 127, 156},
                        {82, 123, 68, 80, 143, 175, 215},
                        {79, 114, 77, 81, 141, 170, 209},
                        {66, 77, 54, 60, 106, 127, 156}},
                        {{42, 63, 33, 40, 73, 90, 110},
                        {82, 123, 68, 80, 143, 175, 215},
                        {79, 114, 77, 81, 141, 170, 209},
                        {66, 77, 54, 60, 106, 127, 156},
                        {82, 123, 68, 80, 143, 175, 215},
                        {79, 114, 77, 81, 141, 170, 209},
                        {66, 77, 54, 60, 106, 127, 156}}, 
                         {{42, 63, 33, 40, 73, 90, 110},
                        {82, 123, 68, 80, 143, 175, 215},
                        {79, 114, 77, 81, 141, 170, 209},
                        {66, 77, 54, 60, 106, 127, 156},
                        {82, 123, 68, 80, 143, 175, 215},
                        {79, 114, 77, 81, 141, 170, 209},
                        {66, 77, 54, 60, 106, 127, 156}},
                        {{42, 63, 33, 40, 73, 90, 110},
                        {82, 123, 68, 80, 143, 175, 215},
                        {79, 114, 77, 81, 141, 170, 209},
                        {66, 77, 54, 60, 106, 127, 156},
                        {82, 123, 68, 80, 143, 175, 215},
                        {79, 114, 77, 81, 141, 170, 209},
                        {66, 77, 54, 60, 106, 127, 156}}, 
                         {{42, 63, 33, 40, 73, 90, 110},
                        {82, 123, 68, 80, 143, 175, 215},
                        {79, 114, 77, 81, 141, 170, 209},
                        {66, 77, 54, 60, 106, 127, 156},
                        {82, 123, 68, 80, 143, 175, 215},
                        {79, 114, 77, 81, 141, 170, 209},
                        {66, 77, 54, 60, 106, 127, 156}},
                        {{42, 63, 33, 40, 73, 90, 110},
                        {82, 123, 68, 80, 143, 175, 215},
                        {79, 114, 77, 81, 141, 170, 209},
                        {66, 77, 54, 60, 106, 127, 156},
                        {82, 123, 68, 80, 143, 175, 215},
                        {79, 114, 77, 81, 141, 170, 209},
                        {66, 77, 54, 60, 106, 127, 156}}, 
                         {{42, 63, 33, 40, 73, 90, 110},
                        {82, 123, 68, 80, 143, 175, 215},
                        {79, 114, 77, 81, 141, 170, 209},
                        {66, 77, 54, 60, 106, 127, 156},
                        {82, 123, 68, 80, 143, 175, 215},
                        {79, 114, 77, 81, 141, 170, 209},
                        {66, 77, 54, 60, 106, 127, 156}},
                        {{42, 63, 33, 40, 73, 90, 110},
                        {82, 123, 68, 80, 143, 175, 215},
                        {79, 114, 77, 81, 141, 170, 209},
                        {66, 77, 54, 60, 106, 127, 156},
                        {82, 123, 68, 80, 143, 175, 215},
                        {79, 114, 77, 81, 141, 170, 209},
                        {66, 77, 54, 60, 106, 127, 156}}
    };

    int my_c[N_BLOCKS][MATRIX_SIZE][MATRIX_SIZE] = {0};
    register int tmp_c;
    register int tmp_b;
    register int tmp_a;

     __asm__ volatile("m_st %[tmp_c], 0(%[c])\n\t"
                   :
                   : [c] "r"(my_c[0][0]), [tmp_c] "r"(tmp_c));

    int (*pa)[MATRIX_SIZE][MATRIX_SIZE] = my_a;
    int (*pb)[MATRIX_SIZE][MATRIX_SIZE] = my_b;
    int (*pc)[MATRIX_SIZE][MATRIX_SIZE] = my_c;

    #pragma GCC unroll 0
        for (int m = 0; m < N_BLOCKS; m++) {
        // Load the output.
        //display3D(my_a);
        //display3D(my_b);
        __asm__ volatile("m_ld_l %[tmp_a], 0(%[a])\n\t"
                            "m_ld_r %[tmp_b], 0(%[b])\n\t"
                            "m_mult %[tmp_c], %[tmp_a], %[tmp_b]\n\t"
                            : [tmp_c] "=&r"(tmp_c), [tmp_a] "=r"(tmp_a),
                            [tmp_b] "=r"(tmp_b)
                            : [a] "r"(pa), [b] "r"(pb));
        __asm__ volatile("m_st %[tmp_c], 0(%[c])\n\t"
                        :
                        : [c] "r"(pc), [tmp_c] "r"(tmp_c));
        }

    compare(correct_matrix, my_c);
}