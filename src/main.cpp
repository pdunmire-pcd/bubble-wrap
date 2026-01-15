#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>
#include <bn_keypad.h>



int main() {
    bn::core::init();
    bn::backdrop::set_color(bn::color(31,18,22));

    
    while(true) {
        
        if (bn::keypad::a_pressed()) {
            bn::backdrop::set_color(bn::color(27,2,7));
            }
        if (bn::keypad::b_pressed()) {
            bn::backdrop::set_color(bn::color(31,0,31));
            }
        if (bn::keypad::down_pressed()) {
            bn::backdrop::set_color(bn::color(14,2,31));
            }
        if (bn::keypad::up_pressed()) {
            bn::backdrop::set_color(bn::color(4,2,21));
            }
        if (bn::keypad::left_pressed()) {
            bn::backdrop::set_color(bn::color(28,10,15));
            }
        if (bn::keypad::right_pressed()) {
            bn::backdrop::set_color(bn::color(19,16,31));
            }
        bn::core::update();
    }   
    
}