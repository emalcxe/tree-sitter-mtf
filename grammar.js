/**
 * @file MegaMek mtf file
 * @author Exclame <root@exclame.dev>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "mtf",

  conflicts: $ => [
    [$.weapons],
    [$.limb]
  ],

  rules: {
    mek: $ => repeat($._definition),

    _definition: $ => choice(
      $.limb,
      $.weapons,
      $.weapon,
      $.armor,
      $.pair,
    ),
    
    


    weapons: $ => seq(
      "Weapons:",
      field("wep_count",/[0-9]+\n/),
      repeat($.weapon)
    ),

    weapon: $ => seq(
      field("name",$.identifier),
      ", ",
      field("location",$.identifier),
    ),

    armor: $ => seq(
      field("location",/[A-Z]+/),
      " Armor:",
      field("amount",/[0-9]+/)
    ),

    limb: $ => seq(
      field("name",$.identifier),
      ":\n",
      repeat(choice(
        $.identifier,
        $.empty
      ))
    ),

    identifier: $ => /[A-z0-9 -]+/,
    empty: $ => "-Empty-",

    chassis: $ => seq(
      "chassis:",
      field("body",/.+/)
    ),

    pair: $ => seq(
      field("name", $.identifier),
      ":",
      field("body",/.+/)
    ),
    }
    
});
