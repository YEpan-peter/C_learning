//
//  main.c
//  12_9
//
//  Created by 潘烨 on 2024/12/9.
//

//#include <stdio.h>
//
//int main()
//{
//    char* c[]= {"apple","balana","cat","dog"};
//    char** cp[] = {c,c+1,c+2,c+3};
//    char*** cpp = &cp;
//    printf("%s\n",**cpp);
//
//    return 0;
//}
#include <stdio.h>

int main() {
    char* c[] = { "njupt", "nju", "ptnju", "t" };
    char** cp[] = { c + 3, c + 2, c + 1, c };
    char*** cpp = cp;

    printf("%s\n", **++cpp);
    printf("%s\n", *--*++cpp + 3);
    printf("%s\n", *cpp[-2] + 3);
    printf("%s\n", cpp[-1][-1] + 1);

    return 0;
}
