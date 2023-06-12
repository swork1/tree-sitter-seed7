module.exports = grammar({
  name: 'seed7',
  extras: $ => [/\s/, $.line_comment, $.block_comment],
  rules: {
    source_file: $ => repeat($._statement),
    _statement: $ => choice(
      $.block,
      $.include_statement,
      $.declaration,
      $.func_declaration,
      $._expression,
    ),
    include_statement: $ => seq(
      optional('$'),
      'include',
      $.string,
      ';'
    ),
    declaration: $ => seq(
      choice('const', 'var'),
      $.type,
      ':',
      $.name,
      'is',
      choice($.value, $._expression, $.enum_expression),
      ';'
    ),
    func_declaration: $ => seq(
      'const',
      'func',
      $.type,
      ':',
      $.name,
      $.parameter_list,
      'is',
      $.return_statement,
      ';'
    ),
    block: $ => choice(
      $.proc_block,
      $.while_block,
      $.block_block,
      $.repeat_block,
      $.func_block,
      $.if_block,
    ),
    func_block: $ => prec.left(1, seq(
      'const',
      'func',
      $.type,
      ':',
      $.name,
      $.parameter_list,
      'is',
      'func',
      optional($.result_block),
      optional($.local_block),
      'begin',
      repeat1($._statement),
      'end func',
      ';'
    )),
  
    proc_block: $ => prec.left(1, seq(
      'const',
      'proc',
      ':',
      $.name,
      'is',
      'func',
      optional($.result_block),
      optional($.local_block),
      'begin',
      repeat1($._statement),
      'end func',
      ';'
    )),
    result_block: $ => seq(
      'result',
      repeat1($.declaration),
    ),
    local_block: $ => seq(
      'local',
      repeat1($.declaration),
    ),
    while_block: $ => seq(
      'while',
      choice($._expression, $.value, $.name),
      'do',
      repeat($._statement),
      'end while',
      ';'
    ),
    if_block: $ => seq(
      'if',
      choice($._expression, $.value, $.name),
      'then',
      repeat($._statement),
      repeat($.esif_block),
      optional($.else_block),
      'end if',
      ';'
    ),
    esif_block: $ => seq(
      'elsif',
      choice($._expression, $.value, $.name),
      'then',
      repeat($._statement),
    ),
    else_block: $ => seq(
      'else',
      repeat($._statement),
    ),
    repeat_block: $ => seq(
      'repeat',
      repeat($._statement),
      'until',
      choice($._expression, $.value, $.name),
      ';'
    ),
    block_block: $ => seq(
      'block',
      repeat(choice($._statement, $.exception_block)),
      'end block',
      ';'
    ),
    exception_block: $ => seq(
      'exception',
      prec.left(1, repeat1(seq('catch', $.name, ':', prec.left(1, repeat1($._statement))))),
    ),
    return_statement: $ => seq(
      optional('return'),
      choice($._expression, $.value)
    ),
    parameter_list: $ => seq(
      '(',
      choice($.attr_param, $.param),
      repeat(seq(
        ',',
        choice($.attr_param, $.param),
      )),
      ')',
    ),
    attr_param: $ => seq(
      'attr',
      $.type,
    ),
    param: $ => seq(
      choice('val', 'ref', 'in', 'in var', 'inout'),
      $.type,
      ':',
      $.name,
    ),
    function_call: $ => prec(1, seq(
      choice($.name, $.type),
      '(',
      $.argument_list,
      ')',
    )),
    argument_list: $ => seq(
      choice($._expression, $.value),
      repeat(seq(
        ',',
        choice($._expression, $.value),
      ))
    ),
    type: $ => choice(
      field('array', seq('array', $.type)),
      'boolean',
      'integer',
      'bigInteger',
      'rational',
      'bigRational',
      'float',
      'complex',
      'char',
      'string',
      'hash',
      'set',
      'struct',
      'bin64',
      'bin32',
      'bstring',
      'color',
      'time',
      'duration',
      'file',
      'text',
      'fileSys',
      'process',
      'category',
      'reference',
      'ref_list',
      'program',
      'ptr',
      'func', 
      'varfunc',
      'void',
      'proc',
      'type',
      'object',
      'expr',
      'bitset',
    ),
    value: $ => choice(
      $.boolean,
      $.integer,
      $.string,
      $.float,
      $.bigRational,
      $.rational,
      $.bigInteger,
      $.NIL,
      $.char,
      $.empty,
      $.STD_NULL,
      $.forward,
    ),
    _expression: $ => prec.right(1, seq(
      choice(
        $.binary_expression,  
        $.unary_expression,
        $.parenthesized_expression,
        $.name,
        $.function_call,
        $.value_operator,
        $.set_expression,
        $.hash_expression,
        $.struct_expression,
      ),
      optional($.cast),
      optional(';')
    )),
    NIL: $ => 'NIL',
    empty: $ => 'empty',
    STD_NULL: $ => 'STD_NULL',
    forward: $ => 'forward',
    line_comment: $ => seq(
      '#',
      /.*/,
    ),
    block_comment: $ => seq(
      '(*',
      repeat(choice(
        /./
      )),
      '*)'
    ),
    binary_expression: $ => prec.left(1, seq(
      field('left', choice($._expression, $.value)),
      field('operator', $.binary_operator),
      field('right', choice($._expression, $.value)),
    )),
    unary_expression: $ => prec.left(1, seq(
      field('operator', $.unary_operator),
      field('argument', choice($._expression, $.value)),
    )),
    value_operator: $ => seq(
      choice($.type, $.name),
      '.',
      $.name,
    ),
    parenthesized_expression: $ => prec.left(1, seq(
      '(',
      choice($._expression, $.value),
      ')',
    )),
    set_expression: $ => choice(
      seq(
        '{',
        optional(seq(
          choice($._expression, $.value),
          repeat(seq(
            ',',
            choice($._expression, $.value),
          ))
        )),
        '}',
      ),
      seq(
        'set of',
        $.type,
      ),
    ),
    hash_expression: $ => seq(
      'hash',
      '[',
      $.type,
      ']',
      $.type,
    ),
    enum_expression: $ => seq(
      'new enum',
      $.name,
      repeat(seq(',', $.name)),
      'end enum',
    ),
    struct_expression: $ => seq(
      choice('new', 'sub'),
      optional($.type),
      'struct',
      $.declaration,
      repeat($.declaration),
      'end struct',
    ),
    binary_operator: $ => choice(
      '+',
      '-',
      '*',
      '/',
      'and',
      'or',
      'parse',
      'rem',
      'div',
      'mdiv',
      'mod',
      'times',
      '..',
      '**',
      'lpad',
      'lpad0',
      'radix',
      'digits',
      'sci',
      'exp',
      'mult',
      ':=',
      '+:=',
      '-:=',
      '*:=',
      '<<:=',
      '>>:=',
      '/:=',
      '|:=',
      '&:=',
      '@:=',
      '><:=',
      '<&',
      '<>'
    ),
    unary_operator: $ => choice(
      'not',
    ),
    boolean: $ => choice(
      'TRUE',
      'FALSE',
    ),
    name: $ => prec.right(1, seq(
      $.variable,
      optional($.cast)
    )),
    variable: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    integer: $ => seq(
      optional('-'),
      choice(
        $._decimalLiteral,
        $._exponentialLiteral,
        $._hexLiteral,
        $._octalLiteral,
        $._binaryLiteral
      )
    ),
    cast: $ => seq(
      '+',
      choice($.type, $.castFunction),
    ),
    castFunction: $ => seq(
      'ord',
    ),
    _decimalLiteral: $ => /[0-9]+/,
    _exponentialLiteral: $ => /[0-9]+[eE][+]?[0-9]+/,
    _negativeExponentialLiteral: $ => /[0-9]+[eE][-]?[0-9]+/,
    _hexLiteral: $ => /16#[0-9A-Fa-f]+/,
    _octalLiteral: $ => /8#[0-7]+/,
    _binaryLiteral: $ => /2#[01]+/,
    string: $ => seq(
      choice('"'),
      repeat(choice(
        /./,
      )),
      choice('"'),
    ),
    float: $ => seq(
      choice($._decimalLiteral, $._exponentialLiteral, $._negativeExponentialLiteral),
      '.',
      choice($._decimalLiteral, $._exponentialLiteral, $._negativeExponentialLiteral),
    ),
    bigRational: $ => seq(
      choice($._decimalLiteral),
      '_/',
      choice($._decimalLiteral),
      '_',
    ),
    rational: $ => prec(1,seq(
      choice($._decimalLiteral),
      '/',
      choice($._decimalLiteral),
    )),
    bigInteger: $ => seq(
      $.integer,
      '_',
    ),
    // Examples of character literals are:

    // 'a'   ' '   '\n'   '!'   '\\'   '2'   '"'   '\"'   '\''   '\8;'
    char: $ => prec.left(1, seq(
      "'",
      choice(
        /./,
        $.escape_sequence,
      ),
      "'",
    )),
    escape_sequence: $ => prec.left(1, seq(
      '\\',
      choice(
        /./,
        $.value,
        "'",
        '"',
      ),
      optional(';')
    )),
  }
})