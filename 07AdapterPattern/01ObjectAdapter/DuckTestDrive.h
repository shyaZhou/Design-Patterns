#ifndef _DUCK_TEST_DRIVE_H_
#define _DUCK_TEST_DRIVE_H_
#include "MallardDuck.h"
#include "WildTurkey.h"
#include "TurkeyAdapter.h"
struct DuckTestDrive {
    static void main(const char** args = nullptr) {
        MallardDuck *duck = new MallardDuck();

        WildTurkey *turkey = new WildTurkey();
        Duck *turkeyAdapter = new TurkeyAdapter(turkey);

        std::cout << "The Turkey says...\n";
        turkey->gobble();
        turkey->fly();

        std::cout << "\nThe Duck says...\n";
        testDuck(duck);

        std::cout << "\nThe TurkeyAdapter syas...\n";
        testDuck(turkeyAdapter);
    }

    static void testDuck(Duck *duck) {
        duck->quack();
        duck->fly();
    }
};
#endif