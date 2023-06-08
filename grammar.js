module.exports = grammar({
  name: 'seed7',

  rules: {
    source_file: $ => repeat($._definition),
    _definition: $ => choice(
      $.include_definition,
      $.comment_definition,
      $.const_definition,
    ),
    include_definition: $ => seq(
      'include',
      $.string,
      ';'
    ),
    comment_definition: $ => choice(
      prec.left(1, seq(
        '(*',
        repeat(choice(
          $.comment_definition,
          /./
        )),
        '*)'
      )),
      prec.left(2,seq(
        '#',
        repeat(choice(
          $.comment_definition,
          /[^#\n]/
        )),
      )),
    ),
    const_definition: $ => seq(
      'const',
      $.type,
      ':',
      $.identifier,
      'is',
      $._expression,
      ';'
    ),
    type: $ => choice(
      'boolean',
      'integer',
    ),
    identifier: $ => /[a-zA-Z_]\w*/,
    string: $ => /"[^"]*"/,
    _expression: $ => choice(
      $.identifier,
      $.string,
      $.number,
      $.binary_expression,
      $.unary_expression,
      $.parenthesized_expression,
    ),
    number: $ => /\d+/,
    binary_expression: $ => prec.left(1, seq(
      $._expression,
      choice('and', 'or'),
      $._expression
    )),
    unary_expression: $ => prec.left(2, seq(
      choice('not'),
      $._expression
    )),
    parenthesized_expression: $ => seq(
      '(',
      $._expression,
      ')'
    ),
  },
});