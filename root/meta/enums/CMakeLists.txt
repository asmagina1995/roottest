ROOTTEST_GENERATE_REFLEX_DICTIONARY(fclassVal
                                    fclassVal.h
                                    SELECTION fclassVal_selection.xml)

ROOTTEST_ADD_TEST(roottest-root-meta-enums-fclassVal
                  MACRO execfclassVal.C
                  OUTREF execfclassVal.ref
                  DEPENDS ${GENERATE_REFLEX_TEST})

ROOTTEST_GENERATE_REFLEX_DICTIONARY(qualifiedNames
                                    qualifiedNames.h
                                    SELECTION qualifiedNames_selection.xml)

ROOTTEST_ADD_TEST(roottest-root-meta-enums-qualifiedNames
                  MACRO execQualifiedNames.C
                  OUTREF execQualifiedNames.ref
                  DEPENDS ${GENERATE_REFLEX_TEST})

ROOTTEST_GENERATE_REFLEX_DICTIONARY(enumsTestClasses
                                    enumsTestClasses.h
                                    SELECTION enumsTestClasses_selection.xml
                                    NO_ROOTMAP)

ROOTTEST_ADD_TEST(roottest-root-meta-enums-execEnumsTest
                  MACRO execEnumsTest.C
                  OUTREF execEnumsTest.ref
                  DEPENDS ${GENERATE_REFLEX_TEST})

ROOTTEST_GENERATE_REFLEX_DICTIONARY(tEnumGetEnumClasses
                                    tEnumGetEnumClasses.h
                                    SELECTION tEnumGetEnumClasses_selection.xml
                                    NO_ROOTMAP)

ROOTTEST_ADD_TEST(roottest-root-meta-enums-execTEnumGetEnum
                  MACRO execTEnumGetEnum.C
                  OUTREF execTEnumGetEnum.ref
                  DEPENDS ${GENERATE_REFLEX_TEST})


ROOTTEST_GENERATE_REFLEX_DICTIONARY(enumsInNamespaces
                  enumsInNamespaces.h
                  SELECTION enumsInNamespaces_selection.xml
                  NO_ROOTMAP)

ROOTTEST_ADD_TEST(roottest-root-meta-enums-enumsInNamespaces
                  MACRO execenumsInNamespaces.C
                  OUTREF execenumsInNamespaces.ref
                  DEPENDS ${GENERATE_REFLEX_TEST})

ROOTTEST_GENERATE_REFLEX_DICTIONARY(enumsInNamespaces2
                  enumsInNamespaces2.h
                  SELECTION enumsInNamespaces2_selection.xml
                  NO_ROOTMAP)

ROOTTEST_ADD_TEST(roottest-root-meta-enums-enumsInNamespaces2
                  MACRO execenumsInNamespaces2.C
                  OUTREF execenumsInNamespaces2.ref
                  DEPENDS ${GENERATE_REFLEX_TEST})

ROOTTEST_GENERATE_REFLEX_DICTIONARY(duplicateEnums
                  duplicateEnums.h
                  SELECTION duplicateEnums_selection.xml
                  NO_ROOTMAP)

ROOTTEST_ADD_TEST(roottest-root-meta-enums-duplicateEnums
                  MACRO execduplicateEnums.C
                  OUTREF execduplicateEnums.ref
                  DEPENDS ${GENERATE_REFLEX_TEST})
