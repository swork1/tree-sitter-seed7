module.exports = grammar({
  name: 'seed7',
  extras: $ => [/\s/, $.line_comment, $.block_comment],
  rules: {
    source_file: $ => repeat($._statement),
    _statement: $ => choice(
      $.include_statement,
      $.declaration,
      $._expression,
    ),
    include_statement: $ => seq(
      optional('$'),
      'include',
      /.*/, 
      ';'
    ),
    declaration: $ => seq(
      'const',
      $.type,
      ':',
      $.name,
      'is',
      choice($._expression, $.value),
      ';'
    ),
    function_call: $ => prec(1, seq(
      $.name,
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
      'boolean',
      'integer',
      'integer',
      'bigInteger',
      'rational',
      'bigRational',
      'float',
      'complex',
      'char',
      'string',
      'array',
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
    ),
    value: $ => choice(
      $.boolean,
      $.integer,
    ),
    _expression: $ => prec.right(1, seq(
      choice(
        $.binary_expression,  
        $.unary_expression,
        $.parenthesized_expression,
        $.name,
        $.function_call,
      ),
      optional($.cast),
    )),
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
    parenthesized_expression: $ => prec.left(1, seq(
      '(',
      choice($._expression, $.value),
      ')',
    )),
    binary_operator: $ => choice(
      '+',
      '-',
      '*',
      '/',
      'and',
      'or',
      'parse',
    ),
    unary_operator: $ => choice(
      'not',
    ),
    boolean: $ => choice(
      'TRUE',
      'FALSE',
    ),
    name: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    integer: $ => choice(
      $.decimalLiteral,
      $.exponentialLiteral,
      $.hexLiteral,
      $.octalLiteral,
      $.binaryLiteral
    ),
    cast: $ => seq(
      '+',
      $.type,
    ),
    decimalLiteral: $ => /[0-9]+/,
    exponentialLiteral: $ => /[0-9]+[eE][+-]?[0-9]+/,
    hexLiteral: $ => /16#[0-9A-Fa-f]+/,
    octalLiteral: $ => /8#[0-7]+/,
    binaryLiteral: $ => /2#[01]+/
  }
})
// Notes from syntax (seed7/lib/syntax.s7i) and grammar pages
// $ - Used to introduce all hard-coded statements ??
// () = statement
// Types?
// OPERATORS
// ASSOCIATIVITY
// STATEMENTS
// PROCEDURE_BODY
// PARAMETER
// DECLARATIONS
// SYSTEM_VARIABLES
// SEMICOLON
// WHEN
// ELSEIF
// EXCEPTION
// COMMA
// prgram = { white_space | token}
// token = identifier | literal
// white_space = spaces | comments | line_comments

// special_character ::=
// '!' | '$' | '%' | '&' | '*' | '+' | ',' | '-' | '.' | '/' |
// ':' | ';' | '<' | '=' | '>' | '?' | '@' | '\' | '^' | '`' |
// '|' | '~' .

// name_identifier ::=
// ( letter | underscore ) { letter | digit | underscore } .

// letter ::=
// upper_case_letter | lower_case_letter .

// upper_case_letter ::=
// 'A' | 'B' | 'C' | 'D' | 'E' | 'F' | 'G' | 'H' | 'I' | 'J' |
// 'K' | 'L' | 'M' | 'N' | 'O' | 'P' | 'Q' | 'R' | 'S' | 'T' |
// 'U' | 'V' | 'W' | 'X' | 'Y' | 'Z' .

// lower_case_letter ::=
// 'a' | 'b' | 'c' | 'd' | 'e' | 'f' | 'g' | 'h' | 'i' | 'j' |
// 'k' | 'l' | 'm' | 'n' | 'o' | 'p' | 'q' | 'r' | 's' | 't' |
// 'u' | 'v' | 'w' | 'x' | 'y' | 'z' .

// digit ::=
// '0' | '1' | '2' | '3' | '4' | '5' | '6' | '7' | '8' | '9' .

// underscore ::=
// '_' .

// parenthesis ::=
// '(' | ')' | '[' | ']' | '{' | '}' .

// literal ::=
// integer_literal | biginteger_literal | float_literal |
// character_literal | string_literal 

// integer_literal ::=
// decimal_integer [ exponent | based_integer ] .

// decimal_integer ::=
// digit { digit } .

// exponent ::=
// ( 'E' | 'e' ) [ '+' ] decimal_integer .

// based_integer ::=
// '#' extended_digit { extended_digit } .

// extended_digit ::=
// letter | digit .

// biginteger_literal ::=
// decimal_integer [ based_integer ] '_' .

// float_literal ::=
// decimal_integer '.' decimal_integer [ float_exponent ] .

// float_exponent ::=
// ( 'E' | 'e' ) [ '+' | '-' ] decimal_integer .

// string_literal ::=
// '"' { string_literal_element } '"' .

// string_literal_element ::=
// simple_literal_character | escape_sequence | apostrophe .

// simple_literal_character ::=
// letter | digit | parenthesis | special_literal_character |
// utf8_encoded_character .

// special_literal_character ::=
// ' ' | '!' | '#' | '$' | '%' | '&' | '*' | '+' | ',' | '-' |
// '.' | '/' | ':' | ';' | '<' | '=' | '>' | '?' | '@' | '^' |
// '_' | '`' | '|' | '~' .

// escape_sequence ::=
// '\a' | '\b' | '\e' | '\f' | '\n' | '\r' | '\t' | '\v' |
// '\\' | '\''' | '\"' | '\' upper_case_letter |
// '\' { space } '\' | '\' integer_literal ';' .

// apostrophe ::=
// ''' .

// character_literal ::=
// apostrophe char_literal_element apostrophe .

// char_literal_element ::=
// simple_literal_character | escape_sequence | apostrophe | '"' .

// $ const $ type: type   is $ newtype;

// $ const type: void     is $ newtype;
// $ const type: proc     is $ func void;
// $ const void: empty    is $ enumlit;

// $ const type: expr     is $ newtype;
// $ const type: object   is $ newtype;
// $ const type: string   is $ subtype object;
// $ const type: ACTION   is $ newtype;
// $ const type: f_param  is $ newtype;

// $ system "expr"         is expr;
// $ system "string"       is string;
// $ system "empty"        is empty;
// # $ system "true"         is TRUE;
// # $ system "false"        is FALSE;
// # $ system "integer"      is integer;
// # $ system "char"         is char;
// # $ system "string"       is string;
// $ system "proc"         is proc;
// $ system "assign"       is := ;
// $ system "create"       is ::= ;
// $ system "destroy"      is destroy;
// $ system "ord"          is ord;
// $ system "in"           is in;
// $ system "dot"          is . ;
// $ system "value"        is value;
// $ system "prot_outfile" is PROT_OUTFILE;
// $ system "flush"        is flush;
// $ system "write"        is write;
// $ system "writeln"      is writeln;
// # $ system "main"         is main;

// (* OPERATORS *)
// $ syntax expr: . { . }                       is  ->  1;
// $ syntax expr: . { .(). }                    is  ->  1;
// $ syntax expr: . { .(). .. .(). }            is  ->  1;
// $ syntax expr: .().conv.()                   is <-   1;
// $ syntax expr: .().varConv.()                is <-   1;
// $ syntax expr: .().cast.()                   is <-   1;
// $ syntax expr: .().value.()                  is <-   1;
// $ syntax expr: .().parse.()                  is <-   1;
// $ syntax expr: .getfunc.(expr)               is <-   1;
// $ syntax expr: .getobj.(expr)                is <-   1;
// $ syntax expr: . [ . ] .()                   is <-   1;
// $ syntax expr: . [ .(). ] .()                is <-   1;
// $ syntax expr: . [ .(). .. .(). ]            is <-   1;
// $ syntax expr: . [ .(). len .(). ]           is <-   1;
// $ syntax expr: .(). . .()                    is  ->  2;
// $ syntax expr: .(). [ .(). ]                 is  ->  2;
// $ syntax expr: .(). [ .(). default .(). ]    is  ->  2;
// $ syntax expr: .(). [ .(). .. . ]            is  ->  2;
// $ syntax expr: .(). [ . .. .(). ]            is  ->  2;
// $ syntax expr: .(). [ .(). .. .(). ]         is  ->  2;
// $ syntax expr: .(). [ .(). len .(). ]        is  ->  2;
// $ syntax expr: .(). [ .(). fixLen .(). ]     is  ->  2;
// $ syntax expr: .(). ^                        is  ->  2;
// $ syntax expr: .(). -> .()                   is  ->  2;
// $ syntax expr: . & .()                       is  ->  3;
// $ syntax expr: .(). ** .()                   is <-   4;
// $ syntax expr: .(). ! .()                    is  ->  4;
// $ syntax expr: . ! .()                       is  ->  4;
// $ syntax expr: . + .()                       is <-   5;
// $ syntax expr: . - .()                       is <-   5;
// $ syntax expr: . ~ .()                       is <-   5;
// $ syntax expr: . conj .()                    is <-   5;
// $ syntax expr: .(). * .()                    is  ->  6;
// $ syntax expr: .(). / .()                    is  ->  6;
// $ syntax expr: .().div.()                    is  ->  6;
// $ syntax expr: .().rem.()                    is  ->  6;
// $ syntax expr: .().divRem.()                 is  ->  6;
// $ syntax expr: .().mdiv.()                   is  ->  6;
// $ syntax expr: .().mod.()                    is  ->  6;
// $ syntax expr: .(). + .()                    is  ->  7;
// $ syntax expr: .(). - .()                    is  ->  7;
// $ syntax expr: .().times.()                  is <-   8;
// $ syntax expr: .().mult.()                   is  ->  8;
// $ syntax expr: .().find.()                   is  ->  8;
// $ syntax expr: .(). << .()                   is  ->  9;
// $ syntax expr: .(). >> .()                   is  ->  9;
// $ syntax expr: .(). & .()                    is  -> 10;
// $ syntax expr: .(). >< .()                   is  -> 11;
// $ syntax expr: .(). | .()                    is  -> 11;
// $ syntax expr: .(). = .()                    is <-> 12;
// $ syntax expr: .(). <> .()                   is <-> 12;
// $ syntax expr: .(). > .()                    is <-> 12;
// $ syntax expr: .(). >= .()                   is <-> 12;
// $ syntax expr: .(). < .()                    is <-> 12;
// $ syntax expr: .(). <= .()                   is <-> 12;
// $ syntax expr: .().in.()                     is <-> 12;
// $ syntax expr: .().not.in.()                 is <-> 12;
// $ syntax expr: .not.()                       is <-  13;
// $ syntax expr: .subtype.()                   is <-  13;
// $ syntax expr: .subrange.(). .. .()          is <-  13;
// $ syntax expr: .forward_ptr.(expr)           is <-  13;
// $ syntax expr: .ptr.()                       is <-  13;
// $ syntax expr: .varptr.()                    is <-  13;
// $ syntax expr: .tuple.()                     is <-  13;
// $ syntax expr: .set.of.()                    is <-  13;
// $ syntax expr: .array.()                     is <-  13;
// $ syntax expr: .array. [ .(). ] .()          is <-  13;
// $ syntax expr: .hash. [ .(). ] .()           is <-  13;
// $ syntax expr: .new.enum.(expr).end.enum     is  -> 13;
// $ syntax expr: .new.enum.end.enum            is  -> 13;
// $ syntax expr: .new.interface                is  -> 13;
// $ syntax expr: .sub.().interface             is  -> 13;
// $ syntax expr: .new.struct2.().end.struct    is  -> 13;
// $ syntax expr: .new.struct.().end.struct     is  -> 13;
// $ syntax expr: .new.struct.end.struct        is  -> 13;
// $ syntax expr: .new.().struct.().end.struct  is  -> 13;
// $ syntax expr: .new.().struct.end.struct     is  -> 13;
// $ syntax expr: .sub.().struct.().end.struct  is  -> 13;
// $ syntax expr: .sub.().struct.end.struct     is  -> 13;
// $ syntax expr: .new.class.().end.class       is  -> 13;
// $ syntax expr: .new.class.end.class          is  -> 13;
// $ syntax expr: .new.().class.().end.class    is  -> 13;
// $ syntax expr: .new.().class.end.class       is  -> 13;
// $ syntax expr: .sub.().class.().end.class    is  -> 13;
// $ syntax expr: .sub.().class.end.class       is  -> 13;
// $ syntax expr: .().and.()                    is  -> 14;
// $ syntax expr: .().or.()                     is  -> 15;
// $ syntax expr: .().val.()                    is  -> 16;
// $ syntax expr: .().radix.()                  is  -> 16;
// $ syntax expr: .().RADIX.()                  is  -> 16;
// $ syntax expr: .().digits.()                 is  -> 16;
// $ syntax expr: .().sci.()                    is  -> 16;
// $ syntax expr: .(). ? .(). : .()             is  <- 16;
// $ syntax expr: .().exp.()                    is  -> 17;
// $ syntax expr: .().lpad.()                   is  -> 17;
// $ syntax expr: .().rpad.()                   is  -> 17;
// $ syntax expr: .().lpad0.()                  is  -> 17;
// $ syntax expr: .(). <& .()                   is  -> 18;
// $ syntax expr: .(). := .()                   is <-> 20;
// $ syntax expr: .(). +:= .()                  is <-> 20;
// $ syntax expr: .(). -:= .()                  is <-> 20;
// $ syntax expr: .(). *:= .()                  is <-> 20;
// $ syntax expr: .(). /:= .()                  is <-> 20;
// $ syntax expr: .(). <<:= .()                 is <-> 20;
// $ syntax expr: .(). >>:= .()                 is <-> 20;
// $ syntax expr: .(). &:= .()                  is <-> 20;
// $ syntax expr: .(). ><:= .()                 is <-> 20;
// $ syntax expr: .(). |:= .()                  is <-> 20;
// $ syntax expr: .(). @:= . [ .(). ] .()       is <-> 20;
// $ syntax expr: .(). ::= .()                  is <-> 20;
// $ syntax expr: .(). :- .()                   is <-> 20;

// (* ASSOCIATIVITY *)
// $ syntax expr: . -> .()     is  -> 25;
// $ syntax expr: . <- .()     is  -> 25;
// $ syntax expr: . <-> .()    is  -> 25;
// $ syntax expr: . -><- .()   is  -> 25;

// (* STATEMENTS *)
// $ syntax expr: .while.().do.().end.while                         is  -> 25;
// $ syntax expr: .while.().do.end.while                            is  -> 25;
// $ syntax expr: .repeat.().until.()                               is  -> 25;
// $ syntax expr: .repeat.until.()                                  is  -> 25;

// $ syntax expr: .for.().range.().to.().do.().end.for              is  -> 25;
// $ syntax expr: .for.().range.().downto.().do.().end.for          is  -> 25;
// $ syntax expr: .for.().range.().to.().until.().do.().end.for     is  -> 25;
// $ syntax expr: .for.().range.().downto.().until.().do.().end.for is  -> 25;
// $ syntax expr: .for.().range.().to.().step.().do.().end.for      is  -> 25;
// $ syntax expr: .for.().range.().downto.().step.().do.().end.for  is  -> 25;
// $ syntax expr: .for.().range.().do.().end.for                    is  -> 25;
// $ syntax expr: .for.().range.().until.().do.().end.for           is  -> 25;
// $ syntax expr: .for.().key.().range.().do.().end.for             is  -> 25;
// $ syntax expr: .for.().key.().range.().until.().do.().end.for    is  -> 25;
// $ syntax expr: .for.key.().range.().do.().end.for                is  -> 25;
// $ syntax expr: .for.key.().range.().until.().do.().end.for       is  -> 25;
// $ syntax expr: .for.().do.().end.for                             is  -> 25;

// $ syntax expr: .if.().then.end.if                                is  -> 25;
// $ syntax expr: .if.().then.().end.if                             is  -> 25;
// $ syntax expr: .if.().then.().().end.if                          is  -> 25;

// $ syntax expr: .case.().of.().end.case                           is  -> 25;
// $ syntax expr: .case.().of.().otherwise. : .().end.case          is  -> 25;
// $ syntax expr: .case.().of.otherwise. : .().end.case             is  -> 25;
// $ syntax expr: .case.().of.end.case                              is  -> 25;

// $ syntax expr: .block.().exception.().end.block                  is  -> 25;
// $ syntax expr: .block.().exception.().otherwise. : .().end.block is  -> 25;
// $ syntax expr: .block.().exception.otherwise. : .().end.block    is  -> 25;
// $ syntax expr: .block.().exception.end.block                     is  -> 25;

// $ syntax expr: .global.().end.global                             is  -> 25;

// $ syntax expr: .raise.()                                         is  -> 25;

// $ syntax expr: .func.()      is <-  30;
// $ syntax expr: .varfunc.()   is <-  30;

// (* PROCEDURE BODY *)
// $ syntax expr: .func.local.().begin.(expr).end.func                                is <-  30;
// $ syntax expr: .func.begin.(expr).end.func                                         is <-  30;
// $ syntax expr: .func.begin.end.func                                                is <-  30;
// $ syntax expr: .func.result.var.(). : .(expr).is.().begin.(expr).end.func          is <-  30;
// $ syntax expr: .func.result.var.(). : .(expr).is.().local.().begin.(expr).end.func is <-  30;
// $ syntax expr: .varfunc.return.().().end.varfunc                                   is <-  30;
// $ syntax expr: .return.()                                                          is <-  30;
// $ syntax expr: .return.var.()                                                      is <-  30;
// $ syntax expr: .().return.()                                                       is <-  30;
// $ syntax expr: .().return.var.()                                                   is <-  30;

// $ syntax expr: .action.()                      is  -> 30;

// $ syntax expr: . $ .()                         is  -> 35;

// (* PARAMETER *)
// $ syntax expr: .val.().param                   is  -> 40;
// $ syntax expr: .val.(). : .(expr)              is  -> 40;
// $ syntax expr: .in.().param                    is  -> 40;
// $ syntax expr: .in.(). : .(expr)               is  -> 40;
// $ syntax expr: .in.var.().param                is  -> 40;
// $ syntax expr: .in.var.(). : .(expr)           is  -> 40;
// $ syntax expr: .inout.().param                 is  -> 40;
// $ syntax expr: .inout.(). : .(expr)            is  -> 40;
// $ syntax expr: .ref.().param                   is  -> 40;
// $ syntax expr: .ref.(). : .(expr)              is  -> 40;
// $ syntax expr: .symb.()                        is  -> 40;
// $ syntax expr: .attr.()                        is <-  40;

// (* DECLARATORS *)
// $ syntax expr: .syntax.(). : .().is.(expr)     is  -> 40;
// $ syntax expr: .const.(). : .(expr).is.(expr)  is  -> 40;
// $ syntax expr: .const.(). : .(expr).is.forward is  -> 40;
// $ syntax expr: .var.(). : .(expr).is.(expr)    is  -> 40;
// $ syntax expr: .var.(). : .(expr).is.default   is  -> 40;
// $ syntax expr: .var.(). : .(expr).is.forward   is  -> 40;
// $ syntax expr: .include.()                     is  -> 40;
// $ syntax expr: .elem.(). : .(expr).is.(expr)   is  -> 40;

// (* system VARIABLES *)
// $ syntax expr: .system.().is.()                is  -> 40;

// (* SEMICOLON *)
// $ syntax expr: .(). ; .()                      is <-  50;
// $ syntax expr: .(). ;                          is <-  50[1];

// (* WHEN *)
// $ syntax expr: .when.(). : .().()              is <-  60;
// $ syntax expr: .when.(). : .()                 is <-  60;

// (* ELSIF *)
// $ syntax expr: .elsif.().then.()               is <-  60;
// $ syntax expr: .elsif.().then.().()            is <-  60;
// $ syntax expr: .else.()                        is <-  60;

// (* EXCEPTION *)
// $ syntax expr: .catch.(). : .().()             is <-  60;
// $ syntax expr: .catch.(). : .()                is <-  60;

// (* COMMA *)
// $ syntax expr: .(). , .()                      is  -> 100;
// # $ syntax expr: . )                             is <-  100;

