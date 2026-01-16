#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>
#include <bn_keypad.h>
#include <bn_sprite_ptr.h>
#include <bn_sprite_items_dot.h>




int main() {
    bn::core::init();
    bn::backdrop::set_color(bn::color(31,18,22));

    bn::sprite_ptr myCircle = bn::sprite_items::dot.create_sprite(10, 40);
    bn::sprite_ptr myCircle2 = bn::sprite_items::dot.create_sprite(30, 40);
    bn::sprite_ptr myCircle3 = bn::sprite_items::dot.create_sprite(40, 50);
    bn::sprite_ptr myCircle4 = bn::sprite_items::dot.create_sprite(70, 50);
    bn::sprite_ptr myCircle5 = bn::sprite_items::dot.create_sprite(-70, -50);
    bn::sprite_ptr myCircle6 = bn::sprite_items::dot.create_sprite(-10, -40);
    bn::sprite_ptr myCircle7 = bn::sprite_items::dot.create_sprite(-40, -50);


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