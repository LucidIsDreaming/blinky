// You will write all your code for this tutorial here!

#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>

int main() {
    bn::core::init();
    bn::backdrop::set_color(bn::color(30,2,31));

    while(true) { //loop forever
    bn::core::update();
}

}