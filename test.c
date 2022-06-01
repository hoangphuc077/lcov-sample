#include <stdio.h>
#include <gtest/gtest.h>

int foo(int x){
    if(x>0){
        return x;
    }else return 10;
}
TEST(Test, Test1){
    int a = foo(1);
    EXPECT_EQ(1, a);
}