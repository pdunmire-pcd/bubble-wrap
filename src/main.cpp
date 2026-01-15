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

        bn::core::update();
    }   
    
}