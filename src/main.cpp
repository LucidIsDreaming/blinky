// You will write all your code for this tutorial here!

#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>
#include <bn_keypad.h>


int main() {
    bn::core::init();
    bn::backdrop::set_color(bn::color(18,4,20));

//if A button is pressed, change backdrop color to pastel pink
//EACH FRAME if A button is pressed, change backdrop color to pastel pink


    while(true) { //loop forever

    if(bn::keypad::a_pressed()){
        bn::backdrop::set_color(bn::color(31,0,14));
    }
    if(bn::keypad::b_pressed()){
        bn::backdrop::set_color(bn::color(0,0,31));
    }
    //when no buttons are pressed it defaults back to original purple color 
    if(bn::keypad::any_released()){
        bn::backdrop::set_color(bn::color(25,2,31));
    }
    //both colors combine when a & b pressed at the same time (just a darker purple)
    if(bn::keypad::a_pressed() && bn::keypad::b_pressed()){
        bn::backdrop::set_color(bn::color(16,4,23));
    }

    bn::core::update();

    
}

}