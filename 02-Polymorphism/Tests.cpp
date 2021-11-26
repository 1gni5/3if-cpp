#include "TestTrajetSimple.h"
#include "TestCellule.h"
#include "TestListeChainee.h"
#include "TestTrajetCompose.h"

int main() {
    TestTrajetSimple::RunAllUnitTest ( );
    TestCellule::RunAllUnitTest ( );
    TestListeChainee::RunAllUnitTest ( );
    TestTrajetCompose::RunAllUnitTest ( );
}
