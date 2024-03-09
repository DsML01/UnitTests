#include "Unity/unity.h"
#include "primeirafuncao.h"

void setUp()
{

};

void tearDown()
{

};

void test_funcao()
{
    TEST_ASSERT_EQUAL( 1, funcao());

}

int main()
{
    UNITY_BEGIN();
    RUN_TEST(test_funcao);
    return UNITY_END();
}