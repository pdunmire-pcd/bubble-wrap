#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>
#include <bn_keypad.h>
#include <bn_sprite_ptr.h>
#include <bn_sprite_items_dot.h>
#include <bn_log.h>
#include <bn_vector.h>





int main() {
    bn::core::init();
    bn::backdrop::set_color(bn::color(31,18,22));

    bn::vector<bn::sprite_ptr, 50> sprites;

    // Nested loops for a grid
    for(int x = -60; x <= 60; x += 30) {
        for(int y = -60; y <= 60; y += 30) {
            sprites.push_back(bn::sprite_items::dot.create_sprite(x, y));
        }
    }

    // Scale the first sprite uniformly
    sprites[0].set_scale(1.8);
    
    // Horizontal scale - makes sprite wider
    sprites[1].set_horizontal_scale(2.0);
    
    // Vertical scale - makes sprite taller
    sprites[2].set_vertical_scale(2.5);
    
    // Shear - skews the sprite (creates a slanted effect)
    sprites[3].set_shear(0.5);
    
    // Rotation - rotates the sprite (in degrees)
    // Note: might be hard to see on a circle!
    sprites[4].set_rotation_angle(45);

    // set_visible - hides a sprite
    sprites[5].set_visible(false);
    
    // set_horizontal_flip - mirrors horizontally
    sprites[6].set_horizontal_flip(true);
    
    // set_vertical_flip - mirrors vertically
    sprites[7].set_vertical_flip(true);
    
    // set_mosaic_enabled - creates a pixelated/blocky effect
    sprites[8].set_mosaic_enabled(true);
    
    // set_blending_enabled - allows transparency blending
    sprites[9].set_blending_enabled(true);

    // bn::sprite_ptr myCircle = bn::sprite_items::dot.create_sprite(-40, 40);
    // bn::sprite_ptr myCircle2 = bn::sprite_items::dot.create_sprite(-30, 40);
    // bn::sprite_ptr myCircle3 = bn::sprite_items::dot.create_sprite(-20, 40);
    // bn::sprite_ptr myCircle4 = bn::sprite_items::dot.create_sprite(-10, 40);
    // bn::sprite_ptr myCircle5 = bn::sprite_items::dot.create_sprite(0, 40);
    // bn::sprite_ptr myCircle6 = bn::sprite_items::dot.create_sprite(10, 40);
    // bn::sprite_ptr myCircle7 = bn::sprite_items::dot.create_sprite(20, 40);
    // bn::sprite_ptr myCircle8 = bn::sprite_items::dot.create_sprite(30, 40);
    // bn::sprite_ptr myCircle9 = bn::sprite_items::dot.create_sprite(40, 40);


    // // Top left bump of heart
    // bn::sprite_ptr myCircle = bn::sprite_items::dot.create_sprite(-20, -30);
    // bn::sprite_ptr myCircle2 = bn::sprite_items::dot.create_sprite(-10, -35);
    // bn::sprite_ptr myCircle3 = bn::sprite_items::dot.create_sprite(0, -25);

    // //top right bump of heart
    // bn::sprite_ptr myCircle4 = bn::sprite_items::dot.create_sprite(10, -35);
    // bn::sprite_ptr myCircle5 = bn::sprite_items::dot.create_sprite(20, -30);

    // //Middle sides
    // bn::sprite_ptr myCircle6 = bn::sprite_items::dot.create_sprite(-25, -20);
    // bn::sprite_ptr myCircle7 = bn::sprite_items::dot.create_sprite(25, -20);

    // bn::sprite_ptr myCircle8 = bn::sprite_items::dot.create_sprite(-20, -10);
    // bn::sprite_ptr myCircle9 = bn::sprite_items::dot.create_sprite(20, -10);

    // //Bottom sides tapering in
    // bn::sprite_ptr myCircle10 = bn::sprite_items::dot.create_sprite(-15, 0);
    // bn::sprite_ptr myCircle11 = bn::sprite_items::dot.create_sprite(15, 0);
    
    // //Bottom point
    // bn::sprite_ptr myCircle12 = bn::sprite_items::dot.create_sprite(-5, 20);
    // bn::sprite_ptr myCircle13 = bn::sprite_items::dot.create_sprite(5, 20);
    // bn::sprite_ptr myCircle14 = bn::sprite_items::dot.create_sprite(0, 25);

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