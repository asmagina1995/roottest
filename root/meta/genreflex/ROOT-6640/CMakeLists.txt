ROOTTEST_GENERATE_REFLEX_DICTIONARY(ROOT6440 ROOT6440.h SELECTION ROOT6440_selection.xml)

ROOTTEST_ADD_TEST(roottest-root-meta-genreflex-ROOT-6440-ROOT6440
                  MACRO runROOT6440.C
                  DEPENDS ${GENERATE_REFLEX_TEST})
