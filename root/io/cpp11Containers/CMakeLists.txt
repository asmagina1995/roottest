ROOTTEST_ADD_TESTDIRS()

ROOTTEST_GENERATE_REFLEX_DICTIONARY(forwardList forwardList.h  SELECTION forwardList_selection.xml)

ROOTTEST_ADD_TEST(roottest-root-io-cpp11Containers-forwardList
                  MACRO  execForwardList.C
                  OUTREF execForwardList.ref
                  DEPENDS ${GENERATE_REFLEX_TEST})

ROOTTEST_GENERATE_REFLEX_DICTIONARY(unorderedSet unorderedSet.h  SELECTION unorderedSet_selection.xml)

ROOTTEST_ADD_TEST(roottest-root-io-cpp11Containers-unorderedSet
                  MACRO  execUnorderedSet.C
                  OUTREF execUnorderedSet.ref
                  DEPENDS ${GENERATE_REFLEX_TEST} roottest-root-io-cpp11Containers-forwardList)

ROOTTEST_GENERATE_REFLEX_DICTIONARY(unorderedMap unorderedMap.h  SELECTION unorderedMap_selection.xml)

ROOTTEST_ADD_TEST(roottest-root-io-cpp11Containers-unorderedMap
                  MACRO  execUnorderedMap.C
                  OUTREF execUnorderedMap.ref
                  DEPENDS ${GENERATE_REFLEX_TEST} roottest-root-io-cpp11Containers-unorderedSet)

ROOTTEST_ADD_TEST(roottest-root-io-cpp11Containers-Names
                  COPY_TO_BUILDDIR auxCode.h commonUtils.h
                  MACRO  execcpp11ContainersNames.C
                  OUTREF execcpp11ContainersNames.ref
                  DEPENDS ${GENERATE_REFLEX_TEST} roottest-root-io-cpp11Containers-unorderedMap)
