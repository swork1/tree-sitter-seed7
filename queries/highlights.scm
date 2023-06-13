(line_comment) @comment
(block_comment) @comment
(include_statement) @include
(function_call (name (variable) @function.method)) 
(binary_operator) @operator
(unary_operator) @operator

[
    "const"
    "is"
    "return"
    "new"
    "var"
    "sub"
    "for"
    "enum"
    "set"
    "of"
    "struct"
    "if"
    "block"
    "until"
    "range"
    "key"
    "repeat"
    "while"
    "do"
    "local"
    "begin"
    "exception"
    "func"
    "elsif"
    "otherwise"
    "case"
    "proc"
    "end"
    "when"
    "else"
] @keyword

(cast) @cast
(cast (type) @cast)
(cast (castFunction) @cast)
(type) @type
(boolean) @boolean
[
    (integer)
    (float)
    (bigRational)
    (rational)
    (bigInteger)
] @number

(string) @string
(char) @char
[
    (NIL)
    (char)
    (empty)
    (STD_NULL)
    (forward)
] @bold_value