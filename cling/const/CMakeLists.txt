ROOTTEST_ADD_TEST(roottest-cling-const-run1
                  MACRO runConst.C
                  OUTREF good1.output
                  LABELS roottest regression cling)

ROOTTEST_ADD_TEST(roottest-cling-const-run2
                  MACRO runConst.C+
                  OUTREF good2.output
                  LABELS roottest regression cling)

get_filename_component(abspath ${CMAKE_CURRENT_SOURCE_DIR}/../../root/ ABSOLUTE)
ROOTTEST_ADD_TEST(roottest-cling-const-constCharTest
                  COPY_TO_BUILDDIR constissue.h
                  MACRO ${abspath}/build.C\(\"constissue.h\"\)
                  LABELS roottest regression cling)
