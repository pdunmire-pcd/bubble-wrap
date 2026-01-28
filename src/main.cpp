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

    // Sprite 0: Big and rotated
    sprites[0].set_scale(2.0);
    sprites[0].set_rotation_angle(30);
    
    // Sprite 1: Stretched horizontally and sheared
    sprites[1].set_horizontal_scale(2.5);
    sprites[1].set_shear(0.8);
    
    // Sprite 2: Tall and thin with rotation
    sprites[2].set_horizontal_scale(0.5);
    sprites[2].set_vertical_scale(3.0);
    sprites[2].set_rotation_angle(45);
    
    // Sprite 3: Extreme shear with scale
    sprites[3].set_shear(1.2);
    sprites[3].set_scale(1.5);
    
    // Sprite 4: Multiple transformations combined
    sprites[4].set_horizontal_scale(2.0);
    sprites[4].set_vertical_scale(0.5);
    sprites[4].set_rotation_angle(90);
    sprites[4].set_shear(0.3);
    
    // Sprite 5: Small with mosaic effect
    sprites[5].set_scale(0.5);
    sprites[5].set_mosaic_enabled(true);
    
    // Sprite 6: Flipped both ways and scaled
    sprites[6].set_horizontal_flip(true);
    sprites[6].set_vertical_flip(true);
    sprites[6].set_scale(1.8);
    
    // Sprite 7: Stretched and flipped
    sprites[7].set_horizontal_scale(3.0);
    sprites[7].set_vertical_scale(0.8);
    sprites[7].set_horizontal_flip(true);
    
    // Sprite 8: Sheared with different scales
    sprites[8].set_horizontal_scale(1.5);
    sprites[8].set_vertical_scale(2.0);
    sprites[8].set_shear(-0.5);
    
    // Sprite 9: Everything at once!
    sprites[9].set_scale(1.5);
    sprites[9].set_rotation_angle(60);
    sprites[9].set_shear(0.4);
    sprites[9].set_blending_enabled(true);
    
    // Sprite 10: Wide and rotated
    sprites[10].set_horizontal_scale(3.5);
    sprites[10].set_vertical_scale(1.0);
    sprites[10].set_rotation_angle(15);
    
    // Sprite 11: Invisible (just for fun)
    sprites[11].set_visible(false);
    
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

    // for(int i = 0; i < sprites.size(); i++) {
    //     sprites[i].set_scale(1.5);  // This makes it an affine sprite
    //     bn::core::update();  // Update to see the error happen
    // }

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